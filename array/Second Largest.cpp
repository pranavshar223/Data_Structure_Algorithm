# include<iostream>
# include<vector>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        // finr the higest number.
        
        
        
        int h1 = 0;
        
        for(int i=1 ; i<arr.size(); i++){
            
            if(arr[h1]<arr[i]){
                h1 = i;
            }
        }
        
        // 1h point the higest number.
        int h2 = -1;
        
        for(int i=0 ; i<arr.size() ; i++){
            
            if(arr[h1]>arr[i]  && arr[i]> h2 ){
                
                h2= arr[i] ;
            }
        }
        
        return h2;
        
        
    }
};

int main(){
    Solution s;
    vector<int> arr = {2, 45, 433, 6, 78};
    cout << s.getSecondLargest(arr) << endl;
    return 0;

}