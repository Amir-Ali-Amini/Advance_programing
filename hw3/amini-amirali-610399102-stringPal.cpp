#include <iostream>
#include <string>
#include<vector>
using namespace std;



// amirali amini -- 610399102
// stringPal

string strclear(string input)
{
  int i=0;
  int len=input.length();
  char ch;
  string re="";
  for(input[i] ; i<len ; i++)
  {
      char ch=input[i];
    if((65<=int(ch) & int(ch)<=90) || (97<=int(ch) & int(ch)<=122) || (int(ch)==32))
        re+=input[i];
  }

  return re;
}


int main(){
    string str;
    char str1[100];
    getline(cin,str);
    int t=0;
    str=strclear(str);
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;
    while (str[t]!='\0')t++;
    for (int i=0; str[i]!='\0';i++){
        for (int k =t ; k>i;k--){
                int ii=0,kk=0;
                for (int j =0 ; i+j+ii<=k-j-kk;j++){
                    while (str[k-j-kk]==' ' || str[k-j-kk]==',') kk++;
                    while (str[i+j+ii]==' '|| str[i+j+ii]==',')ii++;
                    if ( ((str [i+j+ii]!=str[k-j-kk])) && ((char)(((int)str [i+j+ii])-32)!=str[k-j-kk]) && ((char)(((int)str [i+j+ii])+32)!=str[k-j-kk]) ) {
                           // cout << "break " << i <<" "<< k <<endl << i+j+ii << "  " << k-j-kk <<endl;
                            break;}
                    if ((i+j+ii)+1>=(k-j-kk)) {
                       // cout << i << " " << k << endl;
                        arr1.push_back(i);
                        arr2.push_back(k);
                        arr3.push_back(k-i);
                       // cout << "* ";

                    }
                }
        }

    }
t=0;
for (int i=0 ; i<arr3.size();i++){
        //cout <<" 3 ";

    if (arr3[t]<arr3[i]) t=i;
}
    for (int i = arr1[t] ; i <= arr2[t]; i++){
        if ((( i!=arr1[t])&&(i!=arr2[t]))||(str[i]!=' '))cout <<str[i];
    }
    return 0;

}
