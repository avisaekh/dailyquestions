#include <iostream>

using namespace std;
//WAP to find sum of elements in a given array
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},sum=0;

    for(int x=0;x<9;x++)
    {
      sum+=a[x];
    }
    cout<<"sum of array :"<<sum<<endl;
    return 0;
}
