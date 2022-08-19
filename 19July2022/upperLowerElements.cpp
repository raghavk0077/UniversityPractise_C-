#include "iostream"
using namespace std;

int main() {

    int arr[3][3], sum = 0, sum1 = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cin>>arr[i][j];
        }
    }
    //upper triangle of matrix taking sum
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i < j){
                sum += arr[i][j];
                cout<<"element = "<<arr[i][j]<<endl;;
            }
        }
    }
    cout<<sum<<endl;

    //lower triangle of matrix taking sum
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i > j){
                sum1 += arr[i][j];
                cout<<"element = "<<arr[i][j]<<endl;;
            }
        }
    }
    cout<<sum1<<endl;



    return 0;
}