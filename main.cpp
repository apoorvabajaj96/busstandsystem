#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

static int p = 0 ;
class a
{
    char name[15], busn[10] ,arr[6] , dep[16] , origin[16] ,destination[16] ;
    char seat[8][4][10]; char passname[15] ;
    char bus[10];

    public :
    void record();
    void reservation();
    void show();
    void avail();
    void empty();
    void position(int i);
};

void a::record()
{
    cout << "Enter bus no.  " ;
    cin >> bus[p].busn ;
    cout << "Enter driver's name:  " ;
    cin >> bus[p].name ;
    cout << "Arrival time:  ";
    cin >> bus[p].arr ;
    cout << "Departure time: ";
    cin >> bus[p].dep ;
    cout << "Enter origin :  ";
    cin >> bus[p].origin ;
    cout << "Enter destination:  ";
    cin >> bus[p].destination ;
    p++  ;
}
void a::reservation()
{
    char number;
    top :
    cout << "Enter bus no.  " ;
    cin >> number ;

    int n ;
    for(n = 1 ; n <= p ; n++)
    {
        if((bus[n].busn , number )== 0)
            break ;
    }

    while(n<=p)
    {
        int seat ;
    cout << "Enter seat no.  " ;
    cin >> seat ;
    if (seat>32)
    {
        cout<< "there are 32 seats in this bus.";
    }
    else
    {
        if (strcmp(busn.[seat/4][(seat%4)-1], "EMPTY")==0)
        {
            cout<< "Enter passenger's name" ;
            cin >> busn.[seat/4][(seat%4)-1];
        }
        else
            cout<< "this seat is already reserved. \n";
    }
    }
    cout << "Enter correct bus number" ;
    goto top ;

    a() ;
}

void a::empty()
{   int i, j ;
    for (i=1 ; i<9 ;i++)
    {
        for (j=1 ; j<5 ; j++)
        {
            strcpy(bus[p].seat[i][j] = "EMPTY");
        }
    }
}


void a::show()
{
    int number, n ;
    cout<< "Enter bus no" ;
    cin >> number;
    for (n = 1 ; n <= p ; n++)
    {
        if(strcmp(bus[n].busn , number)==0)
            break;
    }

    while(n<=p)
    {
        cout<<"********************************************************************************";
        cout<< "Bus No.:" << bus[n].busn ;
        cout << "Driver :" << bus[n].name ;
        cout << "Arrival time"<< bus[n].arr ;
        cout << "Departure time:"<< bus[n].dep ;
        cout << "From :" << bus[n].origin ;
        cout << "To :" << bus[n].destination ;
        cout<<"********************************************************************************";

        bus[0].position(n) ;
        int i , j;
        int a = 1 ;
        for(i=1 ; i<=8 ; i++)
        {
            for (j=1 ; j<=4 ; j++)
                {
                    a++ ;
                    if (strcmp(bus[n].seat[i][j] , "EMPTY") !=0 )
                    cout << "\n The seat" (a-1)" is reserved for" bus[n].seat[i][j] ;
                }
        }
        break ;
    }
    if (n>p)
    {
        cout<< "Enter correct bus  no.";
       // a.show();
    }
}


void a::position(int n)
{
    int s=0, p=0 , i, j ;
    for (i = 1 ; i<9 ; i++)
    {
        cout<< "\n" ;
        for(j= 1 ; j<5 ; j++)
        {
           if (strcmp(bus[n].[i][j], "EMPTY")== 0)
           {
               cout.width(5);
               cout.fill(' ');
               cout<<s<<"." ;
               cout.width(10);
               cout.fill(' ');
               cout<< bus[n].seat[i][j] ;
               p++;
           }
           else
           {
               cout.width(5);
               cout.fill(' ');
               cout<<s<<"." ;
               cout.width(10);
               cout.fill(' ');
               cout<< bus[n].seat[i][j] ;
           }
        }
    }
cout << "There are"<<p<<"seats available in bus no."<< bus[n].busn;

}


void a::avail()
{
    int i, n ;
    for (i=0 ; n<=p ; n++)
    {
        cout<< "************************************************************************";
        cout<< "Bus no.: \t" << bus[n].busn ;
        cout<< "\n Driver: \t"<< bus[n].name ;
        cout<< "\n Arrival time: \t"<< bus[n].arr ;
        cout<< "\n Departure time: \t"<< bus[n].dep ;
        cout<< "\n From: \t"<< bus[n].origin ;
        cout<< "\n To: \t"<< bus[n].destination << "/n" ;
    }
}

int main()
{
    system("cls");
    int y ; int bus[10];
    while(1)
    {
    cout << "\t\t\t Welcome to Bus Reservation Portal \n";
    cout << "\t\t  1. Enter Record : \n";
    cout << "\t\t  2. Reservation :\n " ;
    cout << "\t\t  3. Show : \n " ;
    cout << "\t\t  4. Buses Available : \n" ;
    cout << "\t\t  5. Exit : \n " ;
    cout << "Enter your Choice   " ;
    cin >> y ;
    switch(y)
    {
        case(1):
        bus[p].record();
        break;
        case(2):
        bus[p].reservation();
        break;
        case(3):
        bus[0].show();
        break;
        case(4):
        bus[0].avail();
        break;
        case(5):
        exit();
        break;
    }
    }
    return 0;
}
