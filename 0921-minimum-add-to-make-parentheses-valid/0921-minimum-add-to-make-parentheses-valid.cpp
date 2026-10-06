class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        // int ans = 0;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] == '('){
        //         st.push('(');
        //     }else if(s[i] == ')'){
        //         if(!st.empty() && st.top() == '('){
        //             st.pop();
        //         }else if(st.empty()){
        //             ans++;
        //         }
        //     }
        // }
        // return ans + st.size();


        int ans = 0;

        int cnt = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                if(cnt < 0){
                    ans += abs(cnt);
                    cnt = 0;
                }
                cnt++;
            }else{
                cnt--;
            }
        }
        return ans + abs(cnt);
    }
};