class Solution {
public:
    bool isSame(vector<int>p1, vector<int>p2) {
        return p1[0] == p2[0] && p1[1] == p2[1];
    }
    int dist(vector<int>p1, vector<int>p2){
        return (p1[1]-p2[1])*(p1[1]-p2[1])+(p1[0]-p2[0])*(p1[0]-p2[0]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int>s;
        if(isSame(p1,p2)||isSame(p1,p3)||isSame(p1,p4)||isSame(p2,p3)||isSame(p4,p3)||isSame(p4,p2))
        return false;

        s.insert(dist(p1,p2));
        s.insert(dist(p1,p3));
        s.insert(dist(p1,p4));
        s.insert(dist(p4,p2));
        s.insert(dist(p3,p2));
        s.insert(dist(p3,p4));
        if(s.size()==2){
            return true;
        }
            else{
                return false;
            }
        

    }
};