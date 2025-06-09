#include<iostream>
using namespace std;

int main(){

    int a,count;

    cin >> a;

    int i = 1 ;
    while(i<=a){
        
        count = i;
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            j = j+1;
            count = count + 1;
        }
        cout<<endl;
        i = i + 1;

    }



}
