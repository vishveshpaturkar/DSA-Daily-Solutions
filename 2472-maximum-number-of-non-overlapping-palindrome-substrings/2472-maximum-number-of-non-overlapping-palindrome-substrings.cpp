class Solution {
public:

    bool isPalindrome(string s) {
        string temp = s;

        reverse(s.begin(), s.end());

        if (temp == s)
            return true;

        return false;
    }

    int maxPalindromes(string s, int k) {

        int cnt = 0;
        int start = 0;
        int n = s.length();

        for (int j = k - 1; j < n; j++) {

            for (int i = start; i <= j - k + 1; i++) {

                int len = j - i + 1;

                if (len >= k && isPalindrome(s.substr(i, len))) {

                    cnt++;

                    // next palindrome must start after current one
                    start = j + 1;

                    break;
                }
            }
        }

        return cnt;
    }
};