int transitionPoint(int arr[], int n) {
    // Problem - find the 1st posn of 1 on sorted array of 0's and 1's
    //using lower_bound and upper_bound concept learnt using binary search
    int left=0,right=n,i,mid;
    while(left!=right){
        mid=(left+right)/2;
        if(arr[mid]==0)  //go on right side excluding mid
            left=mid+1;
        else right=mid;  //go on left side including mid ( because mid can be the anser)       
    }
    if(left==n) 
       return -1;
    else return left;   
}
