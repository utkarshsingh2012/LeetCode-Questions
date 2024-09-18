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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp = head;
        ListNode * prev = new ListNode();
        ListNode * newHead = prev;
        prev -> next = head;
        while(temp != NULL){
            if(temp -> val == val){
                prev -> next = temp -> next;
                temp = temp -> next;
            }
            else{
                prev = prev -> next;
                temp = temp -> next;
            }
            
        }
        return newHead -> next;
    }
};