#include <iostream>
//#include <iostream.h>
#include <string>
#include<vector>
#include<string.h>
using namespace std;



// amirali amini -- 610399102
// stringPal

int main(){
    int n ;
    cin >> n ;
    char str[n];
    cin >> str;
    int maxx=-1 , minn =0 , start = 0;
    for (int i =0 ; i< n ; i++){

        if ( !( ( ( str[i]>='a' && str[i]<='z' )  || ( str[i]>='A' && str[i]<='Z' )  || ( str[i]<='9' && str[i]>='0' ) ) || str[i]=='_')  ) {
           // cout << str[i-1] << " != " << str[i];

            start = i+1;
            if (str[start]>='0' && str [ start ] <= '9') start++;
        }
    if ( maxx - minn < i - start  ) {
                minn = start ;
                maxx = i;
    }
    }
    if (start == 0 ) {
        maxx = n-1;
        while (str[minn]<='9'&&str[minn]>='0')minn++;
    }
    for (int i= minn ; i<= maxx ; i++){
            if (i==minn && (str[i]<='9'&&str[i]>='0'))i++;
        cout << str[i];
    }
    return 0;
}
