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
    ListNode* merge(ListNode* left, ListNode* right) {
        if (!left) return right;
        if (!right) return left;
        
        ListNode* result = nullptr;
        if (left->val <= right->val) {
            result = left;
            result->next = merge(left->next, right);
        } else {
            result = right;
            result->next = merge(left, right->next);
        }
        return result;
    }

    void split(ListNode* head, ListNode** left, ListNode** right) {
        if (!head || !head->next) {
            *left = head;
            *right = nullptr;
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        *left = head;
        *right = slow->next;
        slow->next = nullptr;
    }

    ListNode* mergeSort(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode *left, *right;
        split(head, &left, &right);
        
        left = mergeSort(left);
        right = mergeSort(right);
        
        return merge(left, right);
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode *left, *right;
        split(head, &left, &right);
        
        left = mergeSort(left);
        right = mergeSort(right);
        
        return merge(left, right);
    }
};


