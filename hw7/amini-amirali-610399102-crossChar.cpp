//crossChar
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
class crossChar
{
public:
    crossChar(int n1 , int m1)
    {
        n=n1;m=m1;
        nn=new string [n];
        mm=new string [ m ] ;
    }

    void get()
    {
        getchar();
        for (int i =0 ; i< n ; i++)
        {
            //cout<<"input n : \n";
            getline (cin, nn[i]);
        }
        for (int i=0 ; i < m ; i++)
        {
            //cout<<"input m : \n";
            getline (cin, mm[i]);
        }
    }

    bool chek(string a)
    {
        //cout<<"\n chek \n";
        int arr[n],sum=0;
        for (char x : "0"+a )
        {
            for (int j = 0 ; j < n ; j++)
            {
                if (x=='0')arr[j]=0;
                else
                {
                    //for (int j = 0 ; j< n ; j++)
                   // {
                    if (arr[j]==0)
                    {
                        if (nn[j][0]==x)
                        {
                            arr[j]=++sum;
                        }
                    }
                   // }
                }
            }
        }
        if (sum==n)
        {
            int count=1;
            while (count <=n)
            {
                for (int i =0 ; i< n ; i++)
                {
                    if (arr[i]==count)
                    {
                        if (count !=1)
                            cout << endl;
                        cout<<nn[i];
                        count ++;
                    }
                }
            }
        //cout << "\ntrue" <<endl;
        return true ;
        }  
    else 
        return false;
    }


    void creat(int i =0 )
    {
        //cout<<"\n creat \n";
        if (i<m)
        {
            if (chek(mm[i])==true )creat(m);
            else creat(i+1);
        }
    }
private:
    int n ,  m ;
    string *nn , *mm  ; 
};


int main ()
{
    int n , m ;
    cin >> n>>m ; 
    crossChar a (n , m );
    a.get();
    a.creat();
}