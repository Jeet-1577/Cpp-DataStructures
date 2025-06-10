// is the number is the prime or not using the for loops and break


#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout << "Enter the value of n: ";
    cin >> n;
    
    bool isprime = 1;


    for(i=2; i<n; i++)
    {

        if(n%i==0){
            isprime = 0;
        }
        break;

    }
    
    if (isprime == 0){
        cout<<"the number is not prime";
    }
    else
    {
        cout<<"the number is prime";
    }
}