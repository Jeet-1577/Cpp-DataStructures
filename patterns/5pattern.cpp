#include<iostream>
using namespace std;

int main(){

    int a, count;

    cin >> a;

    int i = 1 ;
    count = 1;
    while(i<=a){

        int j = 1;
        while(j<=a){
            cout<<count<<" ";
            count = count + 1;
            j = j+1;
        }
        cout<<endl;
        i = i + 1;

    }



}
