#include <iostream>
#include <string>
#include<vector>
using namespace std;



// amirali amini -- 610399102
// stringPal
int main(){
    string a,b;
    getline(cin,a);
    //vector<string> b;
    int j=0;
    //a.push_back(a[0]);
    for (int i=0 ; i<a.size();i++){
        if ((int)a[i]>=48 &&(int)a[i]<=57){
            b+=a[i];
        }
    }

    for (int i =b.size()-1 ; i>=0 ;i--){
        cout <<b[i];
}
 cout << endl;
    for (int i =0 ; i<a.size() ; i++){
        if (a[i]<='z' && a[i]>='a'){cout <<a[i];
        if (!(a[i+1]<='z' && a[i+1]>='a'))cout << endl;}
        if (a[i]<='Z' && a[i]>='A'){cout <<a[i];
        if (!(a[i+1]<='Z' && a[i+1]>='A'))cout << endl;}
        if (a[i]<='9' && a[i]>='0'){cout <<a[i];
        if (!(a[i+1]<='9' && a[i+1]>='0'))cout << endl;}
        if ( !(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z')|| ('0'<=a[i] && a[i]<='9')|| a[i]==' '))
		{
            cout<<a[i];
			if ( ('a'<=a[i+1] && a[i+1]<='z') || ('A'<=a[i+1] && a[i+1]<='Z')|| ('0'<=a[i+1] && a[i+1]<='9')|| (a[i+1]==' '))
			{
				cout<<endl;
			}
		}
}
    return 0;
}
