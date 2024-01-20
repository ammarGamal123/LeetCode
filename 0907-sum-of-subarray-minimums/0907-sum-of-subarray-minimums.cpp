class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
        const int MOD = 1e9 + 7;
    int n = A.size();
    stack<int> stk;
    vector<int> left(n), right(n);

    // Calculate left boundary for each element
    for (int i = 0; i < n; ++i) {
        while (!stk.empty() && A[i] < A[stk.top()]) {
            stk.pop();
        }
        left[i] = stk.empty() ? -1 : stk.top();
        stk.push(i);
    }

    while (!stk.empty()) {
        stk.pop();
    }

    // Calculate right boundary for each element
    for (int i = n - 1; i >= 0; --i) {
        while (!stk.empty() && A[i] <= A[stk.top()]) {
            stk.pop();
        }
        right[i] = stk.empty() ? n : stk.top();
        stk.push(i);
    }

    long long result = 0;

    // Calculate the sum of subarray minimums
    for (int i = 0; i < n; ++i) {
        result = (result + (long long)A[i] * (i - left[i]) * (right[i] - i)) % MOD;
    }

    return result;
    }
};