#include<iostream>
using namespace std;
int main (){
    char c='l';
    while(c!='Y'&&c!='N'){
        cout<<"现在正在下雨吗？"<<endl;
        cin>>c;
        if(c=='Y'){
            cout<<"现在正在下雨"<<endl;
        }else{
            cout<<"现在没有下雨"<<endl;
        }
    }
    return  0;
}