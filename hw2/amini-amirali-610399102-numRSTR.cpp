#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// numRSTR



int main(){
    int a,b;
    cin>> a>>b;
    int bb =b,aa=a,counter =1;
    while (bb!=0){
        bb=bb/10;
        aa=aa/10;
        if (aa==0 && bb!=0){
            cout <<0;
            return 0;
        }
        counter*=10;
    }
    if (aa!=0){
        cout <<0;
        return 0 ;
    }
    while (b!=0){
        if (a%10!=b/(counter/10)){
            //cout <<a%10<< ' '<<b/(counter/10)<<endl;
            cout <<0;
            return 0 ;
        }

        a=a/10;
        b=b%(counter/10);
        counter = counter/10;
        //cout << a << ' '<<b<<endl;
    }
    cout <<1;
    return 0;
}

