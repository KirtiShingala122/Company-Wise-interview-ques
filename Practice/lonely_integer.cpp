#include<iostream>
#include<vector>
using namespace std;

int fun(vector<int> &arr){
    int temp=0;
    int n = arr.size();

    for(int i = 0; i < n/2; i++){
        temp ^= arr[i];
        temp ^= arr[n-1-i];
    }

    // If odd sized array, xor the middle element
    //if(n % 2 != 0)
        

    return temp ^= arr[n/2];
}

int main(){
    vector<int> arr={5,1,2,3,2,1,3};
    cout<<fun(arr);
    // int ans=7^3;
    // cout<<ans;
}
