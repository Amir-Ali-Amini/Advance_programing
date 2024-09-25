#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// clrStr



int main(){
    char str[100];
    cin.get(str, 100 , '\n');
    for (int i=0 ; str[i]!='\0';i++){
        if ((((int)str[i]>= (int )'A')&&((int)str[i]<= (int )'Z'))||(((int)str[i]>= (int )'a')&&((int)str[i]<= (int )'z'))||( (int )str[i]==(int )' ')) cout << str[i];
    }
    return 0;
}
