#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l){
    list<int>::iterator M=l.begin();
    // for(M=l.begin();M!=l.end();++M){
    //     cout<<*M<<" "<<endl;
    // }
    for(auto s:l)
    {
        cout<<s<<" ";
    }
    M=l.begin();
}
void position(list<int>&L,int pos,int num){
    // list<int>::iterator J=L.begin();
    auto J=L.begin();
    advance(J,pos);
    // for(int i=0;i<pos;i++)
    // {
    //     J++;
    // }
    // L.insert(J,num);
    // J=L.begin();
    L.insert(J,num);
}
void delete1(list<int>&L,int pos){
    // list<int>::iterator J=L.begin();
    // for(int i=0;i<pos;i++)
    // {
    //     J++;
    // }
    auto J=L.begin();
    advance(J,pos);
    L.erase(J);
    // J=L.begin();
}
int main(){
    list<int> link={1,5,6,8,7};
    int man;
    // cout<<"Enter the size of Linkedlist "<<endl;
    // cin>>man;
    // int x;
    // for(int i=0;i<man;i++)
    // {
    //     cout<<"Enter element "<<i+1<<":-";
    //     cin>>x;
    //     link.push_back(x);
    //     // link.push_back(i);
    // }
    cout<<"The linkedlist is : ";
    display(link);
    link.sort();
    cout<<"\nLinkedlist after sorting: ";
    display(link);
    cout<<"\nEnter the postion where you want to insert an element: ";
    position(link,2,45);
    cout<<"After insert "<<endl;
    display(link);
    cout<<"Atfer delete "<<endl;
    delete1(link,2);
    display(link);
    cout<<"First element"<<endl;
    cout<<link.front()<<endl;
    
    cout<<"Last element"<<endl;
    cout<<link.back()<<endl;
    
    


    
    return 0;
}