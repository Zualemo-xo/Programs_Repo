#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;


node* create(int x){
    node* new=(node *)malloc(sizeof(node));
    new->data=x;
    new->left=NULL;
    new->right=NULL;
    return new;
}

node* insert(node* root,int x){
    if(root==NULL){
        root=create(x);
        return root;
    }
    
    if(root->data > x) root->left=insert(root->left, x);
    else if(root->data < x) root->right=insert(root->right, x);
    else printf("\nAlready Exist\n");
    
    return root;
    
    
}

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}

void freeTree(node* root){
    if(root!=NULL){
        freeTree(root->left);
        free(root);
        freeTree(root->right);
    }
}

node* search(node* root, int x){
    if(root==NULL) return NULL;
    if(root->data==x) return root;
    else if(root->data > x){
        return search(root->left,x);
    }
    else return search(root->right, x);
}

node* delete_node(node* root, int k){
    if(root==NULL){
    printf("%d does not exist",k);
      return root;  
    } 
    if(root->data > k) root->left=delete_node(root->left,k);
    else if(root->data < k) root->right=delete_node(root->right,k);
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->left !=NULL && root->right!=NULL){
            node* curr=root->right;
            while(curr!=NULL && curr->left!=NULL){
                curr=curr->left;
            }
            root->data=curr->data;
            root->right=delete_node(root->right, curr->data);
            return root;
        }
    }
    return root;
}

int main(){
    node* root=NULL;
    int ch,x;
    do{
        printf("\n1.Insert\n");
        printf("2.Display\n");
        printf("3.Delete\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        if(ch==4){
            freeTree(root);
            printf("\nexiting..");
            break;
        }
        switch (ch)
        {
            case 1:
            printf("\nenter no: to insert: ");
            scanf("%d",&x);
            root=insert(root, x);
            break;
        case 2:
            if(root) inorder(root);
            else printf("\nEmpty tree");
            printf("\n");
            break;
        case 3:
            if(root){
                    inorder(root);
                    printf("enter node to delete: ");
                    scanf("%d",&x);
                    root=delete_node(root,x);
                    printf("deleted %d succesfully!\n",x);
            }
            else printf("Empty tree\n");
            break;
        case 4:
            break;
        default:
            break;
        }
    }while(ch!=4);

    return 0;

}
