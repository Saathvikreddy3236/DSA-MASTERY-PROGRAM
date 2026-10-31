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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp = head;
        ListNode* temp1 = temp->next;
        ListNode* temp2;

        temp->next = nullptr;

        while (temp1 != nullptr) {
            temp2 = temp1->next;
            temp1->next = temp;
            temp = temp1;
            temp1 = temp2;
        }

        return temp;
    }
};