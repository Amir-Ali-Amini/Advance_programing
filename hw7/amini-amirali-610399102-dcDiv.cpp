//dcDiv
//Fig : 
//use ?:
//date
//amiraliamini 610399102 UT-CS-99

//=================================================================================

#include <iostream>
#include <string>
#include<vector>
#include <iomanip>
#include<cstdlib>
using namespace std;


//----------------------------------------------------------------------------------

class tahgsim 
{
public:
    tahgsim (int n1 , int m1)
    {
        n=n1;m=m1;
        a=new char[n];
        b=new char[m];
    }
    void get()
    {
        cin>>a>>b;
        for (int i = 0 ; i< m ; i++)
        {
            bb*=10;
            bb+=int (b[i])-48;
        }
    }
    void creat()
    {
        for (int i=0 ; i< n ; i++)
        {
            anw*=10;
            nn*=10;
            nn+=int (a[i])-48;
            anw+=nn/bb;
            nn=nn%bb;

        }
        cout << anw;
    }


private:
    int m , n ;
    char *a , *b;
    int nn=0 , baghi=0 , anw = 0,bb =0;
};

int main ()
{
    int n , m ;
    cin >> n >> m ;
    tahgsim a (n , m );
    a.get();
    a.creat();
    return 0 ;

}