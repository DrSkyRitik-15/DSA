#include<iostream>
#include<vector>
#include<queue>

using namespace std;
vector<bool>v;
vector<vector<int>> g;

void bfs(int b)
{
    queue<int> q;
    q.push(b);

    v[b]=true;

    while(!q.empty()){
        int a =q.front();
        q.pop();

        for(auto j:g[a]){
            if(!v[j]){
                v[j]=true;
                q.push(j);
            }

        }
        cout<<a<<" ";
    }
}
void makedge(int a,int b){
    g[a].push_back(b);
    // g[b].push_back(a);
}

int main(){
    int n,e;
    cout<<"Enter the number of nodes:";
    cin >>n;
    cout<<"Enter edge";
    cin>>e;

    v.assign(n,false);
    g.assign(n,vector<int>());

    int a,b;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        
        makedge(a,b);
    }
    for(int i=0;i<n;i++){
      if(!v[i]){
        bfs(i);
      }
    }
    return 0;


}
