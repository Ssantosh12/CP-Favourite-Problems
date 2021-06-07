class Solution {
public:
    int numTimesAllBlue(vector<int>& light) { //fav condition only occurs when all switched on lights till i are consecutive and starts from index=0
        int i,mxind=-1,onbulbs=0,cnt=0;
        for(i=0;i<light.size();i++){
            if(light[i]>mxind)
                mxind=light[i];
            onbulbs++;
            if(onbulbs==mxind)
                cnt++;
        }
        return cnt;
    }
};
