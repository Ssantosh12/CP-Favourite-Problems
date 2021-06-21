class Solution {
public:
    vector<vector<int>> generate(int numRows) { //just create each new row from the knowledge of previous row
        int i,j,left,right,n=numRows;
        vector<vector<int>> pascal;
       // pascal[0][0]=1;
        for(i=0;i<n;i++){
            vector<int> vc(i+1,0);
            vc[0]=1; vc[i]=1;
            if(i!=0){
              left=0; right=i-1;
              while(left<right){
                  vc[left+1]=pascal[i-1][left]+pascal[i-1][left+1];
                  vc[right]=pascal[i-1][right]+pascal[i-1][right-1];
                  left++;
                  right--;
               }
            }
            pascal.push_back(vc);
        }
        return pascal;
    }
};
