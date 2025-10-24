class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int gmin=INT_MIN;
        for(auto house:houses){
            int m=INT_MAX;
            for(auto heater:heaters){
                int d=abs(house-heater);
                m=min(m,d);
            }
            gmin=max(gmin,m);
        }
        return gmin;
    }
};