class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mProfit=0,bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                mProfit=max(mProfit,prices[i]-bestBuy);
            }
            bestBuy=min(prices[i],bestBuy);
        }
        return mProfit;

    }
};
