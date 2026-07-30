#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Graph{
public:

    vector<vector<int>>adj;
    int V;
    int timer;
    vector<int>dt,low;

    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int u,int parU,vector<bool>& vis, set<int>& cp){
        vis[u] = true;
        dt[u] = low [u] = ++timer;
        int children = 0;
            for(int i=0;i<adj[u].size();i++){
                int v = adj[u][i];
                if(!vis[v]){
                    children++;
                    dfs(v,u,vis,cp);
                    //update low
                    low[u] = min(low[u],low[v]);
                    if(parU!=-1 && low[v]>=dt[u]){
                        //Articulation 
                        cp.insert(u);
                    }
                }
                else if(v!=parU){
                    low[u] = min(low[u],dt[v]);
                }
            }
            if(parU == -1 && children>1){
                //Articulation 
                cp.insert(u);
            }
    }

    int articulationPoints(){
        timer = 0;

        dt.assign(V,-1);
        low.assign(V,-1);

        vector<bool> vis(V,false);
        set<int>cp;

            for(int i=0;i<V;i++){
                if(!vis[i]){
                    dfs(i,-1,vis,cp);
                }
            }

        cout<<"Articulation Points : ";

        for(int x:cp) cout<<x<<" ";

        cout<<endl;

        return cp.size();

    }

};

int main(){

    Graph graph(6);

    graph.addEdge(1,0);
    graph.addEdge(1,2);
    graph.addEdge(4,3);
    graph.addEdge(4,5);
    graph.addEdge(4,1);

    cout<<"Total = "<<graph.articulationPoints()<<endl;

    return 0;
}