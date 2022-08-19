#include "iostream"
using namespace std;

int main(){

    int rows;
    cin>>rows;

    for(int i = rows; i > 0; i--){
        for(int s = 0; s < rows - i; s++){  //loop for printing spaces
            cout<<"  ";
        }
        for(int j = i; j > 0; j--){ //loopp for printing stars
            cout<<i<<" ";           //for printing numbers instead of stars to get desired pattern
            // cout<<"* ";
        }
        cout<<endl;
    }

    /*
        for rows = 5
        i = 5 and j = 5
        first go to the spaces loop
        s = 0 and s < 5 - 5 so no space will print
        then go to j loop and print exactly 5 stars in first row
        * * * * *

        then decrement i by 1
        s = 0 and s < 5 - 4 so one space will print
        and then go to j loop and execute it 4 times
        * * * *

        desired result for rows = 5
        * * * * * 
          * * * *
            * * *
              * *
                *
          */

    return 0;
}