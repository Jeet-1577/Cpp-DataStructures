#include<iostream>
using namespace std;

int main(){

    int a;

    cin >> a;

    int i = 1 ;

    while(i<=a){

        int j = 1;
             while(j<=a){
            cout<<a-j+1;
            j++;
        }
        cout<<endl;
        i = i + 1;

    }



}
