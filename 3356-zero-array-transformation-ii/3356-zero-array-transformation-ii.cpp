class Solution {
public:
int n ;
int q;
bool checkIfSolved(vector<int>& nums, vector<vector<int>>& queries,int k){
    vector<int> diff(n,0);

    for(int i = 0 ; i <= k ; i ++){
        int l = queries[i][0];
        int r = queries[i][1];
        int x = queries[i][2];

        diff[l] += x;
        if(r+1<n){
            diff[r+1] -=x;
        }
    }

    int currsum = 0 ;
    for(int i=0;i<n;i++){
        currsum += diff[i];
        diff[i]=currsum;
        if(nums[i] - diff[i] >  0){
            return false;
        }    }
        return true;
}
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        n = nums.size();
        bool iszero=true;
        for(auto num : nums){
            if(num>0){
                iszero = false;
            }
        }
        if(iszero){
            return 0;
        }
        q = queries.size();
        int  s = 0 ;
        int e =q-1;
        int k = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(checkIfSolved(nums,queries,mid)){
                k= mid+1;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return k;
    }
};