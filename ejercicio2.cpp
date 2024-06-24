#include <iostream>
using namespace std;
int main(){
    int n1,n2,c=0, i=1;
    cout<<"ingrese un numero : ";cin>>n1;
    cout<<"ingrese otro numero: "; cin>>n2;
    while(i<=n1&&n2<=n2){
        if(n1%i==0&&n2%i==0){
            c=c+1; }
        i=i+1;
    }
    if(c>1){
        cout<<"No son PESI";
    } else{
        cout<<"Son PESI";
    } return 0
    }
