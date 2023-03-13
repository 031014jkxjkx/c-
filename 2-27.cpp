#include <iostream>
using namespace std;
int main(){
    cout<<"你考试考了多少分？"<<endl;
    int n;
    cin>>n;
    if(n>=90){
        cout<<"优"<<endl;
    }else if(n>=80){
        cout<<"良"<<endl;
    }else if(n>=60){
        cout<<"中"<<endl;
    }else{
        cout<<"差"<<endl;
    }
    return n;
}