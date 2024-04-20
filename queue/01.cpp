#include<iostream>
#include<queue>

using namespace std;



int main()
{
    queue<int> ab;
    for(int i=0;i<=9;i++)
    {
        ab.push(i);
    }
    cout<<"Queue before reversing: ";
    while(!ab.empty())
    { 
        int x = ab.front();
        ab.pop();
        cout <<x<< " ";
    }
  

    return 0;
}