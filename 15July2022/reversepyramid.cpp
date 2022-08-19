#include "iostream"
using namespace std;

int main(){

    int rows;
    cin>>rows;

    for(int i = rows; i > 0; i--){
        // for(int s = 0; s < rows - i; s++){
        //     cout<<"  ";
        // }
        // for(int k = i; k > 1; k--){
        //     cout<<"* ";
        // }
        for(int j = i; j > 0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}