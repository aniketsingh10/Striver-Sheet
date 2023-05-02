/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        bool flag=false;

        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                flag=true;
                break;
            }
        }
        if(flag){
            fast=head;
            while(slow!=fast){
                slow=slow->next; //move fast and slow by one one step
                fast=fast->next;
            }
            return slow;
        }
        return NULL; 
    }
};