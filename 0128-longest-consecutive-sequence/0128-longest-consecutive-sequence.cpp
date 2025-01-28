class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }


       priority_queue<int,vector<int>,greater<int>> pq;

       for(int x : nums)
       {
           pq.push(x);
       }

       int prev=pq.top();
       int max=1;
       int c=1;
       pq.pop();

       while(!pq.empty())
       {
           if(pq.top() - prev > 1)
           {
                c=1;
                prev = pq.top();
                pq.pop();
           }
           else if( pq.top() - prev ==0)
           {
               prev=pq.top();
               pq.pop();

           }
           else{
               c++;
               prev=pq.top();
               pq.pop();
           }
            
            if(max<c)
            {
                max=c;
            }
       }

       return max;

    }
};