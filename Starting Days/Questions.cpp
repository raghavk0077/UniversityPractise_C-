#include "iostream"
#include "cmath"
using namespace std;

int main(){

    //prime nos between specific range
    /*
    int n1,n2;
    cin>>n1>>n2;
    
    int i = n1;
    while(i <= n2){
        bool flag = true;
    
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0)
                flag = false;
                // break;
            else
                continue;
        }
        if(flag == true){
            cout<<i<<" ";
        }
        // cout<<
        i++;
    }
    */
    

    //gcd of 2 numbers
    /*
    int n1, n2, min,gcd = 1, i = 1;
    cin>>n1>>n2;
    min = (n1>n2)?n2:n1;
    while(i <= min){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = gcd*i;
            cout<<gcd;
        }
        i++;
    }
    cout<<"gcd = "<<gcd;
    */


    //check whether number is prime or not
    /*
    int n;
    cin>>n;
    bool flag = true;
    for (int i = 2; i < n/2; i++) 
    {
        if (n % i == 0)
            flag = false;
            
            break;
    }
    (flag == false)?cout<<"Not prime":cout<<"prime";
    */
    



    //fibonacci number using for loop
    /*
    int a=0;
    int b=1;
    int c;
     
    cout<<a<<","<<b<<",";
    for(int i = 2; i < 10; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<",";
    }
    */

    //factorial of number using while loop
    /*
    int n, fact = 1;
    cin>>n;
    while(n >= 1){
        fact = fact*n;
        n--;
    }
    cout<<fact;
    */

    //Roots of Quadritic Equations
    /*
    cout<<"ax^2 + bx + c\nWrite the values of a, b and c\n";
    float a, b, c;
    cin>>a>>b>>c;
    float root1, root2, img, real;
    float D = sqrt((b*b) - 4*a*c);
    if (D > 0){
        root1 = ((-b) + D)/(2*a);
        root2 = ((-b) - D)/(2*a);

        cout<<root1<<"\n"<<root2;

    }

    else if(D == 0){
        root1 = root2 = (-b)/(2*a);
        cout<<root1<<"\n"<<root2;
    }


    else{
        real = (-b)/(2*a) ;
        img = ((-D)/(2*a));

        cout<<real<<" + "<<img<<"i\n";
        cout<<real<<" - "<<img<<"i";
    }
    */

    //finding size of integer, float, double, char, string
    //cout<<sizeof(int)<<"\n"<<sizeof(float)<<"\n"<<sizeof(double)<<"\n"<<sizeof(char)<<"\n"<<sizeof(string);
    


    //to find quotient and remainder
    /*
    int n1, n2;
    cin>>n1>>n2;
    float q = n1/n2;
    float r = n1%n2;
    cout<<"Quotient is "<<q<<"\nReamainder is "<<r;
    */

    //implicit Typecasting
    // float x = 5/2;
    // cout<<x;


    //ASCII values
    /*
    char alpha;
    cin>>alpha;
    cout<<(int)alpha;
    */







    //Calculator of two nos by entering operator
    /*
    char op;
    float n1, n2;
    cin>>n1>>n2;
    cin>>op;
    switch(op){
        case '+':
            cout<<(n1+n2);
            break;
        case '-':
            cout<<(n1-n2);
            break;
        case '*':
            cout<<(n1*n2);
            break;
        case '/':
            cout<<(n1/n2);
            break;
        case '%':
            cout<<((int)n1%(int)n2);    //typecasting
            break;
        default:
            cout<<"Invalid Operator";

    }
    */


    //Check vowel or not with switch case
    /*char alphabet;
    cin>>alphabet;
    switch (alphabet)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'U':
    case 'u':
        cout<<alphabet<<" is a vowel";
        break;
    
    default:
        cout<<alphabet<<" is a consonant";
    }
    */
    //Greatest of three numbers
    // int a, b, c;
    // cin>>a>>b>>c;
    // (a>=b && a>=c)?cout<<a:(b>=a && b>=c)?cout<<b:cout<<c;



    //Find the total salary = Basic Salary  + DA + HRA
    /*
    float bs, hra = 0, da = 0, total_salary;
    cout<<"Enter Basic Salary:";
    cin>>bs;

    if(bs <= 5000){
        hra = 0.02 * bs;
        da = 0.02 * bs;
    }
    else if(5000 < bs && bs <= 10000){
        hra = 0.03 * bs;
        da = 0.03 * bs;
    }
    else if(10000 < bs && bs <= 15000){
        hra = 0.03 * bs;
        da = 0.035 * bs;
    }
    else{
        hra = 0.04 * bs;
        da = 0.045 * bs;
    }

    total_salary = bs + hra + da;
    cout<<"Your total salary = "<<total_salary;
    */

    //Check whether year is leap or not
    /*
    int year;
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<"Leap Year";
            }
            else{
                cout<<"Not a leap year";
            }
        }
        else{
            cout<<"Leap Year";
        }
    }
    else{
        cout<<"Not a leap year";
    }
    */

    //Check whether a number is even or odd...
    /*
    int a;
    cin>>a;
    (a%2 == 0)?cout<<"even":cout<<"odd";
    */

    return 0;
}