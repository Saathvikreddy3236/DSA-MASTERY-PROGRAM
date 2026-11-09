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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int n=0;
        while(temp != nullptr){
            n++;
            temp=temp->next;
        }
        if(n==0 || n==1){
            head = nullptr;
            return head;
        }
        temp=head;
        n=n/2;
        while(temp->next!=nullptr){
            if(n==1){
                temp->next=temp->next->next;
                return head;
            }
            temp=temp->next;
            n--;
        }
        return head;
    }
};