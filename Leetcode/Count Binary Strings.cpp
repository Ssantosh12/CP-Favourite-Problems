class Solution {
public:
    int countBinarySubstrings(string s) {
        int i,zeros=0,ones=0,cnt=0;
      //just count the continuous substring of same elements and update if continuity breaks
      //more understanding if examples written
        if(s[0]=='0')
            zeros++;
        else ones++;
        for(i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                if(s[i]=='0')
                    zeros++;
                else ones++;
            }
            else{
                cnt=cnt+min(zeros,ones);
                if(s[i]=='0')
                    zeros=1;
                else ones=1;
            }
            if(i==(s.size()-1))
                cnt=cnt+min(zeros,ones);
        }
        return cnt;
    }
};
