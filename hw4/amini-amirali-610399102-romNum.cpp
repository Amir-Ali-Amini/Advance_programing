#include <iostream>
#include <string>
#include<vector>
using namespace std;



// amirali amini -- 610399102
// stringPal
int f(int n){
    while (n>4 && n!=9){
    if (n>=50){cout<<"L";
    n-=50;}
    else {
    if (n>=10){
    cout << "X";
    n-=10;}
    else{
    if (n>=5&&n!=9){cout<< "V";
    n-=5;}}
    }


    }if (n==4)cout <<"IV";
    if (n==3)cout << "III";
    if (n==2)cout << "II";
    if (n==1)cout << "I";
    if (n==9)cout << "IX";
    return 0;}
int main(){
    int a,b;
    cin >>a >> b;
    f(a);
    cout << endl;
    f(b);
    cout << endl;
       f(a+b);
    cout << endl;
       f(a-b);


    return 0;
}
