class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count=0;
        for(int i=0;i<intervals.size();i++){
            int currend=intervals[i][1];
            while(i+1<intervals.size() && currend>intervals[i+1][0]){
                    count++;
                    currend=min(currend,intervals[i+1][1]);
                    i++;
            }
        }
        return count;
    }
};