class Solution {
public:
    int func(int idx, int remspace, vector<int>&nums, int k){
        if(idx==nums.size()){
            return 0;
        }
        int take=INT_MAX, not_take;
        if(remspace-nums[idx]>=0){
            take=func(idx+1, remspace-nums[idx]-1,nums,k);
        }
        if(remspace>=0)
            not_take=func(idx+1, k-nums[idx]-1, nums, k)+ ((remspace+1)*(remspace+1));
        else
            not_take=func(idx+1, k-nums[idx]-1, nums, k);
        
        return min(take, not_take);
    }
    
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        return func(0, k, nums, k);
    } 
};
