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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = nullptr;
        ListNode *current = l3;
        int carry = 0, sum = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            sum = x + y + carry;
            carry = sum / 10;
            sum = sum % 10;

            ListNode *node = new ListNode(sum);
            if (l3 == nullptr) {
                l3 = node;
            } else {
            current->next = node;
            }

            current = node;

            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }
        }
        return l3;
    }
};
