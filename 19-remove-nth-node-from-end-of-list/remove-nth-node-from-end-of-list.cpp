class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int t = 0;
        ListNode* temp = head;

        while(temp != nullptr) {
            t++;
            temp = temp->next;
        }

        if(n == t) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        temp = head;

        for(int i = 1; i < t-n; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }
};