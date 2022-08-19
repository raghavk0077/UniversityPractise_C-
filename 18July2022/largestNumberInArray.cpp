#include "iostream"
using namespace std;

int main(){

    int largest = 0, smallest = 0;
    int n;

    cin>>n;                         //inputting size of array
    
    int arr[n];
    for(int i = 0; i < n; i++){     //inputting elements in array
        cin>>arr[i];
    }

    largest = smallest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] >= largest){
            largest = arr[i];
        }

        else if(arr[i] <= smallest){
            smallest = arr[i];
        }
    }

    cout<<"largest element in array: "<<largest<<endl;
    cout<<"smallest element in array: "<<smallest<<endl;


    return 0;
}