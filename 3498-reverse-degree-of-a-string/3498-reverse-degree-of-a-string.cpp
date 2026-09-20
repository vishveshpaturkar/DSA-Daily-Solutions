class Solution {
public:
    int reverseDegree(string s) {
        vector<int> nums(28,0);
        for(int i = 1; i <= 26; i++){
            nums[i] = 26 - i + 1;
        }
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            int temp = nums[s[i]-'a'+1];
            temp *= i+1;
            res += temp;
        }
        return res;
    }
};