class Solution {
public:
        int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        int total = 0;
        for(int num : nums)
            total += num;

        int target = total - x;

        if(target < 0)
            return -1;

        if(target == 0)
            return n;

        unordered_map<int, int> mp;
        mp[0] = -1;

        int preSum = 0;
        int maxLen = -1;

        for(int j = 0; j < n; j++) {
            preSum += nums[j];

            int req = preSum - target;

            if(mp.find(req) != mp.end()) {
                int len = j - mp[req];
                maxLen = max(maxLen, len);
            }

            mp[preSum] = j;
        }

        if(maxLen == -1)
            return -1;

        return n - maxLen;
    }

};