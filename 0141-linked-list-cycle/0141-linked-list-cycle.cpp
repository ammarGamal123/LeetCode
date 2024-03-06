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
    bool hasCycle(ListNode *head) {
       if (head == nullptr)
            return false;
       ListNode * slow = head;
       ListNode * fast = head->next;

       while (fast != NULL && fast->next != nullptr){
           if (fast == slow){
               return true;
           }
           slow = slow->next;
           fast = fast->next->next;
       }
       return false;
    }
};