#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// binaryDigitNum

int base(int n){
    int sum=0,t=1,con=0;
    while (n&&t<9){
        //sum+=(n%2)*t;
        con +=n%2;
        n=n/2;
        t+=1;

    }
    return con;
}



int main(){
    int n ,t;
    cin >> n;
    //t=n;
    //if (n<0)n=-1*n;
    //if (n==0)cout <<0;
    if (n>=0)cout << base(n);
    else cout <<base(256+n);
    return 0;
}

