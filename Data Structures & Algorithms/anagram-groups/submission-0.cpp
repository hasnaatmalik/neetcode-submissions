class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;

        for (int i = 0; i < strs.size(); i++) {
            // get element from list
            string key = strs[i];
            //sort that element cat -> act,act-> act
            sort(key.begin(), key.end());
            // {act -> act, cat}
            mpp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;

        for(auto x : mpp) {
            ans.push_back(x.second);
        }
        return ans;
    }
};
