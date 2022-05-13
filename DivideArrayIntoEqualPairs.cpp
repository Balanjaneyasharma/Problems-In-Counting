class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it: nums){
            mpp[it]+=1;
        }
        
        for(auto it : mpp){
            if(it.second&1) return false;
        }
        
        return true;
    }
};
