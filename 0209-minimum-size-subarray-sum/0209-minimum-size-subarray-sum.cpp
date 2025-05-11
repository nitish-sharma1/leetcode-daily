class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        
        int sum=0;
        int minwindow=nums.size()+1;
        for(int j=0;j<nums.size();j++)
        {
            sum=sum+nums[j];
            if (sum>=target){
                  
                while(sum>=target)
                {
                minwindow=min(minwindow,j-i+1);
                sum=sum-nums[i];
                i++;
                }    
             
            }
        }
        
        if(minwindow==nums.size()+1)
        {
            return 0;
        }
        return minwindow;
    }
};