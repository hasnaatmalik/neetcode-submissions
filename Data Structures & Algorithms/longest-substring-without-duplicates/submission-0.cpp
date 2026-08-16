class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char, int> mpp;
        int left = 0;
        int count = 0;
        for (int right = 0; right < s.size(); right++) {
            mpp[s[right]]++;
            while (mpp[s[right]] > 1) {
                mpp[s[left]]--;
                left++;
            }
            count = max(count, right - left + 1);
        }
        return count;
    }
};
