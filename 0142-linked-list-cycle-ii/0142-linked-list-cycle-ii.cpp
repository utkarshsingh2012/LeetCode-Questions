/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)  return NULL;
        ListNode *slow = head, *fast = head;
        bool flag = false;
        while(fast != NULL && fast ->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                flag = true;
                break;
            }
        }
        if(flag == false)   return NULL;
        
        slow = head;
        while(fast != NULL && fast->next != NULL){
            if(slow == fast)    return slow;
            slow = slow->next;
            fast = fast->next;
            
        }
        return NULL;
    }
};