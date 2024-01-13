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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)  return NULL;
        ListNode *curra = headA, *currb = headB;
        unordered_set<ListNode*> st;
        while(curra != NULL){
            st.insert(curra);
            curra = curra->next;
        }
        while(currb != NULL){
            if(st.find(currb) != st.end()){
                return currb;
            }
            currb = currb->next;
        }
        return NULL;
    }
};