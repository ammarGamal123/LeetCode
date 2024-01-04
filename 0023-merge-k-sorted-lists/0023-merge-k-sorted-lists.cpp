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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector <int> values;

    for (int i = 0; i < lists.size(); i++){
        ListNode * current = lists[i];
        while (current != nullptr){
            values.emplace_back(current->val);
            current = current->next;
        }
    }
    sort (values.begin() , values.end());

    ListNode* ans = nullptr;
    ListNode* tail = nullptr;

    for (int value : values) {
        ListNode* newNode = new ListNode(value);
        if (ans == nullptr) {
            ans = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return ans;
    }
};