int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i,soln=0,x,y;
    for(i=0;i<A.size()-1;i++){
        x=abs(A[i]-A[i+1]);
        y=abs(B[i]-B[i+1]);
        soln+=max(x,y);
    }
    return soln;
}
