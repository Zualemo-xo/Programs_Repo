#include <iostream>
#include <queue>
using namespace std;
struct Node{
   int data;
   struct Node* left, *right;
};
// Function to get the count of half Nodes
int halfcount(struct Node* node){
   // If tree is empty
   if (!node)
   return 0;
   int result = 0; // Initialize count of half nodes
   // Do level order traversal starting from root
   queue<Node *> myqueue;
   myqueue.push(node);
   while (!myqueue.empty()){
      struct Node *temp = myqueue.front();
      myqueue.pop();
      if ((!temp->left && temp->right) || (temp->left && !temp->right)){
         result++;
      }
      if (temp->left != NULL){
         myqueue.push(temp->left);
      }
      if (temp->right != NULL){
         myqueue.push(temp->right);
      }
   }
   return result;
}
/* To allocate new Node with the given data and NULL left
and right pointers. */
struct Node* newNode(int data){
   struct Node* node = new Node;
   node->data = data;
   node->left = node->right = NULL;
   return (node);
}
int main(void){
   struct Node *root = newNode(10);
   root->left = newNode(20);
   root->right = newNode(30);
   root->left->left = newNode(40);
   root->left->right = newNode(50);
   root->left->left->right = newNode(60);
   root->left->right->right = newNode(70);
   cout <<"count is: "<<halfcount(root);
   return 0;
}
