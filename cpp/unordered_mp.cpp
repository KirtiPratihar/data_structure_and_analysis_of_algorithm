// see in CPP HashMap or hashtable are the same thing . 
// To initialize the code is-
unordered_map<int, int> map;

// to put a value
map.insert({k,l});
or
map[k]=l;

//to erase a value
map.erase(k);

//print all the words and there repetation.

#include <iostream>
#include <string>
#include <sstream>
#include<unordered_map>
using namespace std;


int main(){
    string s,word;
    getline(cin,s);
    unordered_map<string , int> mp;
    stringstream ss(s);
    while(ss>>word){
        mp[word]+=1;
        }
    for(auto const&pair :mp){
        cout<<pair.first<<":"<<pair.second;
        if(pair.second>=2){
            cout<<endl<<"this is more than 2"<<pair.first;
            }
        }
    
    
    
    return 0;}
