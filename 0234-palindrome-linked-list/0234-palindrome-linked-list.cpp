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
    bool checkPalindrome (vector <int> a){
        for (int i = 0;i < a.size(); i++)
            if (a[i] != a[a.size() - i - 1]) 
                return false;
        
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector <int> a;
        
        while (head != nullptr){
            a.emplace_back(head->val);
            head = head->next;
        }
        
        return checkPalindrome(a);
    }
};