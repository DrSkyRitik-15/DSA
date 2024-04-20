#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &U){
    cout<<"The array is "<<endl;
    vector<int>::iterator i;
    for (i = U.begin(); i != U.end(); ++i){
        cout<<*i<<" ";
    }
}

int main(){
    cout<<"Enter the array size";
    int man;
    cin>>man;
    vector <int> arr(man);  //creating a dynamic array of given size
    cout<<"Enter the data";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    // arr.begin();
    // sort(arr.begin(),arr.end());   //sorting the array in ascending order
    // cout<<endl<<"The sorted array is: ";
    // for(auto x : arr) {     //printing each element of the array using   range based loop
    //     cout << x << " ";
    // }
    vector<int>::iterator j=arr.begin();
    for(j=arr.begin();j!=arr.end();++j){
        {
            // if(*j%2==0 )       //checking whether number is even or not
            cout<<*j<<" ";
        }
   
    }
    arr.begin();
    cout<<"Enter the postion  to insert the value";
    int pos,val;
    cin>>pos>>val;
    arr.insert(arr.begin()+pos-1,val);      //inser
    cout<<"\n The modified array after inserting is:\n";

   display(arr);
   for(int i=0;i<arr.size();i++)
   {
    arr[i]=arr[i+1];
   } 
   arr.pop_back();
   display(arr);

return 0;
}








































































































































































































































































