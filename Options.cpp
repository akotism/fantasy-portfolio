// Assignment: Special Programming Assignment – ePortfolio
//Course: COMP B12
//Instructor: Richard Miles
//Date submitted: 2023/03/19
//Author1: Mitchell, Destiny
//Author2: Sotelo, Verenize
//Author3: Tran, Christina

#include <iostream>
#include <string>

using namespace std;

#include "Options.h"
#include "User.h"

Options::Options(){

}

//full time or part time?
void Options::fullOrPartOptions() {

    cout << " 1. Full time"<<endl;
    cout << " 2. Part time" <<endl;
    cout << endl;
}

//are they interested in getting a scholarship?
void Options::scholarshipOptions(){

    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;
}

//do they work?
void Options::workOptions(){

    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;
}

//are they interested in work experience?
void Options::workExpOptions(){

    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;


}

//checks if input is an integer
bool Options::checkInteger(string choices){
    bool isNeg = false;
    int itr = 0;
    if(choices.size() == 0)
        return false;
    if(choices[0] == '-')
    {
        isNeg = true;
        itr=1;
    }

    for(int i = itr;i < choices.size(); i++)
    {
        if(!isdigit(choices[i]))
            return false;
    }
    return true;
}

//will they pursue graduate school?
void Options::graduateOptions() {

    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;
}

//outputs menu for fulltime student
void Options::menuFunctionFullTime() {
    cout << endl;
    cout << "    -Your Cybersecurity Guide-    "<<endl;
    cout << "     ______________________      "<<endl;
    cout << "   1. Contacts for Financial Aid       " <<endl;
    cout << "     2. Your Course Schedule            " <<endl;
    cout << "  3. Where to Find Scholarships" <<endl;
    cout << " 4. Where to Find Work Experience     " <<endl;
    cout << "5. Estimated net income for Full Time" <<endl;
    cout << "      6. Goodbye Message" <<endl;
    cout <<endl;
}

//exit key for full time student
void Options::exitNumberFull() {
    string choices;
    cout << " " << endl;
    cout << "Enter -1 to return to the menu: " << endl;
    cin >> choices;

    bool isInt = checkInteger(choices); //checks if input is a integer

    //makes user input a integer
    if (isInt) {
        int choice = stoi(choices); //changes string to integer

        //if user inputs numbers other than the key '-1', loop until they do
        while (choice != -1) {
            cout << " " << endl;
            cout << "That is not a valid number. Please try again." << endl;
            cout << "Enter -1 to return to the menu: " << endl;
            cin.clear();
            cin.ignore(256,'\n');
            cin >> choice;
        }
        // will return them to menu
        if (choice == -1) {
            menuFunctionFullTime();
        }
    }
    else {
        //if the input is not an integer
        cout << "That is not a valid number. Please try again." << endl;
        exitNumberFull();
    }
}

//switch case for full time student
void Options::SwitchingFullTime() {
    string choices;
    User user = User();
    do {

        //prompts the user to choose a menu choice
        cout << "Input a number from the choices above: " << endl;

        //user inputs a choice number
        cin >> choices;

        // checks to see if input is an integer
        bool isInt = checkInteger(choices);

        cout << " " << endl;

        //loops until integer is input
        if (isInt) {
            int choice = stoi(choices); // changes string to integer

            //outputs menu information depending on user input
            switch (choice) {
                case 1:
                    user.financialAidContacts();
                    exitNumberFull();
                    break;
                case 2:
                    user.fullTimeSchedule();
                    exitNumberFull();
                    break;
                case 3:
                    user.scholarshipInfo();
                    exitNumberFull();
                    break;
                case 4:
                    user.workExpInfo();
                    exitNumberFull();
                    break;
                case 5:
                    user.projectedIncomeFullTime();
                    exitNumberFull();
                    break;
                case 6:
                    cout << "I wish you the best of luck pursuing Cybersecurity!";
                    break;
                default:
                    cout << "That is not a valid number. Please try again.";
                    menuFunctionFullTime();
            }
        }
        else {
            cout << "That is not a valid number. Please try again." << endl;
            menuFunctionFullTime();
        }


    }while (choices != "6");
}

//outputs menu for part time student
void Options::menuFunctionPartTime() {
    cout << endl;
    cout << "    -Your Cybersecurity Guide-    "<<endl;
    cout << "     ______________________      "<<endl;
    cout << "   1. Contacts for Financial Aid       " <<endl;
    cout << "     2. Your Course Schedule            " <<endl;
    cout << "  3. Where to Find Scholarships" <<endl;
    cout << " 4. Where to Find Work Experience     " <<endl;
    cout << "5. Estimated net income for Part Time" <<endl;
    cout << "      6. Goodbye Message" <<endl;
    cout <<endl;
}

//exit key for part time student
void Options::exitNumberPart() {
    string choices;
    cout << " " << endl;
    cout << "Enter -1 to return to the menu: " << endl;
    cin >> choices;

    bool isInt = checkInteger(choices); //checks if input is a integer

    //makes user input a integer
    if (isInt) {
        int choice = stoi(choices); //changes string to integer

        //if user inputs numbers other than the key '-1', loop until they do
        while (choice != -1) {
            cout << " " << endl;
            cout << "That is not a valid number. Please try again." << endl;
            cout << "Enter -1 to return to the menu: " << endl;
            cin.clear();
            cin.ignore(256,'\n');
            cin >> choice;
        }
        // will return them to menu
        if (choice == -1) {
            menuFunctionPartTime();
        }
    }
    else {
        //if the input is not an integer
        cout << "That is not a valid number. Please try again." << endl;
        exitNumberPart();
    }
}

//switch case for part time student
void Options::SwitchingPartTime() {
    string choices;
    User user = User();
    do {

        //prompts the user to choose a menu choice
        cout << "Input a number from the choices above: " << endl;

        //user inputs a choice number
        cin >> choices;

        // checks to see if input is an integer
        bool isInt = checkInteger(choices);

        cout << " " << endl;

        //loops until integer is input
        if (isInt) {
            int choice = stoi(choices); // changes string to integer

            //outputs menu information depending on user input
            switch (choice) {
                case 1:
                    user.financialAidContacts();
                    exitNumberPart();
                    break;
                case 2:
                    user.partTimeSchedule();
                    exitNumberPart();
                    break;
                case 3:
                    user.scholarshipInfo();
                    exitNumberPart();
                    break;
                case 4:
                    user.workExpInfo();
                    exitNumberPart();
                    break;
                case 5:
                    user.projectedIncomePartTime();
                    exitNumberPart();
                    break;
                case 6:
                    cout << "I wish you the best of luck pursuing Cybersecurity!";
                    break;
                default:
                    cout << "That is not a valid number. Please try again.";
                    menuFunctionPartTime();
            }
        }
        else {
            cout << "That is not a valid number. Please try again." << endl;
            menuFunctionPartTime();
        }


    }while (choices != "6");
}