#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> us={5,10,4,20,5,5,15};
    cout<<"Find the size " <<us.size()<<endl;
    for(auto  i:us){
        cout<<i<<"  ";
    }
   
    cout<<"\n"<<boolalpha<<us.empty()<<endl;
    
}