class Solution {
public:
    int maxProfit(vector<int>& prices) {
      //NOTE: This is a single transaction problem
        int i,mx=0,diff;
        map<int,int> mp;
        for(i=0;i<prices.size();i++)
            mp[prices[i]]++;
        //using map we will just maintain elements which are on right of each the ith price
        for(i=0;i<prices.size()-1;i++){
            mp[prices[i]]--;
            if(mp[prices[i]]==0)
                mp.erase(prices[i]);
            //map only contains elements which are on right side of ith element
            diff=mp.rbegin()->first-prices[i];
            if(diff>mx)
                mx=diff;
        }
        return mx;
        
    }
};
