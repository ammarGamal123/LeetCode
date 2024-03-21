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
    ListNode* reverseList(ListNode* head) {
        
        vector <int> a;
        while (head != nullptr)
            a.emplace_back(head->val) , head = head->next;
        
        reverse(a.begin() , a.end());
        
        ListNode* ans = nullptr;
        
        while (!a.empty()){
            ListNode * curr = new ListNode(a.back());
            curr->next = ans;
            ans = curr;
            a.pop_back();
        }
        
        return ans;
    }
};