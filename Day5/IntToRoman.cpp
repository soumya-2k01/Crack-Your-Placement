class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        map<int,string> m;vector <int> vec;
        m[1] = "I";m[5] = "V";m[10] = "X";m[50] = "L";m[100] = "C";m[500] = "D"; m[1000] = "M";
        m[4] = "IV";m[9]="IX";m[40] = "XL";
        m[90] = "XC";m[400] = "CD";m[900] = "CM";
        for(auto x : m)vec.push_back(x.first);
        reverse(vec.begin(),vec.end());
        while(num){
            for(int x : vec){
                if(num/x){
                    for(int i=1;i<=floor(num/x);i++)ans+=m[x];
                    num%=x;
                    break;
                }
            }
        }
        return ans;
    }
};
