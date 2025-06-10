//0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765.........

//  logic  ==   n = (n-1) + (n-2)


#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n ;

    int a = 0;
    int b= 1;
    int nextnumber;
    
    
    for(int i=1; i<=n ; i++){
        
        nextnumber = a + b;
        
        cout<<nextnumber<< " ";

        a = b;
        b = nextnumber;

    }

}
