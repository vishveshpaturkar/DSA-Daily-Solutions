class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i : nums){
            st.insert(i);
        }
        int num = 0;
        while(true){
            num++;
            if(st.find(num)==st.end() && num%k == 0){
                return num;
            }
        }
        return 0;
    }
};