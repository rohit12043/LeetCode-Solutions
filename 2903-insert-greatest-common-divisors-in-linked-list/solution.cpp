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

    int findGCD(int a, int b){
        while(b != 0){
            int temp = a%b; 
            a = b;
            b = temp;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head) return head;
        ListNode* current = head;
        while(current->next != nullptr){
            ListNode* temp = new ListNode();
            temp->val = findGCD(current->val, current->next->val);
            temp->next = current->next;
            current->next = temp;
            current = current->next->next;
        }
        return head;
    }
};
