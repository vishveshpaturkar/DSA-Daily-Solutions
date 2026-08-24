class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for(int i = 0; i < nums.size()-1; i+=2){
            int num1 = nums[i];
            int nums2 = nums[i+1];
            res.push_back(nums2);
            res.push_back(num1);
        }
        return res;
    }
};