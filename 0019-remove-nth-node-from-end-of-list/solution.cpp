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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = 0;
        ListNode* curr = head;
        while(i < n){
            curr = curr->next;
            i++;
        }
        if(curr == nullptr){
            head = head->next;
        }
        else{
        ListNode* pre = head;

        while(curr->next != nullptr){
            pre = pre->next;
            curr = curr->next;
        }
        pre->next = pre->next->next;
        }
        return head;
    }
};
