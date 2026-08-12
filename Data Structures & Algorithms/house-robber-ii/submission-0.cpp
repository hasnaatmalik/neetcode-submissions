class Solution {
public:
    int solve(vector<int>& nums, int start, int end) {
        int prev = 0;
        int prevprev = 0;
        for (int i = start; i<= end; i++) {
            int curr = max(prev, prevprev + nums[i]);
            prevprev = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        int excludeLast = solve(nums, 0, n-2);
        int excludeFirst = solve(nums, 1, n-1);

        int ans = max(excludeLast, excludeFirst);
        return ans;
    }
};