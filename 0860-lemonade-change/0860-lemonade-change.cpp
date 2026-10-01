class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCnt = 0;
        int tenCnt = 0;
        int twentyCnt = 0;

        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5){
                fiveCnt++;
            }else if(bills[i] == 10 && fiveCnt > 0){
                fiveCnt--;
                tenCnt++;
            }else if(bills[i] == 20){
                if(tenCnt > 0 && fiveCnt > 0){
                    tenCnt--;
                    fiveCnt--;
                    twentyCnt++; 
                }else if(fiveCnt >= 3){
                    fiveCnt-=3;
                    twentyCnt++; 
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        return true;
    }
};