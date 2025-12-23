#include<iostream>
#include<vector>

using namespace std;


class Solution {
  public:

    // method 1 (Brute Force)
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        for(int i=0 ; i<arr.size(); i++){
            
            // check number is zero
            if(arr[i] == 0){
                // number is zero then swip it to right,
                int ind= i+1;
                
                // search for non zero number. 
                while(ind < arr.size()-1 && arr[ind] == 0){
                    ind++;
                }
                
                // swap zero from number.
                
                if(ind<arr.size()){
                    arr[i] = arr[ind];
                    arr[ind] = 0;
                }
            }
        } 
    }

    // method 2 two pointer.
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j=0;
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] != 0){
                
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
        
    } 

};


int main(){
    Solution s;

    vector<int> arr = {1, 2, 0, 0};

    s.pushZerosToEnd(arr);

    for(auto i : arr){
        cout <<i<<" ";
    }
    return 0;
}

