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
    bool isPalindrome(ListNode* head) {
        
        if(head->next == NULL){
            return true;
        }
        ListNode* ptr=head;
        vector<int> arr;
        
        while(ptr!=NULL){
            arr.emplace_back(ptr->val);
            ptr=ptr->next;    
        }
        
        int n=arr.size();
        int i=0;
            
        while(i< n/2){
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
            i++;    
        }
        return true;
    }
};