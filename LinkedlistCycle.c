/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head==NULL||head->next==NULL){
        return false;
    }
    struct ListNode *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        if(slow!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        return true;}
        else{
            return false;
        }
    }
return false;
}
