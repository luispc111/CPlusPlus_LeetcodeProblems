class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        int max=0;
        for(int i = 0; i < points.size()-1; i++){
            if(abs(points[i][0] - points[i+1][0]) > max){
                max = abs(points[i][0] - points[i+1][0]);
            }
            if(abs(points[i][1] - points[i+1][1]) > max){
                max = abs(points[i][1] - points[i+1][1]);
            }
            res += max;
            max=0;
        }
        return res;
    }
};