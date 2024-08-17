class Solution {
public:
    static bool comp(pair<int,int>&el1,pair<int,int>&el2){
        return (el1.first-el1.second)<(el2.first-el2.second);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        vector<pair<int,int>>both;

        for(int i=0;i<capacity.size();i++){
            both.push_back(make_pair(capacity[i],rocks[i]));
        }

        sort(both.begin(),both.end(),comp);
        int res=0;
        for(int i=0;i<both.size();i++){
            if(additionalRocks==0)return res;
            if(both[i].first-both[i].second == 0)
            res++;

            else{
                if((both[i].first-both[i].second)<=additionalRocks){
                additionalRocks-=(both[i].first-both[i].second);
                res++;
                }
                else break;
            }
        }
        return res;
    }
};