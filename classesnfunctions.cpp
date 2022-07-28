#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int len;
        int bre;
    public:
    Rectangle(int l, int b)
    {
        len=l;
        bre=b;
    }
    int area()
    {
        return len*bre;
    }
    int peri()
    {
        return (2*len+2*bre);
    }
};

int main()
{
    int l,b;
    cout<<"\nEnter the length and breadth of the rectangle: ";
    cin>>l>>b;
    Rectangle r(l,b);
    cout<<"\nThe area and perimeter of the rectangle is: "<<r.area()<<", "<<r.peri()<<".";
    return 0;
}
