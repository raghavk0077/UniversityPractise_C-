#include "iostream"
using namespace std;

int fact(int *);


int main() {

    int n;
    cin>>n;
    
    cout<<fact(&n);

    return 0;
}

int fact(int * n){
    int z = *n;
    int f = 1;
    for(int i = 1; i <= z; i++){
         f *= i;
    }

    return f;
}