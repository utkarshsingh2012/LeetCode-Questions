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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head -> next == NULL) return head;
        ListNode * curr = head;
        ListNode * ahead = head -> next;
        
        while(ahead != NULL){
            int gcd = __gcd(curr ->val, ahead->val);
            ListNode * gc = new ListNode(gcd);
            curr -> next = gc;
            gc -> next = ahead;
            curr = ahead;
            ahead = curr -> next;
        }
        return head;
    }
};