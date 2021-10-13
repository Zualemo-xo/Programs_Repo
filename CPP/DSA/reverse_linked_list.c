/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
struct ListNode *current, *prev, *next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    { //so that there is no breakage in the link traverse to next node
        next=current->next;
        current->next=prev;
        
        
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}