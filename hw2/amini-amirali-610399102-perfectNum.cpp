#include <iostream>
//#include <string>
#include <vector>
using namespace std;



// amirali amini -- 610399102
// perfectNum
int f(int a){
    //cout <<'*';
    vector <int > elemnts (0);
    int sum =0;
    for (int i =1 ; i<a ; i++){
        if (a%i==0){
            elemnts.push_back(i);
            //cout <<i<<endl;
            sum+=i;

        }
    }
    //cout << elemnts.size()<<endl;
    if (sum==a ){
        for (int i=elemnts.size()-1 ; i>=0;i--){
            cout << elemnts[i]<<' ';
        }

        return 0;
        }
    cout <<"not";
    return 0;
}


int main(){
    int a,b;
    cin >> a ;
    if (a>1)f(a);
    else cout <<"not";
    return 0;
}

