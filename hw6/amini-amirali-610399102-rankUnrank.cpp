#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

//amiraliamini - 610399102
//rankunrank
void bsaz(int n , string a[]){
    string test="";
    for (int i =0 ; i< n ; i++)test+="0";
    a[0] = test;
    int j=1;
    int i=n-1;
    while (i>=0){
	i=n-1;
	while (i>=0){
		if (test[i]=='1'){
			test[i]='0';

		}
		else{
			test[i]='1';

			break;
		}
		i--;
	}
		//cout << test<<endl;
	if(i>=0)a[j]=test;
	j++;
}
}


void printArr(int *array, int n){
for (int i=0; i<n;i++){
	cout<<array[i]<<" ";
}
}

int main(){
int tabe , tool;
cin>>tabe;
cin>>tool;
int n=pow(2,tool);
int araye_asli[n];
for (int i=0; i<tool;i++){
	cin>>araye_asli[i];
    }
int q,x;
cin>>q;
string araye[n];
bsaz(tool,araye);
if (tabe==2){
	int tedad=0;
	int i=0;
	while (i<q){
		int vorodi;
	cin>>vorodi;
	tedad++;
	if (vorodi==0){
		cout<<"e";
	}
	else{
		int j=0;
		while (j<tool){
			if (araye[vorodi][j]=='1'){
				cout<<araye_asli[j]<<" ";
			}
			j++;
		}
	}
		cout<<endl;
		i++;	}
}
if (tabe==1){

getchar();
while(q--){
cin>>x;
vector<int>vec;
if(x==101){
cout<<"e\n";
}
else{
vec.push_back(x);
}
char c=getchar();
while(c==' '){
	cin>>x;
	vec.push_back(x);
	c=getchar();
}
int tedad=0;
string zero[tool];
for(int i=0;i<tool; i++){
	zero[i]="0";
}
int i=0;
while (i<vec.size()){
	int j=0;
	tedad++;
	while (j<tool){
			if (vec[i]==araye_asli[j]){
				zero[j]="1";
			}
			j++;
		}
		i++;
	}
	string zeroStr="";
	i=0;
	while (i<tool){
		zeroStr+=zero[i];
		i++;
	}
	i=0;
	while (i<n){
		if (zeroStr==araye[i]){
			cout<<i;
		}
		i++;
        }

cout<<'\n';
    }
    }


}
