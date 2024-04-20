#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;





int main()
{
    stack<int> ab;
    // Push elements to the Stack
    cout<<boolalpha<<ab.empty()<<endl;  // false
    int a;
    cout<<"Enter the size" <<endl;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        ab.push(i);
    }
    // ab.sort();  nhi hota
    cout<<"Top element  = "<<ab.top()<<endl;   
    while(!ab.empty())
    {
       cout<<ab.top()<<" ";
       ab.pop();    
    }
     cout<<std::boolalpha<<ab.empty()<<endl; 
   return 0;
    
}