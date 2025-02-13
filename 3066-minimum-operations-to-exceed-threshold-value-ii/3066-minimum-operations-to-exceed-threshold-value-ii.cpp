class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> ppq;
        for( auto num : nums){
            ppq.push(num);
        }
        int count = 0;
        while(ppq.size() >=2 && ppq.top() <k){
            int first = ppq.top();
            ppq.pop();
            int second = ppq.top();
            ppq.pop();
            ppq.push(2*first + second);
            count++;
        }


        return count;
        
    }
};