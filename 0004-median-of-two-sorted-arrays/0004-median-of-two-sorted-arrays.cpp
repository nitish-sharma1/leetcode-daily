class Solution {
public:
    void merge(vector<int>& nums1, vector<int>& nums2,vector<int> & sorted_arr){
        int i=0;
        int j=0;
        while(i<nums1.size() && j < nums2.size()){
            if(nums1[i]<= nums2[j]){
                sorted_arr.push_back(nums1[i]);
                i++;
            }
            else{
                 sorted_arr.push_back(nums2[j]);
                j++;
            }

        }
        while(i<nums1.size()){
            sorted_arr.push_back(nums1[i]);
            i++;
        }
         while(j<nums2.size()){
            sorted_arr.push_back(nums2[j]);
            j++;
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted_arr;
        merge(nums1,nums2,sorted_arr);
        int n = sorted_arr.size();
     
        if(n%2 !=0){
            return sorted_arr[n/2];
        }
     
        return (double)(sorted_arr[(n-1)/2] + sorted_arr[(n)/2] )/2;

    }
};