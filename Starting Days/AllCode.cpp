// #include "iostream"   // can Also Be Done 


#include <iostream>
#include <string>
#define pi 3.14


using namespace std;

int main()
{
    

//  char b1;
//  cin>>b1;      // c d


//  char b2;
//  cin>>b2;   // e


 
//  cout<<b1<<endl;
//  cout<<b2<<endl;
 
 


// int a=8.2;
// int b=9.2;

// cout<<"a : "<<a<<endl;
// cout<<"b : "<<b<<endl;

// cout<<9.8 / 8.1<<endl;





// float a  =9.8;
// int b = 8;

// float c = a/b;

// cout<<c<<endl;    // 1.225






// float a  = 8;
// float b = -2;

// float c = a/b;

// cout<<c<<endl;       // -4;




// float a  = -8;
// float b = 2;

// float c = a/b;

// cout<<c<<endl;       // -4;





// float a  = -8;
// float b = -2;

// float c = a/b;

// cout<<c<<endl;       // -4      // Note  -8 / -2  not 4    ,, Its  -4     (In Vs code giving 4  , But actual Ans is : -4)






//  string fname;
    
//     cin>>fname;
    
    
//     cout<<"My name is : "<<fname<<endl;    //shivam kumar

//     // output :   shivam





    // true || False;   Boolean




/*
// bool takes   1 Byte ..


   bool a{true};
   
        cout<<a<<endl;   // 1
   
   
   bool b{false};
   
        cout<<b<<endl;   // 0
   

    
*/





// Binary Operators   : The Operator Performed on two Operands ...
    
    //  +  ,  *  ,  /   ,  %

    // %  - Remainder 


  //cout<<3.1 % 2.1<<endl;   // Invalid OParands    Error    % Can't  Possible on float


  // cout<<7 % 9<<endl;   // 7   // bcz remainder






       
       









        
   
//  const int a = 5;
//  a=10;
 
//  cout<<a<<endl;    // error: assignment of read-only variable ‘a’
 
 
 
//  cout<<"Pi : "<<pi<<endl;
 
 
 
 
 // LogiCal Operators ...
 
    //  1) && - And Operator     2) ||   OR        3)  !  NOT
    
       
    //   And Operator &&           //  2nd Operator  Or                 // 3rd Operator   Not 
                    
        // 1   1  1                 1   1  1                                !1  = 0
        // 0   1  0                 1   0  1                                !0  = 1
        // 1   0  0                 0   1  1
        // 0   0  0                 0   0  0
    
    
    
    
    
    // int a=5;
    // int b=3;
    
    //  int c = a && b;
    
    // cout<<c<<endl;
    
    
    
    
    
    
    // int a=-1;
    // int b=-8;
    
    
    // int c = a && b;
    
    // cout<<c<<endl;   // 1
    
    
    
    
    
    // int a=1;
    // int b=-8;
    
    
    // int c = a && b;
    
    // cout<<c<<endl;   // 1
    
    
    
    
    
    // int a=0;
    // int b=-8;
    
    
    // int c = a && b;
    
    // cout<<c<<endl;   // 0    // False  (Only At  0 )
    
    
    
    
    
 
  // 3  .. Not Operator
  
//   int a=8;
//   int c=!a;
//   cout<<c<<endl;   // 0       at  0  !0  = 1
   
   
   
   
   
   
   
            // Relation Operators    
                //      <=    >=    !=  == 
                
                // int a=5;
                // int b=4;
                // // cout<<a<=b<<endl;   // error   // bcz didn't Store Into something 
                // int c= a<=b;
                
                // cout<<c<<endl; //0
                
                
     
     
     
     
     
     
// Binary   Octal     Decimal       HexaDecimal 

/*

    binary  0b   01010
    octal    staring from 0
    decimal   Normal
    
    Hexadecimal    Starting from 0x  
    {
     
     0-9
     A-F
        
    }
    
*/







// BitWise Operatroe 

int a = 0b1010;
int b = 0b1111;


int c= a&b;    // bitwise  and 

cout<<c<<endl;



int d= a|b;    // bitwise  Or 

cout<<d<<endl;




int e= a ^ b;    // bitwise  XOr     0 1  : 1   1 0  : 1   1 1 : 0   0 0 : 0

cout<<e<<endl;



int f= ~a ;    // bitwise  Negate     Flip the bits    

cout<<f<<endl;



int g= a << 1 ;    // bitwise  Left Shift     

cout<<g<<endl;



int h= a >> 1 ;    // bitwise  Right    

cout<<h<<endl;



  
    return 0;

}