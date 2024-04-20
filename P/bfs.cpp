#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<bool>d;
vector<vector<int>>g;
void bfs(int b)
{
    queue<int>Q;
    Q.push(b);
    d[b]=true;

    while(!Q.empty())
    {
        int a=Q.front();
        Q.pop();
        for(auto j:g[a])
        {
            if(!d[j])
            {
                d[j]=true;
                Q.push(j);
            }
        }
        cout<<a<<" ";
    }
}

void makeEdge(int a,int b){
    g[a].push_back(b);
}
int main(){
    std::cout << "/* message */" << std::endl;
int n,v;
cin>>n>>v;
d.assign(n,false);
g.assign(n,vector<int>());
int a,b;
for ( int i = 0; i < n; i++)
{
    cin>>a>>b;
    makeEdge(a,b);
}
for (int i = 0; i < v; i++)
{
    if(!d[i]){
    bfs(i);
    }
}



}