#include <iostream>
#include <vector>
#include <algorithm>
// #include <execution> // Include this for std::execution::par

using namespace std;

// Define the print function
int bb( vector<int>& v,int num) {
    int left=0;
    int right=v.size()-1;
    
    while (left <= right){
        int mid=left+(right-left)/2;
        if(v[mid]==num)
        return mid;
        else if (v[mid]<num)
        {
            left=mid+1;
        }
        else
        {
            right = mid - 1;
        }
        return -1;
}
}
void print(vector<int>& V) {
    for(int i : V) {
        cout << i << " ";
    }
    cout << endl;
}

void add(vector<int>& V, int val,int pos) {
    V.insert(V.begin()+pos,val); 
}
void remove(vector<int>&v,int pos)
{
    v.erase(v.begin() + pos);
}

int main(){
    vector<int> V={1,5,8,9,5,7,3,6};
    cout<<"Size = "<<V.size()<<endl;
    print(V);
    sort(V.begin(),V.end());
    cout<<"After sort"<<endl;
    print(V);

    add(V,4,2);
    cout<<"After add\n";
    print(V);
    remove(V,2);
    print(V);
    if(binary_search(V.begin(),V.end(),5)){
        cout<<"Found 5 in array";
    }else{
        cout<<"Not Found 5 in array";
    }
    int re=bb(V,5);
    if(re==-1){
        std::cout << "/* message */" << std::endl;
    }
    else
    {
        std::cout << "/* message */2222222" << std::endl;
    }
    
    return 0;
}

    // sort(std::execution::par, V.begin(), V.end()); // Corrected to std::execution::par
    // ye kaamakrta hai online plateform pe 