//q4
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
class a
{
public : 
    a (int n1 , int k1)
    {
        n=n1 ; k=k1 ; 
        arr=new int [n];
    }
    void get() 
    {
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ; 
        }
    }

    void find () 
    {
        for(int i =0 ; i< n ; i++)
        {
            int sum = 0 ; 
            for (int j = i ; j< n ; j++)
            {
                sum += arr [j] ; 
                if (chek (sum )==true ) 
                    ans ++ ; 
            }
        }
        cout << ans ; 
    }

    bool chek ( int q )
    {
        if (k==1)
        {
            if (q==1)
                return true ;
            else return false ;
        }
        while (q>0)
        {
            //cout <<q<< ".\n";
            if (q==1)
                return true ;
            if (q%k!=0)
                return false ;
            q=q/k ; 
        }
        return false ;
    }
    private :
    int n , k , *arr  , ans=0; 
};

int main () 
{
    int n , k ;
    cin >> n>> k ;
    a b( n , k );
    b.get ();b.find() ; 

    return 0 ; 
}