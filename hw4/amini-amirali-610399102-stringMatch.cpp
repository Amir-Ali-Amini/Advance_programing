#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// stringMatch

int main(){
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    int t=0,q;
    c=b;
    for (int i =1 ; b.size()<=a.size();i++){

        if (t==1)break;
            t=1;

        for(int j =0 ; j<= a.size() - b.size(); j++){

            for (int h =0 ; h<b.size(); h++){
                if (a[j+h]!= b[h])break;
                if (h==b.size()-1){
                        t=0;
                         q=i;
                         //cout << b<<" " << j <<endl;}
            }
        }}
        b+=c;

}
    cout <<q;

    return 0;
}

