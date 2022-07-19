//Stone Paper Scissors game using C++ by Vishruth Codes
#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

int computerchooses()
{
    //Function to randomly generate and return nos. between 1 and 3 based on which either stone(if 1's generated) or paper(if 2's generated) else scissor is selected by the computer
    int res;
    srand(time(0));
    res=1+(rand()%3);
    //cout<<"\nThe r no is :"<<res;
    return res;
}

int results(int n, int cn)
{
    //n - User's choice
    //cn - Computer's choice
    //0 - If player lost
    //1 - If player won
    //2 - The game is a tie
    if(n==1 && cn==2)
    {
        return 0;
    }
    else if(n==1 && cn==3)
    {
        return 1;
    }
    else if(n==1 && cn==1)
    {
        return 2;
    }
    else if(n==2 && cn==3)
    {
        return 0;
    }
    else if(n==2 && cn==1)
    {
        return 1;
    }
    else if(n==2 && cn==2)
    {
        return 2;
    }
    else if(n==3 && cn==1)
    {
        return 0;
    }
    else if(n==3 && cn==2)
    {
        return 1;
    }
    else //if(n==3 && cn==3)
    {
        return 2;
    }
}

//The manager
int main()
{
    int n,i=0,cn,res;
    int maxpts=0;
    char name[15];
    cout<<"\nEnter your Name: ";
    cin>>name;
    cout<<"\nYou are about to play Stone-Paper-Scissor against computer.";
    cout<<"\nEnter the maximum points:- ";
    cin>>maxpts;
    int plrpts=0, cspts=0;
    while(plrpts<=maxpts && cspts<=maxpts)
    {
    i++;
    cout<<"\n\n|-----MATCH "<<i<<"-----|";
    //Player: User
    cout<<"\nEnter -\n1. for Stone\n2. for Paper\n3. for Scissors\n:- ";
    //This is the basis for the choices of both computer and user.
    cin>>n;
    if(n==1)
    {
        cout<<"\nPlayer "<<name<<" chose Stone.";
    }
    else if(n==2)
    {
        cout<<"\nPlayer "<<name<<" chose Paper.";
    }
    else //if(n==3)
    {
        cout<<"\nPlayer "<<name<<" chose Scissor.";
    }
    //Player: Computer
    cn=computerchooses();
    if(cn==1)
    {
        cout<<"\nComputer chooses Stone.";
    }
    else if(cn==2)
    {
        cout<<"\nComputer chooses Paper.";
    }
    else //if(cn==3)
    {
        cout<<"\nComputer chooses Scissor.";
    }
    //Deciding the winner
    res=results(n,cn);
    if(res==0)
    {
        cout<<"\nComputer won!";
        cspts=cspts+1;
        cout<<"\n\nThe points earned by - \n"<<name<<" - "<<plrpts<<"\nComputer - "<<cspts;
    }
    else if(res==1)
    {
        cout<<"\nPlayer "<<name<<" won!";
        plrpts=plrpts+1;
        cout<<"\n\nThe points earned by - \n"<<name<<" - "<<plrpts<<"\nComputer - "<<cspts;
    }
    else //(res==2)
    {
        cout<<"\nThe match was a tie!";
        cout<<"\n\nThe points earned by - \n"<<name<<" - "<<plrpts<<"\nComputer - "<<cspts;
    }
}

//Final winner declaration
if(cspts>=plrpts)
{
    cout<<"\nThe result is - COMPUTER WINS THE GAME. Better luck next time "<<name<<".";
}
else{
    cout<<"\nThe result is - Congratulations! "<<name<<" WINS THE GAME";
}
}