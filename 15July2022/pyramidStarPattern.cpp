#include "iostream"
using namespace std;

int main(){ 

    int rows;
    cin>>rows;

    for(int i = 1; i <= rows; i++){
        //first half
        for(int s = rows - i; s > 0; s--){  //for printing spaces for first half patttern
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++){        //for printing the first half starting with row = 1
            cout<<i<<" ";
        }

        //second half
        for(int k = 2; k <= i; k++){        //for printing the second half starting starting with row = 2
            cout<<i<<" ";
        }
        //cout<<" ";
        cout<<endl;
    }
    

    return 0;
}