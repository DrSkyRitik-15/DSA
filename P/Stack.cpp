#include<iostream>
#include<stack>

using namespace std;
   
int main(){
    stack<int>ab;
    int length;
    std::cout << "Enter the length" << std::endl;
    cin>>length;
int a;
    for (int i = 0; i < length; i++)
    {
        cin>>a;
        ab.push(a);
    }
    while (!ab.empty())
    {
        std::cout << ab.top() << " ";
        ab.pop();
    }

    
}
