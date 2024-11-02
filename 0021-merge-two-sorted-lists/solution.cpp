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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1;
        ListNode* curr2;
        curr1 = list1;
        curr2 = list2;
        ListNode* list3 = new ListNode(0);
        ListNode* curr3;
        curr3 = list3;

        while(curr1 != nullptr && curr2 != nullptr){
            if (curr1->val <= curr2->val){
                curr3->next = curr1;
                curr3 = curr3->next;
                curr1 = curr1->next;
            }
            else{
                curr3->next = curr2;
                curr3 = curr3->next;
                curr2 = curr2->next;
            }
        }

        if(curr1 != nullptr){
            curr3->next = curr1;
        }
        else if (curr2 != nullptr){
            curr3->next = curr2;
        }
        return list3->next;
    }
};
