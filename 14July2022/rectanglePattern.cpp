#include "iostream"
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int l, b;
        cin>>l>>b;
        for(int i = 1; i <= l; i++){
            for(int j = 1; j <= b; j++){
                if(i == 1 || i == l || j == 1 || j == b){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}