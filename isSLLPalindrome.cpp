/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 Given a singly linked list, determine if it is a palindrome in O(n) time and O(1) space.
 */
class Solution {
public:
    ListNode* start;
    bool check(ListNode* end){
        if(end==NULL)
            return true;
        bool ans=(check(end->next)&&(this->start->val==end->val));
        this->start=this->start->next;
        return ans;
    }
    
    bool isPalindrome(ListNode* head) {
        this->start=head;
        return check(head);
    } 
};
