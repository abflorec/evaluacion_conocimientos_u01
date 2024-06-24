#include<iostream>
using namespace std;
int main(){
    float a,b,r;
    char c;
    cin>>a;
    cin>>b;cin>>c;
    switch(c){
        case '+':
            r=a+b;
            cout<<r;
        break;
        case '-':
            r=a-b;
            cout<<r;
        break;
        case '*':
            r=a*b;
            cout<<r;
        break;
        case '/': 
                r=a/b;
                cout<<r;
            
        break;
        default: 
            cout<<"operacion no valida";
        break;
    }
    return 0;
}
