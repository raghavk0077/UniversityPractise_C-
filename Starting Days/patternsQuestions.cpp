#include "iostream"
using namespace std;

int main(){
    int rows;
    cin>>rows;
    int c = 0;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    cout<<endl;

    // for(int i = 0; i < rows; i++){
    //     for(int k = 0; k <= i; k++){
    //         c++;
    //     }

    // }
  

    // for(int i = rows; i > 0; i--){

      

    //     for(int j = i; j > 0; j--){
    //         cout<<c<<" ";
    //         c--;
    //     }

    //     cout<<endl;
    // }
}