//  Game Stats
//  Demonstrates declaring and initializing variables
//

#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    
    short lives, aliensKilled;
    
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    
    double engineTemp = 6572.89;
    
    cout << "\nscore: " << score << endl;
    cout << "\ndistance: " << distance << endl;
    cout << "\nplayAgain: " << playAgain << endl;
    // skipping shieldsUp since you don't generally print Boolean values
    cout << "\nlives: " << lives << endl;
    cout << "\naliensKilled: " << aliensKilled << endl;
    cout << "\nengineTemp: " << engineTemp << endl;
    
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
   
    return 0;
}
