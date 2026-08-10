// if you have to find the position of phrase in a string
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  string s,p;
  cin>>s>>p;
  vector<int> arr;
  size_t n= s.find(p,0);
  while(n!=string::npos){
    arr.push_back(n);
    n=s.find(p,n+1);
  }
  for(int i=0;i<arr.size();i++){
    cout<<arr[i];
  }
  return 0;
}
