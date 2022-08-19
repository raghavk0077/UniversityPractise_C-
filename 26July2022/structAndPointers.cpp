#include "iostream"
using namespace std;

union Student {
    int age, uid;
    double d;
    // string name;
} ;

int main() {
    union Student s1, s2, s3;
    cout<<sizeof(s1);

    return 0;
}