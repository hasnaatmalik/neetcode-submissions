class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0;
        int prevprev = 0;
        for (int i = 0; i < nums.size(); i++) {
            int curr = max(prev, prevprev + nums[i]);
            prevprev = prev;
            prev = curr;
        }
        return prev;
    }
};
