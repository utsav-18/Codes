#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int>*l;
public:
    Graph(int V){
        this->V=V;
        l = new list<int>[V];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<": ";
            for(int n : l[i]){
                cout<<n<<" ";
            }cout<<endl;
        }
    }

    bool isCycleDFS(int src,int p,vector<bool>&vis){
        vis[src] = true;
        list<int>n = l[src];
        for(int v:n){
            if(!vis[v]){
                if(isCycleDFS(v,src,vis)){
                    return true;
                }
            }
            if(v!=p){
                return true;
            }
        }
        return false;
    }

    bool isCycle(){
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleDFS(i,-1,vis)){
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

   g.print();

   cout<<g.isCycle();
    
}