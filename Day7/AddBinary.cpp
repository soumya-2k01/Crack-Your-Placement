class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0, jod = 0;
        int n1 = a.length(), n2 = b.length();
        int i = n1-1, j = n2-1;
        while(i>=0 && j>=0){
            jod = a[i]-'0'+b[j]-'0'+carry;
            //cout<<"jod: "<<jod<<endl;
            if(jod%2)ans+="1";
            else ans+="0";
            if(jod>1)carry = 1;
            else carry = 0;
            i--;
            j--;
            //cout<<"ans: "<<ans<<endl;
            
        }
        while(i>=0){
            jod = a[i]-'0'+carry;
            if(jod%2)ans+="1";
            else ans+="0";
            if(jod>1)carry = 1;
            else carry = 0;
            i--;
        }
        while(j>=0){
            jod = b[j]-'0'+carry;
            if(jod%2)ans+="1";
            else ans+="0";
            if(jod>1)carry = 1;
            else carry = 0;
            j--;
        }
        if(carry)ans+="1";
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
