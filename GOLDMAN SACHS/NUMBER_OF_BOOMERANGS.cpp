class Solution {
public:
    int dist(vector<int>v1,vector<int>v2){
            return (v1[0]-v2[0])*v1[0]-v2[0]+(v1[1]-v2[1])*(v1[1]-v2[1]);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
       
        int count=0;
        int ans=0;
        for(int i=0;i<points.size();i++){
             map<int,int>v;
            for(int j=0;j<points.size();j++){
                if(j==i)continue;
            int dy=points[i][1]-points[j][1];
            int dx=points[i][0]-points[j][0];
            int val=(dy*dy)+(dx*dx);
            v[val]++;
           
            }
        
        
        for(auto i:v){
            if(i.second>1)
            ans=ans+i.second*(i.second-1);
        }
        }
        return ans;
    }
};