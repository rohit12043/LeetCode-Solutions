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
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = head->next;
        head->next = nullptr;

        while(curr){
            ListNode* next = curr->next; 
            ListNode* prev = &dummy;

            while(prev->next && prev->next->val < curr->val){
                prev = prev->next;
            }

            curr->next = prev->next;
            prev->next = curr;

            curr = next;
        }
        return dummy.next;
    }
};
