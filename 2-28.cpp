#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Menu: A(dd) D(elete) S(ort) Q(uit), Select one:"<<endl;
    cin>>c;
    while(c!='Q'){
        switch(c){
        case 'A':cout<<"数据已经增加"<<endl;
        break;
        case 'D':cout<<"数据已经删除"<<endl;
        break;
        case 'S':cout<<"数据已经排序"<<endl;
        break;
        }
        cout<<"Menu: A(dd) D(elete) S(ort) Q(uit), Select one:"<<endl;
        cin>>c;
    }
    return 0;
}