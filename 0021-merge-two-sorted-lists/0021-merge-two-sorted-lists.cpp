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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)  return l2;
        if(l2 == NULL)  return l1;
        ListNode *res, *curr1, *curr2;
        curr1 = l1;
        curr2 = l2;
        if(curr1->val <= curr2->val){
            res = curr1;
            curr1 = curr1->next;
        }
        else{
            res = curr2;
            curr2 = curr2->next;
        }
        ListNode *temp = res;
        while(curr1 != NULL && curr2!= NULL){
            if(curr1->val <= curr2->val){
                temp ->next = curr1;
                curr1 = curr1->next;
                temp = temp->next;
            }
            else{
                temp -> next = curr2;
                curr2 = curr2->next;
                temp = temp->next;
            }
        }
        while(curr1 != NULL){
            temp -> next = curr1;
            curr1 = curr1-> next;
            temp = temp->next;
        }
        while(curr2!= NULL){
            temp -> next = curr2;
            curr2 = curr2->next;
            temp = temp->next;
        }
        return res;
    }
};