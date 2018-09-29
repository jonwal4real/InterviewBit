#include <algorithm>
int Solution::repeatedNumber(const vector<int> &A) {
     int i,xor1=0,xor2=1;
    for(i=1;i<A.size();i++)
    {
        xor1^=A[i];
        xor1^=i;
    }
    xor1^=A[0];
    
    return xor1;
}