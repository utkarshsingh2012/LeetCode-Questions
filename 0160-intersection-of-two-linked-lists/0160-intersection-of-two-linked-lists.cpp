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
        ListNode * currA = headA;
        ListNode * currB = headB;
        if(currA == currB) return currA;
        set<ListNode * > st;
        while(currA != NULL and currB != NULL){
            if(currA == currB) return currA;
            if(st.find(currB) != st.end()){
                return currB;
            }
            if(st.find(currA) != st.end()){
                return currA;
            }
            st.insert(currA);
            st.insert(currB);
            currA = currA -> next;
            currB = currB -> next;
        }
        while(currA != NULL){
            if(st.find(currA) != st.end()){
                return currA;
            }
            st.insert(currA);
            currA = currA -> next;
        }
        while(currB != NULL){
            if(st.find(currB) != st.end()){
                return currB;
            }
            st.insert(currB);
            currB = currB -> next;
        }
        return NULL;
    }
};