//dpElv
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

class asan 
{
public:
    asan(int b1 , int n1)
    {
        n=n1;b=b1;
        w=new int [n];
        v=new int [n];
        vv=new int [b+1];x=new string[b+1];
        for (int i =1 ; i< b+1 ; i++)
            vv[i]=-1;
        vv[0]=0;
        x[0]="";
        for (int i = 0 ; i< n ; i++)
            x[0]+="0";
    }

    void get()
    {
        for (int i =0 ; i< n ; i++)
        {
            cin>> w[i] >> v[i];
        }
    }
    void creat()
    {
        for (int j = 0 ; j< n ; j++)
        {
            for ( int i =b ; i>=0 ; i--)
            {
                if (vv[i]!=-1)
                {
                    if (i+w[j]<=b && vv[i]+v[j]>vv[i+w[j]])
                    {
                        vv[i+w[j]]=vv[i]+v[j];
                        x[i+w[j]]=x[i];
                        x[i+w[j]][j]='1';
                    }
                }
            }
        }
    }
    void printtest () 
    {
        for (int i = 0 ; i< b+1 ; i++)
            if (vv[i]!=-1)
                cout <<i<<" : " <<vv[i]<<"  : " << x[i] << endl ;
    }
    void print () 
    {
        int max =0 ; 
        for (int i =1 ; i< b+1 ; i++)
        {
            if (vv[i]>vv[max])
                max=i;
        }
        cout<< x[max];
    }
private:
    int b, n ;
    int * w , *v ;
    string  *x;
    int *vv;
};


int main ()
{
    int b ,n ;
    cin >> b >> n ;
    asan a (b,n);
    a.get();
    a.creat();
    a.print();
    return 0;
}