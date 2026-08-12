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
        if(!head || head->next) {
            return true;
        }


        ListNode* slow = head;
        ListNode* fast = slow;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        while(slow) {
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }

        ListNode* start = head;
        ListNode* end = prev;
        while(end) {
            if(end!=start) {
                return false;
            }
            end = end->next;
            start = start->next;
        }
        return true;

    }
};