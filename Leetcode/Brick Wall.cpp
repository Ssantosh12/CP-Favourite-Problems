class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        //interesting problem. drawing the wall makes the problem clear
      //maximum no.of gaps we pass vetically then we automatically passes to minimum no. of bricks
        int i,j,sum=0,mx=0;
        map<int,int> mp;
        for(i=0;i<wall.size();i++){
            sum=0;
            for(j=0;j<wall[i].size()-1;j++){
                    sum=sum+wall[i][j];
                    mp[sum]++;
            }
        }
        for(auto x:mp){
            if(x.second>mx)
                mx=x.second;
        }
        return (wall.size()-mx);
    }
};
