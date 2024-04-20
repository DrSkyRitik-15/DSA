#include<iostream>
#include<deque>
using namespace std;
void print(deque<int>&g)
{
    deque<int>::iterator A=g.begin();
    for(A=g.begin();A!=g.end();A++)
    {
        cout<<*A<<" ";
    }
    g.begin();
}

int main()
{
    int size;
    cout<<"Enter the Size of "<<endl;
    cin>>size;
    deque<int> ab(size);

    for(int i=0;i<size;i++)
    {
        ab[i]=i ;
    }
    print(ab);
    return 0;

}