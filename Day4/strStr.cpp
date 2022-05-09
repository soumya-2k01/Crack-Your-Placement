class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hay = haystack.length(), need = needle.length();
        if(need==0)return 0;
        if(hay==0)return -1;
        int i =0,  j= 0, first =-1;
        while(i<hay && j!= need){
            if(haystack[i]==needle[j]){
                first = i;
                while(i<hay && j<need && haystack[i]==needle[j]){
                    i++;
                    j++;
                }
                if(j==need)return first;
                i=first;
            }
            j=0, first = -1;
            i++;
        }
        return -1;
        
    }
};
