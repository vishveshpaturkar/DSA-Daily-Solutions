class Solution {
public:
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        vector<pair<int, int>> temp(nums.size());

        for(int i = 0; i < nums.size(); i++){
            temp[i].first = nums[i][1];
            temp[i].second = nums[i][0];
        }
        sort(temp.rbegin(), temp.rend());
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(temp[i].second <= truckSize){
                ans += temp[i].first * temp[i].second;
                truckSize -= temp[i].second;
            }else{
                ans += truckSize * temp[i].first;
                truckSize = 0;
                break;
            }
        }
        return ans;
    }
};