#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // by using extra space.
        
        int len = arr.size();
        
        int ptr = d%len;
        
        vector<int> dummy;
        
        for(int i= ptr ; i<len ; i++){
            
            dummy.push_back(arr[i]);
        }
        
        for(int j=0; j<ptr ; j++){
            
            dummy.push_back(arr[j]);
        }
        
        arr = dummy;
        
    }
};

