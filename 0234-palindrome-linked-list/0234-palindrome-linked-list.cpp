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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)  return true;
        vector<int> vec, rev;
        ListNode *curr = head;
        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        rev = vec;
        reverse(rev.begin(), rev.end());
        return(rev == vec);
    }
};