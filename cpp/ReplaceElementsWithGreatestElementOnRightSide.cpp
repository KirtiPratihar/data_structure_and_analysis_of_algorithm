#include <algorithm>

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ma =-1;
        for(int i=arr.size()-1;i>=0;i--){
            int m= arr[i];
            arr[i]=ma;
            ma= max(m,ma);
            
        }
        return arr;
    }
};
