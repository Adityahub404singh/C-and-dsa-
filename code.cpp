#include<iostream>
using namespace std;
int main(){
//    a=97 and A=65 Z=90 implicit
    char ch;
    cout<<"enter a char";
    cin >> ch;
    if('a'<= ch && ch <='z'){
        cout<<"lowercase";
    }else{
        cout<<"uparcase";
    }
}