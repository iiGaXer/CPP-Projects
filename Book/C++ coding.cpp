#include <bits/stdc++.h>

using namespace std;

//? Basically, you can use a variable (with its value) in "[]" instead of declaring it, telling the-
//* computer how many elements are in this array.
void static_array() {
    int Array_length;
    cout << "A number between 1-5" << endl;
    cin >> Array_length;

    int Numbers [Array_length] = {100, 200, 300, 400, 500};
    for(int i=0; i < Array_length; i++) {
        cout << Numbers[i] << " "; 
    }

}

//? This basically tells how many letters are in a character-input.
//! "strlen()" is a copy function like "strcpy()".
//* "'\0'" Makes everything 0.
void character_reader() {
    char Numbers [3] = {'\0'};
    cin >> Numbers;

    cout << "The letters in this character was " << strlen(Numbers) << endl;

}

//? This basically makes 2 inputs, string inputs, and then makes a variable to combine those-
//* -string inputs to make a concatenated string, then, we use "length()" to determine-
//? -the length of the concatenated string.
void concantentaion_strings() {
    cout << "Hello Player!" << endl;    
    cout << "Enter and type a line of text:" << endl;
    cout << endl;
    
    string line_1;
    //* "getline()" get's the input of line 36's variable and read's it, basically giving-
    //* the value to it. (I think)
    getline(cin, line_1);

    cout << "Do the same process as the last text:" << endl;
    cout << endl;
    string text_2;
    //* "getline()" get's the input of line 43's variable and read's it, basically giving-
    //* the value to it. (I think)
    getline(cin, text_2);

    cout << "Here is the result of the concatenation/added sentences" << endl;
    cout << "-of the lines of text you put in:" << endl;
    cout << endl;

    string concatenation_line = line_1 + " " + text_2;
    cout << concatenation_line << endl;

    cout << "Length of concatenated string: " << concatenation_line.length() << endl;

}

//? Operators that are needed in variables that control loops where the value needs to be-
//* -incremented or decremented everytime the loop has been executed
//! These are that operators.
void postfix_operators() {
    //! Postfixed operators.
    int num = 101;
    int num_2 = num++;

    cout << "Before incremented: variable value = " << num - 1 << endl;
    cout << "Postfix incrementing variable value = " << num_2 << endl;
    cout << "Result of incrementing: value = " << num << endl;

    cout << endl;
    cout << endl;

    int number = 90;
    int number_2 = number--;

    cout << "Before decremented: variable value = " << number + 1 << endl;
    cout << "Postfix decremented variable value = " << number_2 << endl;
    cout << "Result of decremented: value = " << number << endl;

}
//! Note, there are also prefix operaters.

//? In this case, "switch()" function, enables you to check a particular expression, against countless
//* -other "what ifs" that are defined as: "case (whatever):"
//! They are well-suited to being used with enumerators.
void switch_case() {
    int num_1;
    cout << "Please enter a number between 1-3!" << endl;
    cin >> num_1;

    switch(num_1) {
        case 1:
            cout << "Your number value is defined as 1! 1 = True! Valid!" << endl;
            break;
        
        case 2:
            cout << "Your number value is defined as 2! 2 is a even number!" << endl;
            break;

        case 3:
            cout << "Your number value is defined as 3! 3 is a uneven number!" << endl;
            break;

        default:
            cout << "Your number is either: NaN, Na, or not in-between the number range!" << endl;
            cout << "Your number is therefore, Invalid! Please try again, later." << endl;

    }



}

//? This operator acts as a "if-else" operator
//! This is a IMPORTANT operator!
void if_else_operator() {
    cout << "Enter 2 numbers." << endl;
    int num_1;
    int num_2;
    cin >> num_1 >> num_2;

    int added = (num_1 > num_2)? num_1 : num_2;
    cout << "The greator of " << num_1 << " and " << num_2 << " is: " << added << endl;
    
}

//? This is a loop in which can repreat EVERYTHING from inside the "start:" all the way to the end
//* -(in which, you have to indent OUT OF to not do the "start" code). -You can also do "goto Start:"
//* -to restart the whole OPERATION!
//! Well suited for asking simulation game and other asking problems.
void goto_and_start_loop() {

    Start:
        int num_1, num_2 = 0;

        cout << "Enter 2 numbers of your choice." << endl;
        cin >> num_1;
        cin >> num_2;

        cout << num_1 << " x " << num_2 << " = " << num_1 * num_2 << endl;
        cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;

        cout << "Do you wish to perform another operation, (y/n)?" << endl;
        char yes = 'y';
        cin >> yes;

        if (yes == 'y') {
            goto Start;
        } else {
            cout << "Goodbye!" << endl;
        }
        
}

//? This is a loop in which, anything in the "do" loop, while keep doing until the condition in the
//* -"while" loop is false! 
//! Exactly like "while (condition)" for Python! Very useful! 
void do_while_loop() {
    char selection = 'q';

    do {
        int num_1, num_2 = 0;

        cout << "Enter 2 numbers of your choice." << endl;
        cin >> num_1;
        cin >> num_2;

        cout << num_1 << " x " << num_2 << " = " << num_1 * num_2 << endl;
        cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;

        cout << "Press/write q to exit(q)! To recalculate, press/type anything other that q(q)!" << endl;

        cin >> selection;


    } while (selection != 'q');

    cout << "Goodbye!" << endl;

} \



int main() {
    do_while_loop();
    return 0;
}