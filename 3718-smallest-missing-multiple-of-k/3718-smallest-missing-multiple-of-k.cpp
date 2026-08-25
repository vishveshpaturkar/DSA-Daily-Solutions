class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i : nums){
            st.insert(i);
        }
        int num = k;
        while(true){
            if(st.find(num)==st.end()){
                return num;
            }
            num += k;
        }
        return 0;
    }
};