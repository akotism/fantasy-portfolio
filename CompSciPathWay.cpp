// Assignment: Special Programming Assignment – ePortfolio
//Course: COMP B12
//Instructor: Richard Miles
//Date submitted: 2023/03/19
//Author1: Mitchell, Destiny
//Author2: Sotelo, Verenize
//Author3: Tran, Christina


#include <iostream>
#include <string>
#include "User.h"
#include "Options.h"


using namespace std;

//prompts the user for a menu choice
void promptUserChoice() {
    cout << "Input a number from the choices below: " << endl;
}

int main() {
    //declare variables
    string name;
    int fullOrPartChoice;
    int units;
    int scholarshipChoice;
    int workChoice;
    int hours;
    int workExpChoice;
    int gradChoice;
    User user = User();
    Options option = Options();

    //welcome user to the major
    cout << "Welcome to the Cybersecurity major!" << endl;
    cout << "Enter your name: ";
    cin >> name;

    user.setName(name); //sets users name

    cout << endl;

    cout << "Hello, " << user.getName() << ". I will be asking a few questions to provide and guide you" << endl;
    cout << "towards completing your major efficiently." << endl;

    //asks user if they want to be a full or part time student
    cout << "Will you be attending college as a full time or part time student?" << endl;
    promptUserChoice(); //prompts to choose menu options below
    option.fullOrPartOptions(); //outputs options
    cin >> fullOrPartChoice; //user inputs an option
    while (fullOrPartChoice < 0 || fullOrPartChoice > 2 || cin.fail()) { //if the user inputs invalid input
        cout << endl;
        cout << "That is not a valid option!" << endl;
        cout << "Please try again." << endl;
        cin.clear(); //clears input
        cin.ignore(256, '\n'); //clears input
        cout << "Will you be attending college as a full time or part time student?" << endl; //asks user again
        promptUserChoice();
        option.fullOrPartOptions();
        cin >> fullOrPartChoice;
    }
    user.setFullOrPart(fullOrPartChoice);
    cout << endl;

    //asks user how many units user wants to take
    cout << "How many units are you planning to take?" << endl;
    cin >> units; //inputs how many units
    while (cin.fail()) { //if the user inputs invalid input
        cout << endl;
        cout << "That is not a valid input!" << endl;
        cout << "Please try again." << endl;
        cin.clear(); //clears input
        cin.ignore(256, '\n'); //clears  input
        cout << "How many units are you planning to take?" << endl; //asks user again
        cin >> units;
    }
    while (units > 25 || units < 3) { //limits the amount of units
        cout << "The minimum amount of units you can take is 3 and the maximum is 25!" << endl;
        cout << "Please input the amount of units again." << endl;
        cin >> units;
    }
    cout << endl;

    cout << "Will you need to be working during college?" << endl;
    promptUserChoice();
    option.workOptions();
    cin >> workChoice;
    while (workChoice < 0 || workChoice > 2 || cin.fail()) {
        cout << endl;
        cout << "That is not a valid option!" << endl;
        cout << "Please try again." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Will you need to be working during college?" << endl;
        promptUserChoice();
        option.workOptions();
        cin >> workChoice;
    }
    if (workChoice == 1) {
        cout << endl;
        cout << "How many hours must you work a week?" << endl;
        cin >> hours;
        cout << endl;
    }

    cout << "Are you interested in pursuing scholarships?" << endl;
    promptUserChoice();
    option.scholarshipOptions();
    cin >> scholarshipChoice;
    while (scholarshipChoice < 0 || scholarshipChoice > 2 || cin.fail()) {
        cout << endl;
        cout << "That is not a valid option!" << endl;
        cout << "Please try again." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Are you interested in pursuing scholarships?" << endl;
        promptUserChoice();
        option.scholarshipOptions();
        cin >> scholarshipChoice;
    }
    cout << endl;
    if (scholarshipChoice == 1) {
        user.scholarshipInfo();
    }

    cout << "Are you interested in work experience or internships?" << endl;
    promptUserChoice();
    option.workExpOptions();
    cin >> workExpChoice;
    while (workExpChoice < 0 || workExpChoice > 2 || cin.fail()) {
        cout << endl;
        cout << "That is not a valid option!" << endl;
        cout << "Please try again." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Are you interested in work experience or internships?" << endl;
        promptUserChoice();
        option.workExpOptions();
        cin >> workExpChoice;
    }
    cout << endl;
    if (workExpChoice == 1) {
        user.workExpInfo();
    }

    cout << "Do you also plan to do to graduate work?" << endl;
    promptUserChoice();
    option.graduateOptions();
    cin >> gradChoice;
    while (gradChoice < 0 || gradChoice > 2 || cin.fail()) {
        cout << endl;
        cout << "That is not a valid option!" << endl;
        cout << "Please try again." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Do you also plan to go to graduate school?" << endl;
        promptUserChoice();
        option.graduateOptions();
        cin >> gradChoice;
    }

    cout << "Thank you for your cooperation!" << endl;
    cout << "We were able to create a helpful guide about your major based on" << endl;
    cout << "the information you have given us!" << endl;
    cout << "You can look through the menu below to find out more about them." << endl;
    cout << endl;
    if (user.getFullOrPart() == "Part Time") { //outputs menu of a part time student
        option.menuFunctionPartTime();
        option.SwitchingPartTime();
    }
    else{ //outputs menu of a full time student
        option.menuFunctionFullTime();
        option.SwitchingFullTime();
    }


    return 0;
}