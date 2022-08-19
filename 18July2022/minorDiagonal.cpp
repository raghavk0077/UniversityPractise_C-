#include "iostream"
using namespace std;

int main() {

    int r = 3, c = 3;
    // int arr1[r][c];
    // int arr2[r][c];
    int arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0, j = 2; i < r, j >= 0; i++,j-- ){
        
            cout<<arr[i][j]<<" ";
        
    }

    return 0;
}