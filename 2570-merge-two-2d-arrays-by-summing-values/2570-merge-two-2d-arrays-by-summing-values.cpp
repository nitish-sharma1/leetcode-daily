class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        int n = nums1.size();
        int m = nums2.size();
        int  i =0 ;
        int j = 0 ;
        while(i<n && j <m){
            auto num1 = nums1[i];
            auto num2 = nums2[j];
            if(num2[0] == num1[0]){
                num2[1] = num2[1]+num1[1];
                res.push_back(num2);
                i++;
                j++;
            }
            else if(num2[0] < num1[0]){
                res.push_back(num2);
                j++;
            }
            else{
                res.push_back(num1);
                i++;
            }
        }
        while( i< n ){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};