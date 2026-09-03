class Solution {
    int max(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=0;
        int profit;
        int maxp=0;
        for(r=0;r<prices.size();r++){
            profit=prices[r]-prices[l];
            if(profit<0){
                l=r;
            }
            else{
            maxp = max(maxp,profit);
            }
        }
        return maxp;
    }
};
