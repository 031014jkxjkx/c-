#include<iostream>
using namespace std;
bool prime(int n);
int main(){
    int i;
    for(i=2;i<101;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
bool prime(int n){
    int i=2;
    bool t=true;
    for(i=2;i<n;i++){
        if(n%i==0){
            t=false;
            break;
        }
    }
    return t;
}