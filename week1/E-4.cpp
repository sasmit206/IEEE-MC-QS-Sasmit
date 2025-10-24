class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,pmax=0;
        int min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){min=prices[i];}
            p=prices[i]-min;
            if(p>pmax){pmax=p;}
        }
        return pmax;
    }
};