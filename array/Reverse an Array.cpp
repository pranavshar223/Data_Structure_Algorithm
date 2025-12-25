# include<iostream>
# include<vector>

using namespace std;
// just for concept understanding.
class test{
    public:
    void division_operator(int num){

        cout<<num<< "-"<< num/2<<endl;
    }
};


// main finction is here.
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        for(int i=0; i< arr.size()/2; i++){
            
            int left = i;
            int right = arr.size()-1-i;
            
            swap(arr[left], arr[right]);
        }
        
        
    }
};

int main(){
    test t;
    Solution s;

    vector<int> arr = {2,5,6,7,72,13};
    // array before reverse.
    for(auto i : arr){
        cout << i << " ";
    }
    cout<<endl;
    // reverse function.
    s.reverseArray(arr);
    // array after reverse.
    for(auto i : arr){
        cout << i << " ";
    }
    
}