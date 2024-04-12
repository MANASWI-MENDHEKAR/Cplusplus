#include<iostream>
using namespace std;
int main(){
    int n1 , n2 , n3 ;
    cout<<" enter three numbers:"<<endl;
    cin>> n1 >> n2 >> n3 ;

    if(n1>n2 && n1>n3){
        cout<<" n1 is largest number."<<n1;
    }
    else if(n2>n1 && n2>n3){
        cout<<" n2 is largest number."<<n2;
    }
    else {
        cout<<" n3 is largest."<<n3;
    }

    return 0;
}