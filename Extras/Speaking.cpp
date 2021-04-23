#include <bits/stdc++.h>

using namespace std;

int main() {
    string text_input;
    // string array[11] = {"", "", "", "", "", "", "", "", "", "", ""};
    string end = "TTYL" ;
    for(string i= ""; i < end; i++){
        cin >> text_input;
    }
    if (text_input == "CU") {
        cout << "see you" << endl;
    } else if (text_input ==  ":-)") {
        cout << "I'm happy" << endl;

    } else if (text_input ==  ":-(") {
        cout << "I'm unhappy" << endl;
        
    } else if (text_input ==  ";-)") {
        cout << "wink" << endl;

    } else if (text_input ==  ":-P") {
        cout << "stick out my tongue" << endl;

    } else if (text_input ==  "(~.~)") {
        cout << "sleepy" << endl;
    
    } else if (text_input ==  "TA") {
        cout << "totally awsome" << endl;
    
    } else if (text_input ==  "CCC") {
        cout << "Canadian Computing Competition" << endl;

    } else if (text_input ==  "CUZ") {
        cout << "because" << endl;

    } else if (text_input ==  "TY") {
        cout << "thank-you" << endl;

    } else if (text_input ==  "YW") {
        cout << "you're welcome" << endl;

    } else if (text_input ==  "TTYL") {
        cout << "talk to you later" << endl;
        exit(0);

    }

    return 0;
}