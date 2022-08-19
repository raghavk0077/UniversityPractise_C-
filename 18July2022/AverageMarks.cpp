#include "iostream"
using namespace std;

int main(){

    int sum = 0, avg;
    string name;
    int marks[4];
    getline(cin, name);

    for (int i = 0; i < 4; i++)
    {
        cin>>marks[i];
        sum += marks[i];
    }
    avg = sum/4;
    cout<<name<<" has averaged "<<avg<<" marks.";

    return 0;
}