#include "iostream"
using namespace std;

int main() {

    int r = 3, c = 3;
    int arr1[r][c];
    int arr2[r][c];
    int arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<(arr1[i][j] + arr2[i][j])<<" ";   //addition of two matrices
        }
        cout<<endl;
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<(arr1[i][j] - arr2[i][j])<<" ";   //subtraction of two matrices
        }
        cout<<endl;
    }



    return 0;
}