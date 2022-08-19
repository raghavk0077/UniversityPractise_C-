#include "iostream"
using namespace std;

int main() {

    int a[5] = {1,2,3,4,5};
    int *x = NULL;
    x = a;

    int i = 0;
    while(i < 5){
        cout<<*x<<" ";
        x++;
        i++;
    }

    // int *x = NULL;
    // cout<<x;

    return 0;
}