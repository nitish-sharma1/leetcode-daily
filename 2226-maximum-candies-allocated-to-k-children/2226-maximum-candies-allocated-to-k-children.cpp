class Solution {
public:
 int n;
    bool isPossible(vector<int>& candies, long long k,int mid){
        long long count=0;
        for(int i  = 0 ; i <n ;i++){
             count+=(candies[i]/mid) ;

            if( count >= k){
                return true;
            }
        }
       
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
         n = candies.size();
        int s = 1; 
        int mele = candies[0];
        for( auto num : candies){
            mele = max(num,mele);
        }
        int e = mele;
        int res = 0;
        while(s<=e){
            int mid = s +(e-s)/2;
   
            if(isPossible(candies,k,mid)){
                cout<<mid<<endl;
                res = mid;
                s = mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return res;

    }
};