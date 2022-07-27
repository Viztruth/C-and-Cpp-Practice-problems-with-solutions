//C++ Program to delete duplicate from the array
#include<iostream>
using namespace std;

//parameter 'n' is passed by reference
void rmvedupli(int a[], int &n)
{
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            //cout<<"\n"<<a[i]<<" matched with "<<a[j];
            for(int k=j;k<n-1;k++)
            {
                a[k]=a[k+1];
            }
            j--;
            n--;
        }
    }
   }

}

int main()
{
    int ar[10]={9,4,8,1,4,4,5,8,7,1};
    printf("\nThe array: 9,4,8,1,4,4,5,8,7,1");
    int n=sizeof(ar)/sizeof(ar[0]);
    rmvedupli(ar,n);
    cout<<"\nThe array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<", ";
    }
}
