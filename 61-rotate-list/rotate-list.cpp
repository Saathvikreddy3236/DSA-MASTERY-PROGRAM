class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* temp = head;
        int n = 0;

        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        if (k == 0)
            return head;

        temp = head;
        int pos = 0;
        ListNode* temp1 = nullptr;

        while (temp != nullptr) {
            if (pos == n - k - 1)
                temp1 = temp;

            pos++;
            temp = temp->next;
        }

        ListNode* newHead = temp1->next;

        temp1->next = nullptr;

        temp = newHead;

        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = head;

        return newHead;
    }
};