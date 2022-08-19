#include "iostream"
using namespace std;

struct Student {
    int age, uid;
    string name;
};

void display(struct Student ss[]){
    for(int i = 0; i < 5; i++){
        cout<<endl;
        cout<<"Name: "<<ss[i].name<<"\nAge: "<<ss[i].age<<"\nUID: "<<ss[i].uid<<endl;
    }
}

int main() {

     Student s3[5];
    for(int i = 0; i < 5; i++){
        cin>>s3[i].name>>s3[i].age>>s3[i].uid;
    }

    display(s3);

    return 0;
}
