class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,ind=0;
        for(i=0;i<t.size()&&ind<s.size();i++){
            if(t[i]==s[ind])
                ind++;
        }
        if(ind==s.size())
            return true;
        else return false;
    }
};
