class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,end=s.length()-1;
        map<char,int>m;
        int count=0;
        while(right!=s.length()){
            m[s[right]]++;
            while(m['a']&&m['b']&&m['c']){
                count=count+1+(end-right);
                m[s[left]]--;
                left++;
            }
            right++;
        }
        return count;
    }
};