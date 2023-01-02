class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v(nums);
        int n=nums.size();
        sort(v.begin(),v.end());
        int ind=0,ind1=0;
        for(int i=0;i<nums.size();i++){
            if(v[i]!=nums[i]){
                ind=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]!=nums[i]){
                ind1=i;
                break;
            }
        }
        int ans=0;
        if(ind1>0||ind>0)
        ans=ind1-ind+1;
        return ans;

    }
};