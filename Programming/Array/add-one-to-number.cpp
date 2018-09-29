vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> ans;
    int sz=A.size(),flag=0;
    for(int i=0; i<sz;i++){
        ans.push_back(A[i]);
    }
    for(int i=sz-1;i>=0;i--){
        if(ans[i]==9){
            ans[i]=0;
        }else{
            ans[i]++;
            break;
        }
    }
    for(int i=0;i<sz;i++){
        if(ans[i]==0) continue;
        else flag=1;
    }
    if(flag==0){
        ans.insert(ans.begin(),1);
    }
    for(int i=0;i<sz-1;i++){
        if(ans[0]==0) ans.erase(ans.begin());
        else break;
    }
    return ans;
}
