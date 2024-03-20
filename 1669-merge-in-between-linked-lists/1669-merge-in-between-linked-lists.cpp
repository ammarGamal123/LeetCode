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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ans = list1;
        int cnt = 0;
        
        // Traverse until a-1 to reach the node before the ath node
        while (cnt + 1 < a) {
            list1 = list1->next;
            cnt++;
        }
        
        // Save the node before the bth node to reconnect later
        ListNode* beforeB = list1;
        
        // Traverse until b+1 to reach the node after the bth node
        while (cnt < b + 1) {
            list1 = list1->next;
            cnt++;
        }
        
        // Connect the ath node with the head of list2
        beforeB->next = list2;
        
        // Find the end of list2
        while (list2->next != nullptr) {
            list2 = list2->next;
        }
        
        // Connect the end of list2 with the node after bth node
        list2->next = list1;
        
        return ans;
    }
};