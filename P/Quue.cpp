#include<iostream>
#include<queue>
using namespace std;

 int main() {
queue<int> Q;

for (int i = 0; i < 5; i++)
{
    Q.push(i);
}
std::cout << Q.size() << std::endl;
cout << "Queue after pushing elements: ";
while (!Q.empty())
{
    int x=Q.front();
    Q.pop();
    std::cout << x <<" " ;
}




    return 0;
}