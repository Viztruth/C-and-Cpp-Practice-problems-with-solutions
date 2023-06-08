//Program to delete duplicate from the array by Vishruth Codes
#include <iostream>
using namespace std;

class Arrays
{
public:
    int n;
    // hardcoding the size of array. 'n' is useless
    int arr[5];

    // calling constructor to initialize all elements to zero
    Arrays()
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
    }

    // member function to insert elements into the array
    void insertion()
    {
        cout << "\nInsert the elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    // sorting via bubble sort
    void bubblesort()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // member function to remove the duplicates
    void removedupli()
    {
        bubblesort();
        int now = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != now)
            {
                now = arr[i];
            }
            else
            {
                for (int j = i; j < n - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                n--;
                i--;
            }
        }
    }

    // member function to display the contents of the array
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ", ";
        }
    }
};

int main()
{
    Arrays a;
    cout << "\nEnter the size: ";
    cin >> a.n;
    a.insertion();
    cout << "\nThe array is: ";
    a.display();
    a.removedupli();
    cout << "\nthe array after removing the duplicates: ";
    a.display();
    return 0;
}
