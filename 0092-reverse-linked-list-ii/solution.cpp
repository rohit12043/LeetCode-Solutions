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

    ListNode* Reverse(ListNode* curr, int count){
    if(count == 0) return curr;

    ListNode* head1 = Reverse(curr->next, count - 1);

    curr->next->next = curr;
    curr->next = nullptr;
    
    return head1;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        ListNode* temp = new ListNode(0);
        temp->next = head;
        
        ListNode* prev = temp;
        ListNode* forward = temp;
        int i = 0;

        while(i < left-1){
            prev = prev->next;
            i++;
        }

        i = 0;

        while(i <= right){
                forward = forward->next;
                i++;
            }

        ListNode* curr = prev->next;
        ListNode* next = nullptr;

        ListNode* newHead = Reverse(curr, right - left);
        prev->next = newHead;

        ListNode* temp2 = newHead;

        while(temp2->next != nullptr){
            temp2 = temp2->next;
        } 
        temp2->next = forward;
        return temp->next;
    }
};
