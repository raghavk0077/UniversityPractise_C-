#include "iostream"
using namespace std;

int main(){

    const int a = 4;
    const int b = 5;

    constexpr int i{a+b};
    // cout<<i;

    float f = static_cast<float>(5)/static_cast<float>(4);
    cout<<f;

    return 0;
}