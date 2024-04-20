#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,std::greater<int>> ab;

    vector<int>  a(5);
    for(int i=0;i<5;i++)
    {
        a[i]=i;
        ab.push(a[i]);
    }
    while(!ab.empty())
    {
        cout<<ab.top()<<" ";
        ab.pop();
    }
}
