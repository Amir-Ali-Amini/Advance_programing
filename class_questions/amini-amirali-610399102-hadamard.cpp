//P name
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

class mat
{
public :
mat(int n1 )
{
    n = n1 ; 
    matt=new int *[n];
    for (int i =0 ; i < n ; i++)
    {
        matt[i] = new int [n];
    }
    matt[0][0]=1;
}


void creat (int w)
{
    if (w>2)
    {
        creat(w/2);
    }
    for (int i = 0 ; i<w ;i++)
    {
        for (int j = 0 ; j<w ;j++)
        {
            if (i>=w/2 && j >= w/2)
            {
                if (matt[i%(w/2)][j%(w/2)] == 1 ) matt [ i  ][ j ]=0;
                else matt[i][j] = 1; 
            }
            else 
            {
                matt[i][j] = matt[i%(w/2)][j%(w/2)];
            }
        }
    }
}

void print ()
{
    for (int i =0 ; i < n ; i++)
    {
        for (int j = 0 ;  j < n ; j++)
        {
            cout << matt[i][j] << " " ;
        }
        cout << endl;
    }
}
private :
    int n ;
    int  **matt ;
};

int main ()
{
    int n ;  
    cin >> n ; 
    if (n==1)cout << 1 ;
    else 
    {
        mat a ( n ) ; 
        a.creat (n) ; 
        a.print () ;
    }
    return 0 ; 
}