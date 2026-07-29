/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int getLength(ListNode* head) {
        int length = 0;
        while(head) {
            length++;
            head = head->next;
        }
        return length;
    }
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int m = getLength(headA);
        int n = getLength(headB);

        if(m<n) {
            swap(m,n);
            swap(headA,headB);
        }

        while(m-->n && headA) {
            headA = headA->next;
        }

        while(headA && headA!=headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};