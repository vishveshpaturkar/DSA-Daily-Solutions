class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> mpp(26,0);
        for(auto& it : sentence){
            mpp[it-'a']++;
        }
        for(int i : mpp){
            if(i == 0)return false;
        }
        return true;
    }
};