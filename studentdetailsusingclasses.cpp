#include<iostream>
#include<string>
using namespace std;

class Student
{
    private: 
    int roll;
    string name;
    string dob;
    string addr;
    int mat;
    int phy;
    int chem;
    int cs;
    int eng;
    int hin;

    public:
    Student(int r, string n, string d, string a, int m, int p, int c, int cs, int e, int h)
    {
        roll=r;
        name=n;
        dob=d;
        addr=a;
        mat=m;
        phy=p;
        chem=c;
        cs=cs;
        eng=e;
        hin=h;
    }

    int total()
    {
        return (mat+phy+chem+cs+eng+hin);
    }

    float percentage()
    {
        int sum=total();
        float perc=sum/6;
        return perc;
    }
};

int main()
{
int n,r,m,p,c,cs,e,h;
string nam,d,ad;
cout<<"\nEnter the no. of students: ";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"\n\n\n-----#"<<i+1<<"-----";
    cout<<"\nEnter the Roll: ";
    cin>>r;
    cout<<"\nEnter the Name: ";
    getline(cin,nam);
    cout<<"\nEnter the Date of Birth (dd/mm/yyyy): ";
    getline(cin,d);
    cout<<"\nEnter the Address: ";
    getline(cin,ad);
    cout<<"\nEnter the marks in Maths, Physics, Chemistry, C.S, English Hindi: ";
    cin>>m>>p>>c>>cs>>e>>h;
    Student s[i](r,nam,d,ad,m,p,c,cs,e,h);
    cout<<"\n\nThe total marks scored by the student is: "<<s[i].total();
    cout<<"\nThe Percentage: "<<s[i].percentage();
}
}