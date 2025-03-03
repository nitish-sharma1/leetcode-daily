class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
     int n = nums.size();
     vector<int> res(n);
     int i =0 ; 
     int j = n-1;
     int i_=0;
     int j_= n-1;
     while( i < n){
        if(nums[i] < pivot){
            res[i_] = nums[i];
            i_++;
        }
        if(nums[j] > pivot){
            res[j_] = nums[j];
            j_--;
        }
        i++;
        j--;
     }
     for(int  i = i_ ; i <= j_ ; i++){
        res[i] = pivot;
     }

     return res;

        
    }
};