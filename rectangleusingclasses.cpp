//Program to define member f'n of a class outside a class
#include<iostream>
using namespace std;

template <class T>
class Rectangle
{
    T length;
    T breadth;
    public:
    Rectangle() {length=breadth=1;}
    Rectangle(T l, T b){ length=l; breadth=b;}
    T area();
    T perimeter();
    void manipulators(T l, T b);
    ~Rectangle();
};

template <class T>
T Rectangle <T>::area()
{
    return length*breadth;
}
template <class T>
T Rectangle <T> ::perimeter()
{
    return 2*(length+breadth);
}
template <class T>
void Rectangle<T>::manipulators(T l, T b)
{
    length=l;
    breadth=b;
}
template <class T>
Rectangle<T>::~Rectangle()
{
    cout<<"\nDestructor is called.";
}

int main()
{
    int n,l,b;
    cout<<"\nEnter the number: ";
    cin>>n;
    Rectangle <float>r[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n\n-----#"<<i+1<<"-----";
        cout<<"\nEnter the length: ";
        cin>>l;
        cout<<"\nEnter the breadth: ";
        cin>>b;
        r[i].manipulators(l,b);
        cout<<"\nThe area is: "<<r[i].area();
        cout<<"\nThe perimeter is: "<<r[i].perimeter();
    }
return 0;
}
