class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i=0, j = n-1, ans = 0, curarea = 0;
        while(i<j){
            curarea = min(h[i],h[j])*(j-i);
            ans = max(ans,curarea);
            if(h[i]<h[j]){
                i++;
            }
            else j--;
        }
        return ans;
    }
};
