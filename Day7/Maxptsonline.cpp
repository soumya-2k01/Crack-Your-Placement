class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        if(n<=2)return n;
        map<double,int> mp;
        int maxsofar = 0;
        int ans = 0;
        int infslope = 0;
        for(int i =0; i<n-1; i++){
            infslope = 0;
            mp.clear();
            for(int j=i+1; j<n; j++){
                if(points[i][0]==points[j][0])infslope++;
                else{
                    double m = (double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                    mp[m]++;
                    maxsofar = max(maxsofar,mp[m]);
                }
            }
            ans = max({ans,maxsofar+1,infslope+1});
        }
        return ans;
    }
};
