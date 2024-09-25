//q1
//Fig : 1
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

class minn
{
    public :
    minn(long int n1)
    {
        n = n1; 
        arr=new long int [n+1];
        for (long int i =0 ; i< n+1 ; i++)
            arr[i]=0;
    }

    void get () 
    {
         for (long int i = 0 ; i< n ; i++)
         {
             long int  input  ; 
             cin >> input ;
            if (input < n )
                arr[input ]++;
         }
    }
    void ans ()
    {
        for (long int i =0 ; i < n+1 ; i++ )
        {
            if (arr[i]==0)
            {
                cout << i ; 
                break ;
            }
        }
    }
    private : 
    long int n , * arr ; 
};

int main () 
{ 
    long int n ; 
    cin >> n ;
    minn a (n) ;
    a.get() ; 
    a.ans() ; 
    return  0 ;
}