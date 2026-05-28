#include <iostream>
#include<vector>
using namespace std;

int maxa(vector<int>& arr){
    int n=-1;
    for(int i=0;i<arr.size();i++){
        arr[i]>n;
        n=arr[i];
        cout<<n;
    }
    return n;
    
}
int main(){
    vector<int> arr1={2,1,4,5};
    cout<< maxa(arr1);
    return 0;
}
