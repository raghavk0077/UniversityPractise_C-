//z = a+b+ c*d/e - c*j/k
#include "iostream"
using namespace std;

float sum(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mult(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}

int main(){

    float a,b,c,d,e,j,k;
    cin>>a>>b>>c>>d>>e>>j>>k;

    float result1 = mult(c,d);                  //c*d
    float result2 = div(result1,e);             //(c*d)/e
    float result3 = mult(c,j);                  //c*j
    float result4 = div(result3,k);             //(c*j)/k
    float result5 = sum(a,b);                   //a+b
    float result6 = sum(result2, result5);      //a+b + c*d/e
    float finalResult = sub(result6, result4);  //a+b+ c*d/e - c*j/k

    cout<<finalResult<<endl;

    return 0;
}