#include <iostream>
#include<ctime>
#include<chrono>
using namespace std;
using namespace std::chrono;





//amiraliamini610399102
//comsort





void merge(long long arr[], long long l, long long m, long long r)
{
  long long n1 = m - l + 1;
  long long n2 = r - m;

  long long L[n1], R[n2];
  for (long long i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (long long j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  long long i = 0;

  long long j = 0;

  long long k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    }
    else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(long long arr[],long long l,long long r){
  if(l>=r){
    return;
  }
  long long m =l+ (r-l)/2;
  mergeSort(arr,l,m);
  mergeSort(arr,m+1,r);
  merge(arr,l,m,r);
}

void printArray(long long A[], long long size)
{
  for (long long i = 0; i < size; i++)
    cout << A[i] << " ";
}

//=============================================================
//=============================================================



void insertionSort(long long arr[], long long n)
{
  long long i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;


    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}


void printArray2(long long arr[], long long n)
{
  long long i;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}




int main()
{
  long long n = 100000;
  long long arr[n] , barr[n]  ;
  srand(time(0));
    for(long long i=0 ; i<n ; i++){
            long long c =(rand()%2000)-1000;
            arr[i]=c;
            barr[i]=c;}
  long long arr_size = sizeof(arr) / sizeof(arr[0]);
  long long barr_size = sizeof(barr) / sizeof(arr[0]);

  printArray(arr, arr_size);
  cout << endl;
  void (*p)(long long[],long long , long long);
  auto s = high_resolution_clock::now();
  p=mergeSort;
  //mergeSort(arr, 0, arr_size - 1);
  p(arr, 0, arr_size - 1);
  auto e = high_resolution_clock::now();
   auto dif = duration_cast<microseconds>(e - s);
    cout << "Time merge sort : " << dif.count() << " microseconds" << endl;
  printArray(arr, arr_size);


    cout << endl;
    void (*q)(long long[],long long);
    auto s2 = high_resolution_clock::now();
  q=insertionSort;
    q(barr, barr_size);
    auto e2 = high_resolution_clock::now();
   auto dif2 = duration_cast<microseconds>(e2 - s2);
    cout << "Time insertion sort : " << dif2.count() << " microseconds" << endl;
    printArray2(barr, barr_size);



  return 0;
}
