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
        ListNode *curr = head;
        unordered_set<ListNode*> st;
        while(curr != NULL && curr->next != NULL){
            if(st.find(curr) != st.end()){
                return curr;
            }
            st.insert(curr);
            curr = curr->next;
        }
        return NULL;
    }
};