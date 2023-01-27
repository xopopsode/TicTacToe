#include <iostream>
#include <string>
using namespace std;

// Struct
struct Playerinfo {
string firstName; 
string lastName; 
char piece; 
 };
// 
const int SIZE = 10; 

// Function Prototype 
void displayBoard(char[SIZE]); 
Playerinfo user(); 
bool Move(string,string,char,char);
char win();
// Main Function
int main() {
string p1,p2;
char piece;
char board[SIZE] = {'x', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
user(); 
displayBoard(board);
Move(p1,p2,piece,board);
}

// Display Board Function 
void displayBoard(char board[SIZE]) {

        // Defining Variables

cout << "*---*---*---*" << endl; 
cout << "| " << board[9] << " | " << board[8] << " | " << board[7] << " |" << endl; 
cout << "*---*---*---*" << endl;
cout << "| " << board[6] << " | " << board[5] << " | " << board[4] << " |" << endl; 
cout << "*---*---*---*" << endl;
cout << "| " << board[3] << " | " << board[2] << " | " << board[1] << " |" << endl; 
cout << "*---*---*---*" << endl;
}

// Player Function 
Playerinfo user() {

        // Defining Variables
Playerinfo p1,p2;  

        // Prompt User 
cout << "Player 1 enter your first and last name: "; 
cin >> p1.firstName >> p1.lastName;
cout << "Player 2 enter your first and last name: ";
cin >> p2.firstName >> p2.lastName;
cout<< p1.firstName <<" "<<p1.lastName<< endl;
cout << p2.firstName<<" "<<p2.lastName<< endl;
return p1,p2;
 }

// Move Function 
    bool Move(string p1,string p2,char piece, char board[SIZE]) {
        if(piece =='o'){
            cout<< p1<< "turn :";
        } else if(piece=='x'){
            cout<<p2<<'turn :';
        }

        int position = 0; 

        cout << "Choose a postion: "; 
        cin >> position; 

        board[position] = piece;
      
      if(piece=='x' && board[position] !='x' && board[position] !='o'){
          board[position]= 'x';
          piece = 'o';
      }else if(piece=='o' && board[position] !='o' && board[position] !='x'){
          board[position]= 'o';
          piece = 'x';      
      }else{
          cout << "Position taken, choose another square ";
          }
          displayBoard(board);
    }

    char win(){
        
    }