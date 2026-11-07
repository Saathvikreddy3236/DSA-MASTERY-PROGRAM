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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp = head;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        if(n==1 || n==0)
            return head;
        int k=0;
        temp = head;
        while(temp!=nullptr){
            k++;
            temp=temp->next;
            if(k==n/2)
                return temp;
            
        }
        return temp;
    }
};