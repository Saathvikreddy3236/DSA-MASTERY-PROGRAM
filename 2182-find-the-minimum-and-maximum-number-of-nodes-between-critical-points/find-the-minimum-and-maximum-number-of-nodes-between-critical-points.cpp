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
    int size(ListNode* head) {
        int count = 0;
        ListNode* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int n = size(head);
        if (n < 3)
            return {-1, -1};
        vector<int> v;
        ListNode* prev = head;
        ListNode* temp = head->next;
        for (int i = 1; i < n - 1; i++) {
            ListNode* next = temp->next;
            if ((temp->val > prev->val && temp->val > next->val) ||
                (temp->val < prev->val && temp->val < next->val)) {
                v.push_back(i);
            }
            prev = temp;
            temp = next;
        }
        if (v.size() < 2)
            return {-1, -1};
        int minDist = INT_MAX;
        for (int i = 1; i < v.size(); i++) {
            minDist = min(minDist, v[i] - v[i - 1]);
        }
        int maxDist = v.back() - v.front();
        return {minDist, maxDist};
    }
};