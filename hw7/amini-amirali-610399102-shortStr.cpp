//shortStr
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

class sub
{
public : 
    sub (int n1)
    {
        n=n1;
        str=new string [n];
    }
    void get()
    {
        getchar();
        for (int i =0 ; i< n ; i++)
        {
            getline(cin,str[i]);
            if (maxx<str[i].size())
                maxx=str[i].size();
            sum+=str[i].size();
        }
        //cout<<sum<<endl;
    }

    void creat()
    {
        for (int i =1 ; i< sum ; i++ )
            arr="0"+arr;
    }

    void find(int len=0)
    {
        if (len ==sum)
        {
            chk = true ;
            for ( int i =0 ; i< n ; i++)
            {
                if (chek(i)==false )chk=false ;
            }
        }
        else 
        {
                arr[len]='0';
                find(len+1);
            if (chk==false)
            {
                arr[len]='1';
                find(len+1);
            }
        }
        if (chk == true )
        {
            //print ();cout<< "  :  " ;
        }
            
    }

    bool chek (int t)
    {
        int sizee = str[t].size();
        for ( int i =0 ; i< sum-sizee ; i++)
        {
            for (int j = 0 ; j< sizee ; j++)
            {
                if (arr[i+j]!=str[t][j])
                    {
                        break;
                    }
                if (j==sizee-1)
                {
                    //cout<< j<<"  :  "<<str[t][j]<<endl;
                    //print() ;cout<<endl;
                    return true;
                }
            }
        }
        return false;
    }

    void print ()
    {
        int c = 0 ;
        for (int i =0 ; i< sum -1; i++)
        {
            if (arr[i]=='1')c=1;
            if (c==1)cout<<arr[i];
        }
    }
private:
int n , maxx=0 , sum =0;
string *str;string arr="0";
bool chk = false;
};

int main()
{
    int n ;
    cin >> n ;
    sub a (n);
    a.get();
    a.creat();
    
    a.find();
   a.print ();
}