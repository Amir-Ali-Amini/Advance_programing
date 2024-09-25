#include <iostream>
//#include <iostream.h>
#include <string>
#include<vector>
#include<string.h>
using namespace std;



// amirali amini -- 610399102
// stringPal

int main(){
    string str , contex="";
    getline(cin,str);
    str+=" ";
    vector <string> vec;
    for (int i =0 ; i<str.size();i++){
        if (str [i] != ' ' ) contex += str[i];
        else{

         vec.push_back(contex);
         contex="";
            }
    }
    int sum=0;
    int c=vec.size();
    int bb[c];
    vector <string>a={ "zero", "one","two" , "three" , "four" , "five", "six" , "seven" , "eight" , "nine" , "ten",
     "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen" , "eighteen" , "nineteen" , "twenty",
      "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred" ,"thousand" };
      vector <int>b={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90,100,1000};
    for (int i =0 ; i<vec.size() ;i++){
        for (int k =0 ;k<a.size() ; k++){
            if (vec[i]==a[k]) bb[i]=b[k];

        }
    }
    for (int i =0 ; i<vec.size() ; i++){
       sum=bb[i]+sum;
        if (bb[i]==100 ){sum += (bb[i-1]) *99;
        sum-=100;}
        if (bb[i]==1000 ){sum += (bb[i-1])*999;
        sum -= 1000;}
        //cout << sum << endl;
   }
   cout << sum;
    return 0;
}
