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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        if(head == NULL){
            return NULL;
        }
        ListNode *curr = head;
        while(curr != NULL){
            length++;
            curr = curr->next;
        }
        curr = head;
        if(length%2 != 0){
            for(int i = 1; i<= length/2; i++){
                curr = curr->next;
            }
            return curr;
        }
        else{
            for(int i = 1; i<= (length/2) ; i++){
                curr = curr->next;
            }
            return curr;
        }
        return head;
    }
};