#include<iostream>
#include<vector>
#include<set>
using namespace std;
void print(set<int>& s)
{
    for (auto& i : s){
    cout << i << " ";
    }
}
void insertintoset(vector<int>&v,set<int>&s){
    s.insert(v.begin(),v.end());

}


int main(){
    set <int> S;
    vector <int> V={1,8,6,9,5};// Vector of size 5 with all elements initialized
    int num;
    cout<<"Enter the number int vector then we move to Set"<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cin>>num;
    //     V[i]=num;
    // }

    insertintoset(V,S);// Inserting the elements
    set<int>::iterator ssit=S.begin();
    cout<<"print all the element in the set"<<endl;
   print(S);
    S.insert(10);
    cout<<"\nAfter insertion of 6 into the set \n";
   print(S);
   
   S.erase(4); // Erasing the value  // jab nahi hoga to nahi delete hoga 
  cout<<endl;
 print(S);
  cout<<endl;
 cout<<*S.upper_bound(6);
  cout<<endl;
 cout<<*S.lower_bound(10);

}
