class Solution {
public:
int n;
bool isDivisibleSubset(vector<int> curr){

    for( int i = 0 ; i < curr.size() ; i++){
        
        for( int j = i ; j < curr.size(); j++){
            if(curr[j] % curr[i] != 0 ){
                return false;
            }
        }
    }
    return true;
}
void findlargest(vector<int>& nums , int i , vector<int> curr, vector<int> &res){
    if( i>=n){
        if(isDivisibleSubset(curr)){
            if( res.size() < curr.size()){
                res = curr;
            }
    
        }
       return; 
    }
    findlargest(nums , i+1,curr,res);
    curr.push_back(nums[i]);
    findlargest(nums , i+1,curr,res);

}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         n = nums.size();
        vector<int> res;
        vector<int> curr;
        findlargest(nums,0,curr,res);
        return res;
    }
};