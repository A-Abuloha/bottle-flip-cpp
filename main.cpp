#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

bool flipBottle(){ 
    int random_number = rand() % (2 - 1 + 1) + 1; 
    if (random_number == 1){ 
        return true; 
    } 
    else{ 
        return false; 
    } 
} 

void displayBoard(int flagPos){ 
    cout << "[ P1 ] ----"; 
    for (int i = -3; i <= 3; i++){ 
        if (i == flagPos){ 
            cout << "[ X ]"; 
        } 
        else{ 
            cout << "[   ]"; 
        } 
    } 
    cout << "---- [ P2 ]" << endl; 
} 

void clearScreen(){ 
    system("cls"); 
} 

int main() 
{ 
    srand(time(NULL)); 
     
    int flagPos = 0, playerTurn = 1; 
     
    while(flagPos > -3 && flagPos < 3){ 
        clearScreen(); 
         
        displayBoard(flagPos); 
        if (playerTurn == 1){ 
            cout << "Player 1's turn! Press ENTER to flip the bottle...\n"; 
            cin.get(); 
            clearScreen(); 
            bool Result = flipBottle(); 
            if (Result == true){ 
                flagPos--; 
                displayBoard(flagPos); 
                cout << "SUCCESS! The flag moves to the left!\n"; 
                playerTurn++; 
            } 
            else{ 
                displayBoard(flagPos); // ⭐ Added so P1 sees the board on a miss!
                cout << "MISSED! Better luck next time...\n"; 
                playerTurn++; 
            } 
        } 
        else{ 
            cout << "Player 2's turn! Press Enter to flip the bottle...\n"; 
            cin.get(); 
            clearScreen(); 
            bool Result2 = flipBottle(); 
            if (Result2 == true){ 
                flagPos++; 
                displayBoard(flagPos); 
                cout << "SUCCESS! The flag moves to the Right!\n"; 
                playerTurn--; 
            } 
            else{ 
                displayBoard(flagPos); // ⭐ Added so P2 sees the board on a miss!
                cout << "MISSED! Better luck next time...\n"; 
                playerTurn--; 
            } 
        } 
        cout << "\nPress ENTER to pass the turn..."; 
        cin.get(); 
         
    } 
    
    clearScreen(); // One final clear so the winning announcement looks perfect!
    if (flagPos == -3){ 
        cout << "🎉 PLAYER 1 WINS THE GAME! 🎉\n"; 
    } 
    else{ 
        cout << "🎉 PLAYER 2 WINS THE GAME! 🎉\n"; 
    } 
     
    return 0; 
}