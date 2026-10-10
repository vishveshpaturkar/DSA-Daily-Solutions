
class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int n = s.length();
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] == '(') {
                st.push('(');
            }
            else {
                if (i < n - 1 && s[i + 1] == ')') {

                    if (st.empty()) {
                        cnt += 1;
                    }
                    else {
                        st.pop();
                    }

                    i++;
                }
                else {
                    cnt += 1;

                    if (!st.empty()) {
                        st.pop();
                    }
                    else {
                        cnt += 1;
                    }
                }
            }
        }

        if (!st.empty()) {
            cnt += st.size() * 2;
        }

        return cnt;
    }
};
