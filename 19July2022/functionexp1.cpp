#include "iostream"
using namespace std;

int sum(int,int);
int sub(int,int);

int main() {

    cout<<sum(2,5)<<endl;
    cout<<sub(5,2)<<endl;


    return 0;
}

int sum(int a, int b){
    return a + b;
}

int sub (int a, int b){
    return a - b;
}