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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;

        while(list1!=NULL and list2!=NULL){
            if(list1->val >= list2->val){
                ListNode* node=new ListNode(list2->val);
                list2=list2->next;
                temp->next=node;
                temp=temp->next;
            }
            else{
                ListNode* node=new ListNode(list1->val);
                list1=list1->next;
                temp->next=node;
                temp=temp->next;
            }
        }

        while(list1!=NULL){
                ListNode* node=new ListNode(list1->val);
                list1=list1->next;
                temp->next=node;
                temp=temp->next;
        }
        while(list2!=NULL){
                ListNode* node=new ListNode(list2->val);
                list2=list2->next;
                temp->next=node;
                temp=temp->next;
        }
        return dummy->next; 
    }
};