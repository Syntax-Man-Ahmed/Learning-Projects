#include <iostream>
using namespace std;
int main ()
{

    int p1;
    cout << "Enter Num: \n" 
    << "[1] Rock \n"
    << "[2] Paper \n"
    << "[3] scissors \n";

    cin >> p1;

    srand ( time ( 0 ) );

    int pc = ( rand () % 3 ) + 1;

    switch ( pc )
    {
    case 1 :
        cout << "Computer Choses Rock \n";
        break;

    case 2 : 
        cout << "Computer Choses Paper \n";
        break;
    case 3 :
        cout << "Computer Choses Scissors \n";
        break;
    }


    if ( p1 == 1 & pc == 1 ) { cout << "Draw";}
    else if ( p1 == 1 & pc == 2 ) { cout << "Computer Wins";}
    else if ( p1 == 1 & pc == 3 ) { cout << "Player 1 Wins";}

    else if ( p1 == 2 & pc == 1 ) { cout << "Player 1 Wins";}
    else if ( p1 == 2 & pc == 2 ) { cout << "Draw";}
    else if ( p1 == 2 & pc == 3 ) { cout << "Computer Wins";}

    else if ( p1 == 3 & pc == 1 ) { cout << "Computer Wins";}
    else if ( p1 == 3 & pc == 2 ) { cout << "Player 1 Wins";}
    else if ( p1 == 3 & pc == 3 ) { cout << "Draw";}
     
}