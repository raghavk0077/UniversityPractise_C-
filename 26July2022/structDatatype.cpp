#include "iostream"
using namespace std;

struct Student {
    int age, uid;
    string name;
} s1;

int main() {

    // struct Student s2;

    // getline(cin,s1.name);
    // cin>>s1.age>>s1.uid;

    // getline(cin,s2.name);
    // cin>>s2.age>>s2.uid;

    Student s3[5];
    for(int i = 0; i < 5; i++){
        cin>>s3[i].name>>s3[i].age>>s3[i].uid;
    }

    for(int i = 0; i < 5; i++){
        cout<<endl;
        cout<<"Name: "<<s3[i].name<<"\nAge: "<<s3[i].age<<"\nUID: "<<s3[i].uid<<endl;
    }

    return 0;
} 
