#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    vector<int>V={1,2,3,4,8,6,5};
    priority_queue<int,vector<int>,greater<int>> PQ;

    for(auto var : V)
    {
        PQ.push(var);
    }
    while (!PQ.empty()) 
    {
        std::cout << PQ.top() << " ";
        PQ.pop();
    }

}