class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] > nums[i + 1]) {
                vector<int> temp = nums;

                temp[i] = temp[i + 1];

                if (is_sorted(temp.begin(), temp.end()))
                    return true;
                else {
                    vector<int> temp2 = nums;
                    temp2[i + 1] = temp2[i];
                    if (is_sorted(temp2.begin(), temp2.end()))
                        return true;
                }

                return false;
            }
        }
        return true;
    }
};