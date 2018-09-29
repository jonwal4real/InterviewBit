vector<int> Solution::wave(vector<int> &A) {
    // vector<int> ans;
    int sz=A.size(),n,temp;
    // n=sz/sizeof(A[0]);
    sort(A.begin(),A.end());
    for(int i=0;i<sz;i+=2){
        if(i+1<sz){
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }
    return A;
}
