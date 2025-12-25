#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:

    void sortarr(vector<int>& arr, int start, int end){
        sort(arr.begin() + start, arr.begin() + end);
    }

    // FIX 1: correct pivot logic + guaranteed return
    int findpivot(vector<int> &arr){
        for(int i = arr.size() - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                return i;
            }
        }
        return -1;   // IMPORTANT
    }

    void swaparr(vector<int> &arr, int pivot){
        int close_index = pivot + 1;

        for(int i = pivot + 1; i < arr.size(); i++){
            if(arr[i] > arr[pivot] && arr[i] <= arr[close_index]){
                close_index = i;
            }
        }
        swap(arr[pivot], arr[close_index]);
    }

    void nextPermutation(vector<int>& arr) {
        int pivot = findpivot(arr);

        // FIX 2: handle descending case
        if(pivot == -1){
            reverse(arr.begin(), arr.end());
            return;
        }

        swaparr(arr, pivot);

        // FIX 3: reverse instead of sort
        reverse(arr.begin() + pivot + 1, arr.end());
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,6,4,9,7,5};

    for(auto i : arr) cout << i << " ";
    cout << endl;

    s.nextPermutation(arr);

    for(auto i : arr) cout << i << " ";
    return 0;
}
