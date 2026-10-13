class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end(), greater<int>());

        long long sum = 0;
        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            if(i == j){
                sum += pow(nums[i], 2);
            }else{
                sum += pow(nums[i],2) - pow(nums[j], 2); 
            }
            i++;
            j--;
        }
        return sum;
    }
};