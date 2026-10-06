class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minp=INT_MAX;
        int profit=0;
        for (int i=0;i<prices.size();i++) {
            minp=min(minp,prices[i]);
            profit=prices[i]-minp;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};
