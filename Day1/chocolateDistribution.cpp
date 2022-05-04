long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long i = 0, j = m-1,ans = -1;
        while(j<n){
            if(ans==-1){
                ans = a[j]-a[i];
            }
            else ans = min(ans,a[j]-a[i]);
            i++;
            j++;
        }
        return ans;
        
    
    }   
