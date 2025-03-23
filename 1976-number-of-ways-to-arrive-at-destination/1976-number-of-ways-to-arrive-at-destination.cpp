using pii = pair<long long,int> ;
class Solution {
public:

    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pii>> adj(n);
        for( auto road : roads){
            int u = road[0];
            int v = road[1];
            int d = road[2];
            adj[u].push_back({v,d});
            adj[v].push_back({u,d});
        }
        priority_queue<pii,vector<pii>,greater<pii>> ppq;
        vector<long long> res(n,LLONG_MAX);
        vector<int> count(n,0);
        res[0]=0;
        count[0]=1;
        ppq.push({0,0});
       
         int modulo = 1000000007;
        while(!ppq.empty()){
           
            auto t = ppq.top();
            ppq.pop();
            int node = t.second;
            long long d = t.first;
            
            for( auto v : adj[node]){
                int newnode = v.first;
                int dis = v.second;
                
                if( (d +dis)  <res[newnode]){
                    res[newnode] = (d +dis ) ;
                    ppq.push({d+dis , newnode});
                    count[newnode] = count[node]%modulo;
                }
                else if ( (d +dis)  ==res[newnode]){
                    count[newnode] = (count[newnode] +  count[node])%modulo;
                }
            }
        }
        return count[n-1] ;
    }
};