class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        
        int j=nums.size()-1;
       if(j==-1)
       {
           return 0;
       }

        while(i<=j)
        {
            if(nums[j]==val)
            {
                j--;
            }
            else if(nums[i]==val)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else{
                i++;
            }

        }
        return i;
        
    }
};