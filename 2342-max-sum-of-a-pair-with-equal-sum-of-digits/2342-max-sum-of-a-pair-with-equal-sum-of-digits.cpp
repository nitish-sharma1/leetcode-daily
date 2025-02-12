class Solution {
public:
    int  digitSum(int num){
        int sum = 0 ;
        while(num){
            sum += num%10;
            num=num/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        map<int,priority_queue<int>> mp;
        int res = -1;
        for(int num : nums){
            int sum = digitSum(num);
            mp[sum].push(num);
        }
        for( auto it : mp){
            auto ppq = it.second;
            if(ppq.size() >=2){
                int first = ppq.top();
                ppq.pop();
                int second = ppq.top();
                ppq.pop();
                res = max(res,first+second);

            }
        }
        return res;
    }

};