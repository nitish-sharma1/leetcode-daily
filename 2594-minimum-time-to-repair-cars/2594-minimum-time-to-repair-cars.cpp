class Solution {
public:

    bool isPossible(vector<int>& ranks, int cars,int time){
        
        int total = 0;
        for(auto rank : ranks){
            int cars_repaired = sqrt(time/rank);
            total += cars_repaired;
        }
        return total >= cars;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long s = 1;
        long long maxele = *max_element(ranks.begin(),ranks.end());
        long long e = maxele * cars * cars;
        long long res = e;
        while(s<=e){
            long long mid = s + (e-s)/2;
            if(isPossible(ranks,cars,mid)){
                res = mid;
                e = mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return res;
        
    }
};