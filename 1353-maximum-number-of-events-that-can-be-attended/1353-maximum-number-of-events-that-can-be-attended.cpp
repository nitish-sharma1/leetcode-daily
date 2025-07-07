class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int n = events.size();
        priority_queue<int,vector<int>,greater<int>> ppq;
        int day = events[0][0];
        int i=0;
        int count=0;
        while(!ppq.empty() || i<n){
            while(i<n && events[i][0]==day){
                ppq.push(events[i][1]);
                i++;
            }
            if(!ppq.empty()){
                ppq.pop();
                count++;
            }
            day++;
            while(!ppq.empty() && ppq.top() < day){
                ppq.pop();
            }
        }
        return count;
    }
};