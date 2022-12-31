class Solution {
public:
    string getHint(string s, string g) {
        string ans="";
        int n=s.length();
        int bulls=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==g[i])
            {
                bulls++;
            }
        }
        ans+=to_string(bulls);
        ans+='A';
        map<int,int>gg;
        int count=0;
        for(int i=0;i<n;i++){
            int val=g[i]-'0';
            gg[val]++;
        }
        for(int i=0;i<n;i++){
            if(gg[s[i]-'0']>0){
                count++;
                gg[s[i]-'0']--;
            }
        }
        count=count-bulls;
        ans+=to_string(count);
        ans+='B';
        return ans;


    }
};