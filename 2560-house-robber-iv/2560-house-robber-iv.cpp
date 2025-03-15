class Solution {
public:
    int n;
    bool ispossible(vector<int>& nums, int k,int mid){
        int count =0;
        int i=0;
       while(i<n){
        if(nums[i]<=mid){
            count++;
            i=i+2;
        }
        else{
            i++;
        }

       }
            
        
        return count >= k;

    }
    int minCapability(vector<int>& nums, int k) {
        n = nums.size();
        int s = 1;
        int e = nums[0];
        for( auto num : nums){
            e= max(e,num);
        }
        int  res =e;
        while( s<=e){
            int mid = s +(e-s)/2;
            if(ispossible(nums,k,mid)){
                res = min(res,mid);
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};