class Solution {
public:
    set<int> st;

    void solve(vector<int>& digits, vector<bool>& used, int num, int cnt) {

        // Base case: 3 digits selected
        if(cnt == 3) {
            
            // Number must be even
            if(num % 2 == 0) {
                st.insert(num);
            }

            return;
        }

        for(int i = 0; i < digits.size(); i++) {

            // This copy of digit is already used
            if(used[i]) continue;

            // First digit cannot be 0
            if(cnt == 0 && digits[i] == 0) continue;

            // Choose
            used[i] = true;

            solve(digits, used, num * 10 + digits[i], cnt + 1);

            // Backtrack
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {

        vector<bool> used(digits.size(), false);

        solve(digits, used, 0, 0);

        return st.size();
    }
};