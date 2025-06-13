class Solution {
public:
bool isValid(vector<int>& nums,int mid , int p,int n){
    int i =0;
    int count = 0 ; 
    while(i< n-1){
        if(count >= p){
            return true;
        }
        else if(nums[i+1]-nums[i] <=mid){
            i=i+2;
            count++;
        }
        else{
            i=i+1;
        }
    }
    return count >=p;
}
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int s = 0;
        int e = nums[n-1] - nums[0];
        int res = INT_MAX;

        while(s<=e){
            int mid = e-(e-s)/2;
            if(isValid(nums,mid,p,n)){
                res = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return res;
    }
};