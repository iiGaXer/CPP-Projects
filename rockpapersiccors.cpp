#include <bits/stdc++.h>

using namespace std;

int main() {

int computer = rand() % 3 + 1;

int user = 0;
  
  //Creating strings to avoid repetition
  string roc = "1) Rock\n";
  string pap = "2) Paper\n";
  string sci = "3) Scissors\n";
  

cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";

cout << roc;
cout << pap;
cout << sci;

cout << "Choose: ";
cin >> user;
    
  
cout << "\nYou  choose ";
  
  //Displaying user choice
  switch(user){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }
  
  //Displaying computer choice
cout << "Comp choose ";
    switch(computer){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }
  
  
  //Win Lose Draw Logic
  if(user == computer){
    cout << "Draw Game\n";
  }
  else if(user == 1 && computer == 2){
    cout << "You Lose =)\n";
  }
  else if(user == 3 && computer == 1){
    cout << "You Lose =)\n";
  }
  else if(user == 2 && computer == 1){
    cout << "You Lose =)\n";
  }
  else{
    cout << "Computer Wins!\n";
  }
 // do {
 //   cout << "Enter menu choice " << endl;
 //   cout << "More" << endl << "Quit" << endl;
 //   cin >> response;
//    cout << "You input: " << response << endl;  

 // } while (response !- "Quit");
 return 0; 
}
    