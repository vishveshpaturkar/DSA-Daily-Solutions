class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int i : nums){
            mpp[i]++;
        }
        int num = 0;
        while(true){
            num++;
            if(mpp.find(num)==mpp.end() && num%k == 0){
                return num;
            }
        }
        return 0;
    }
};