class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, total = 0, res = INT_MAX;

        for(int r = 0; r < nums.size(); r++){
            total = total + nums[r];
            while(total >= target){
                res = min(res,r - l + 1);
                total = total - nums[l];
                l++;
            }
        }
       if (res == INT_MAX) {
            return 0;
        }

        return res; 
    }
};