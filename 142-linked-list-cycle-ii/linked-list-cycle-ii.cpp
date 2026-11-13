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
        int pos=0,cur=0;
        while(head!=nullptr){
            cur++;
            if(head->val == INT_MAX){
                head->val = INT_MIN;
                cur=0;
            }
                
            else{
                pos++;
                head->val = INT_MAX;
            }
            if(head->val == INT_MIN){
                pos = pos-cur;
                return head;
            }
            head = head->next;
        }
        return nullptr;
    }
};