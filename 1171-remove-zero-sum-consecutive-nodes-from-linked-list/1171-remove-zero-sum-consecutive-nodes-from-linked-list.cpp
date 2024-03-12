class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> a;
        
        while (head != nullptr){
            a.emplace_back(head->val);
            head = head->next;
        }
        
        for (int i = 0; i < a.size(); i++) {
            int cur = 0;
            for (int j = i; j < a.size(); j++) {
                cur += a[j];
                if (cur == 0) {
                    a.erase(a.begin() + i, a.begin() + j + 1);
                    i--; // Adjust the outer loop index after erasing
                    break;
                }
            }
        }
        
        ListNode* ans = nullptr;
        ListNode* tail = nullptr;
        
        for (int i = 0; i < a.size(); i++){
            ListNode* cur = new ListNode(a[i]);
            if (ans == nullptr) {
                ans = cur;
                tail = cur;
            } else {
                tail->next = cur;
                tail = cur;
            }
        }
        
        return ans;
    }
};
