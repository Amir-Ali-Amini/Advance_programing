#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// factorize
int f(int a){
    if (a==1)return 0;
    int t=0;
    for (int i=2;1<a;i++){
        if (a%i==0){
            //cout << i <<" " <<a<< endl;
            a=a/i;
            t++;
            i=2;
            if (t==2&&a!=1)return 0;
        }
    }
    if (t==2)return 1;
    return 0;
}


int main(){
    int a,b;
    cin>> a>>b;
    int bb =b,aa=a,o=0;
    for (int i =a ; i<=b ; i++){
        if (f(i)==1){
            if (o==0) {
                cout <<i;
                o++;
            }
            else cout <<", "<<i;
        }
    }
    //cout << f(a)<<"   " << f(b);
    return 0;
}

