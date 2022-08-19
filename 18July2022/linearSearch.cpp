#include "iostream"
using namespace std;

int main() {

    int n = 10,item, flag = 0;
    int arr[n];

    for(int i = 0; i < 10; i++){
        cin>>arr[i];
    }

    cout<<"Find the element: ";
    cin>>item;

    for(int i = 0; i < 10; i++){
        if(item == arr[i]){
            cout<<"item is present at "<<i<<" position";
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout<<"item is not present in array";
    }




    return 0;
}