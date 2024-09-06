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
    ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
        unordered_set<int> un(nums.begin(), nums.end());
        ListNode dummy;
        dummy.next = head;
        ListNode* current = &dummy;
        while (current->next != nullptr) {
            if (un.count(current->next->val)) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return dummy.next;
    }
};