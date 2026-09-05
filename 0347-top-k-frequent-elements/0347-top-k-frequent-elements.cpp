class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }
        vector<pair<int, int>>v;
        for (auto it : mpp) {
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};