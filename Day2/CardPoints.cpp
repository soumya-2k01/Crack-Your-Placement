class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n = cp.size();
        int cursum = 0, tot =0;
        int i =0;
        for(i =0; i<n;i++){
            if(i<n-k)
                cursum+= cp[i];
            tot+=cp[i];
        }
        i = n-k;
        int ans = cursum, j =0;
        while(i<n){
            cursum-=cp[j++];
            cursum+=cp[i++];
           // cout<<cursum<<endl;
            ans = min(ans,cursum);
        }
        return tot-ans;
    }
};
