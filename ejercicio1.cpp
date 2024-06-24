#include<iostream>
using namespace std;
int main(){
    float a,b,r;
    char c;
    cout<<"ingrese el primer numero";cin>>a;
    cout<<"ingrese el segundo numero"cin>>b;cin>>c;
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
        if(b!=0){
                r=a/b;
                cout<<r;}
            else{
                cout<<"no se puede"; }
            
        break;
        default: 
            cout<<"operacion no valida";
        break;
    }
    return 0;
}