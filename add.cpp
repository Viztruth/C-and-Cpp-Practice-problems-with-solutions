#include<iostream>
using namespace std;

//Creating a template function
template<typename T>
T add(T x, T y)
{
    return x+y;
}

int main()
{
    int n;
    int a,b,sum1;
    float c,d,sum2;
    double e,f,sum3;
    cout<<"\nEnter the datatype -\n1. for Integer\n2. for Floating value\n3. for Double\n4. for Exit\n:- ";
    cin>>n;
    switch(n)
    {
        case 1:{
                cout<<"\nEnter the two numbers: ";
                cin>>a>>b;
                //Here the datatype of the template class is assigned as int
                sum1=add<int>(a,b);
                cout<<"\nTheir sum is: "<<sum1;
                break;
                }
    case 2:{
            cout<<"\nEnter the two numbers: ";
            cin>>c>>d;
            //Here the datatype of the template class is assigned as float
            sum2=add<float>(c,d);
            cout<<"\nTheir sum is: "<<sum2;
            break;
            }
        case 3:
        {
            cout<<"\nEnter the two characters: ";
            cin>>e>>f;
            //Here the datatype of the template class is assigned as double
            sum3=add<double>(e,f);
            cout<<"\nTheir sum is: "<<sum3;
            break;
        }
        case 4: 
        {
        exit(0);
        break;
        }
        default: 
        {
        cout<<"Invalid Input";
        exit(0);
        }
    } 
    return 0;
}
