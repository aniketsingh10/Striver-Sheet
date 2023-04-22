/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        ListNode* prev=NULL;

        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        if(n==size){
            return head->next;
        }
        n=size-n;
        while(n--){
            prev=curr;
            curr=curr->next;
            if(n==0){
                prev->next=curr->next;
                return head;
            }
        }

        return head;
    }
};