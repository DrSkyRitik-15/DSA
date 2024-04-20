#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<bool>d;
vector<vector<int>>g;

void dfs(int b){
    stack<int> s;
    s.push(b);
    d[b]=true;

    while (!s.empty())
    {
        int a=s.top();
        s.pop();
        for(int j:g[a])
        {
            if(!d[j])
            {
                d[j]=true;
                s.push(j);
            }
        }
        cout<<a<<" ";
    }
}
void make(int a,int b)
{
    g[a].push_back(b);
}
int main(){
    std::cout << "/* message */" << std::endl;
    int n,v;
    cin>>n>>v;
    d.assign(n,false);
    g.assign(n,vector<int>());
    int a,b;

    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        make(a,b);
    }
    dfs(3);
    return 0;
    
}