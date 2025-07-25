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
        if(head == nullptr) return nullptr;

        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = current->next;

        while(current != nullptr){
            current->next = prev;
            prev = current;
            current = next;
            if(current != nullptr){
            next = current->next;
            }
        }
        return prev;
        }
};
