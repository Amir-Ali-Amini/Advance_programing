#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// abjad




int main(){
    int sum=0;
    char str[100];
    cin.get (str,100);
    for (int t=0;str[2*t]!='\0';t++){
        int i =2*t;
        if (str[i]=='a')sum+=1;
        if (str[i]=='b')sum+=2;
        if (str[i]=='j')sum+=3;
        if (str[i]=='d')sum+=4;
        if (str[i]=='w' || str[i]=='v')sum+=6;
        if ((str[i]=='z') && (str [i+1]!='h'))sum+=7;
        if (str[i]=='h')sum+=8;
        if (str[i]=='y' || str[i]=='i')sum+=10;
        if ((str[i]=='k') && (str [i+1]!='h'))sum+=20;
        if (str[i]=='l')sum+=30;
        if (str[i]=='m')sum+=40;
        if (str[i]=='n')sum+=50;
        if ((str[i]=='s') && (str [i+1]!='h'))sum+=60;
        if (str[i]=='f')sum+=80;
        if (str[i]=='q')sum+=100;
        if (str[i]=='r')sum+=200;
        if ((str[i]=='s') && (str [i+1]=='h'))sum+=300;
        //if ((str[i]=='k') && (str [i+1]=='h'))sum+=600;
        if (str[i]=='t')sum+=400;
        if ((str[i]=='g'))sum+=2000;
        if ((str[i]=='p'))sum+=4000;
        if ((str[i]=='z') && (str [i+1]=='h'))sum+=5000;
        if ((str[i]=='c') && (str [i+1]=='h'))sum+=3000;
    }
    cout << sum;
    return 0;
}

