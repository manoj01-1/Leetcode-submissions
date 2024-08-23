class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(),buses.end());
        sort(passengers.begin(),passengers.end());
       int res=0;
       int j=0;
       int ps=passengers.size();
        for(int i=0;i<buses.size();i++){
            int bt=buses[i];
            int cap=capacity;

            while(j<ps && passengers[j]<=bt && cap>0){

                if(j==0 || passengers[j]-1 !=passengers[j-1]){
                    res=passengers[j]-1;
                }
                j++;
                cap--;

            }
            if(cap>0){
                if(j==0 || buses[i] !=passengers[j-1]){
                    res=buses[i];
                }
            }
        }

        return res;
    }
};