// #include is a preprocessor directive that is used to include the corresponding header file and it gives instructions to complier before the process starts 
//  <iostream> is a file for input and output operations. 
// using namespace std; --> this is used to create a namespace for std library of cout and cin.

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;

    if (a>0){
        cout<<"number is positive";
    }
    else if (a<0)
    {
        cout << "number is nagative";
        }
    else{
        cout<<"number is zero";
    }

}