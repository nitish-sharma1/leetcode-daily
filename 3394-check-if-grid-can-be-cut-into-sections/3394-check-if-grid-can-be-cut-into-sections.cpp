class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int,int>> xaxis;
        vector<pair<int,int>> yaxis;
        for( auto rec : rectangles){
            int x1 = rec[0];
            int y1 = rec[1];
            int x2 = rec[2];
            int y2 = rec[3];
            xaxis.push_back({x1,x2});
            yaxis.push_back({y1,y2});
        } 
        sort(xaxis.begin(),xaxis.end());
        stack<pair<int,int>>res1;
        for(auto p : xaxis){
            if(res1.empty()){
                res1.push(p);
                continue;
            }
            auto t = res1.top();
            if(p.first < t.second){
                res1.pop();
                t.first = min(t.first,p.first);
                t.second = max(t.second,p.second);
                res1.push(t);
            }
            else{
                res1.push(p);
            }
        }
        if(res1.size() >=3){
            return true;
        }
        sort(yaxis.begin(),yaxis.end());
        stack<pair<int,int>>res2;
        for(auto p : yaxis){
            if(res2.empty()){
                res2.push(p);
                continue;
            }
            auto t = res2.top();
            if(p.first < t.second){
                res2.pop();
                t.first = min(t.first,p.first);
                t.second = max(t.second,p.second);
                res2.push(t);
            }
            else{
                res2.push(p);
            }
        }
        if(res2.size() >=3){
            return true;
        }
        return false;

    }
};