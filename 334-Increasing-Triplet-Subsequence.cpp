class Solution {
public:
   bool increasingTriplet (vector <int> &nums){
    if (nums.size() < 3) return false;

        int n = nums.size();

       int first_small = INT_MAX;
        int second_small = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=first_small)
                first_small=nums[i];
            else if( nums[i]<= second_small )
                second_small= nums[i];
            else
                return true;
        }
        return false;
   }
};