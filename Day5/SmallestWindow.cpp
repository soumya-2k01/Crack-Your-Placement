string smallestWindow (string s, string p){
       int n = s.length(), m = p.length();
       
       int freq1[128] = {0};
       for(char x: p){
           freq1[x]++;
       }
       
       int freq2[128] = {0};
       int st = -1;
       int len = n;
       int cnt = 0;
       int i = 0, j = 0;
       while(j < n){
           char ch = s[j];
           if(freq2[ch] < freq1[ch]) cnt++;
           freq2[ch]++;
           
           while(cnt == m){
               if(j-i+1 < len){
                   st = i;
                   len = j-i+1;
               }
               
               if(freq1[s[i]]) freq2[s[i]]--;
               if(freq2[s[i]] < freq1[s[i]]) cnt--;
               i++;
           }
           
           j++;
       }
       
       if(st == -1) return ("-1");
       return s.substr(st,len);
   }
