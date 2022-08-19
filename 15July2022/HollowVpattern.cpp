#include "iostream"
using namespace std;

int main(){

    int rows;
    cin>>rows;

    for(int i = rows; i > 0; i--){
        for(int s = 0; s < rows - i; s++){
            cout<<"  ";
        }

        for (int j = 1; j <= rows; j++){
            if(i == j){
                cout<<"* ";
            }
        }

        for(int s1 = rows; s1 > 0; s1--){
            cout<<"  ";
        }

        for(int k = i; k > 1; k--){
            if()
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}