//partialSort
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
class srt
{
    public:
    srt(int a)
    {
        n=a;
        arr=new int [n];
    }

    void getArr()
    {
        for (int i =0 ; i < n ; i++)
            cin >> arr[i];
    }

    void creat()
    {
        for (int i =1 ; i< n ; i++)
        {
            if (arr[i]<arr[0])
                cout<<arr[i]<<" ";
        }
        cout<<arr[0]<<" ";
        for (int i =1 ; i<n ; i++)
        {
            if (arr[i]>=arr[0])
                cout<< arr[i]<<" ";
        }
    }
    private:
    int n ;
    int *arr;

};

int main ()
{
    int n ; 
    cin >> n ; 
    srt a (n);
    a.getArr();
    a.creat();
}