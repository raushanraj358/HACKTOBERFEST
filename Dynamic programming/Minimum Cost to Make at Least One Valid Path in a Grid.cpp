class Solution {
public:
    #define vi vector<int>
    #define pii pair<int,int>
    #define ff first
    #define ss second
    vector<vector<pii>> g;
    int n;
    int dij(int mt,vi &fee){
        vi cost(n,1e9),time(n,1e9);
        priority_queue<vi,vector<vi>,greater<vi>> pq;
        cost[0]=fee[0],time[0]=0;
        pq.push({cost[0],time[0],0}); //cost,time
        while(pq.size()){
            auto tmp=pq.top();pq.pop();
            int c=tmp[0],t=tmp[1],a=tmp[2];
            if(a==n-1)return c;
            for(auto i: g[a]){
                if(t+i.ss<=mt){
                    if(cost[i.ff]>c+fee[i.ff]){
                        cost[i.ff]=c+fee[i.ff];
                        time[i.ff]=t+i.ss;
                        pq.push({cost[i.ff],time[i.ff],i.ff});
                    }
                    else if(time[i.ff]>t+i.ss){
                        time[i.ff]=t+i.ss;
                         cost[i.ff]=c+fee[i.ff];
                        pq.push({cost[i.ff],time[i.ff],i.ff});
                    }
                }
                // else if(t+i.ss)
            }
        }
        // return 0;
        // for(auto i: cost)cout<<i<<" ";cout<<endl;
        // cout<<cost.size()<<" "<<n-1<<endl;
        // return 0;;
        return cost.back()==1e9?-1:cost[n-1];
    }
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& pf) {
        n=pf.size();
        g=vector<vector<pii>>(n);
        for(auto e: edges){
            g[e[0]].push_back({e[1],e[2]});
            g[e[1]].push_back({e[0],e[2]});
        }
        // return 0;
        return dij(maxTime,pf);
    }
};