class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int i,j,cnt=0,cnd,pos,ind;
        
      vector<set<int>> alpha(26);
      for(i=0;i<s.size();i++){
        ind=s[i]-97;
        alpha[ind].insert(i);
       }
      for(i=0;i<words.size();i++){
        pos=-1;
        cnd=1;
        for(j=0;j<words[i].size();j++){
            ind=words[i][j]-97;
            if(alpha[ind].lower_bound(pos+1)!=alpha[ind].end()){
                pos=*alpha[ind].lower_bound(pos+1);

            }
            else{
                cnd=0;
                break;
            }
        }
        if(cnd==1)
            cnt++;
       }
       return cnt; 
    }
};
