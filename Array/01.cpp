#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v) {
    vector<int>::iterator j= v.begin();
    cout<<"Te value is = ";
    for(int i=0;i<v.size();i++) {
        {

        cout<<v[i]<<" ";
        
        }
    }
}
// void redisplay(vector<int> &v) {
//     cout<<"\nReverse the value"<<endl;
//     vector<int>::iterator j= v.begin();
//     cout<<"Te value is = ";
//     for(int i=v.size()-1;i>=0;i--) {
//         {

//         cout<<v[i]<<" ";
        
//         }
//     }
// }
void redisplay2(vector<int> &v) {
    cout<<"\nReverse the value"<<endl;
    vector<int>::reverse_iterator j= v.rbegin();
    cout<<"Te value is = ";
    for( j=v.rbegin();j!= v.rend();j++) 
        {

        cout<<*j<<" ";
        
        }
    
}

int main(){
    int man;
    cout<<"Enter the size of array: "<<endl;
    cin>>man;
    vector<int>A(man);
        int x;
    for(int i=0;i<A.size();i++)
    {
        cout<<"Enter element "<<i+1<<":-"<<endl;
        cin>>x;
        A[i]=x;
        // A.push_back(x);

    }
    cout<<"Size of Array = "<<A.size()<<endl;
    display(A);
    sort(A.begin( ),A.end());
    // A.reverse();
    // redisplay(A);
    redisplay2(A);
    return 0;
}
