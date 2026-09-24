class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int res = 0;
            while(num > 0){
                int temp = num % 10;
                res += temp;
                num /= 10;
            }
            cout << res;
            if(res == i)return i;
        }
        return -1;
    }
};