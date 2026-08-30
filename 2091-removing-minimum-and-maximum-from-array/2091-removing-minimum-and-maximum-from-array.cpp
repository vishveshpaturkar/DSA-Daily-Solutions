class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int n = nums.size();

        int i = 0, j = 0;

        while(nums[i] != mini) {
            i++;
        }

        while(nums[j] != maxi) {
            j++;
        }

        // i should be the leftmost index
        if(i > j) {
            swap(i, j);
        }

        // Both from left
        int num1 = j + 1;

        // Both from right
        int num2 = n - i;

        // One from left + one from right
        int num3 = (i + 1) + (n - j);

        return min({num1, num2, num3});
    }
};