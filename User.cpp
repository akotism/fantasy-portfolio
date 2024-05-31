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

#include "User.h"

User::User(){

}

//sets user's name
void User::setName(string name){
    usersName = name;
}

//outputs users name
string User::getName(){
    return usersName;
}

//sets how many units user is taking
void User::setAmountOfUnits(int units){
    usersUnits = units;
}

//sets if user is full or part time
void User::setFullOrPart(int choice){
    if(choice == 1){
        usersChoice = "Full Time";
    }
    else{
        usersChoice = "Part Time";
    }
}

//outputs if user is full or part time
string User::getFullOrPart(){
    return usersChoice;
}

//outputs scholarship info if user is interested
void User::scholarshipInfo(){
    cout << "You can find our community college scholarships by visiting our financial aid tab on our website." << endl;
    cout << "   - Applications are open from October 1st to February 1st of each academic year." << endl;
    cout << endl;
    cout << "You can also look for scholarships outside of our community college, here are a few" << endl;
    cout << "suggestions you can try:" << endl;
    cout << "   - Local businesses and organizations" << endl;
    cout << "   - Your high school (for graduating seniors)" << endl;
    cout << "   - Get more ideas from Studentaid.gov" << endl;
    cout << endl;
}

//outputs work experience info if user is interested
void User::workExpInfo(){
    cout << "You can find work experience and internship opportunities in the “Work Experience” tab on our" << endl;
    cout << "college website or visit the FACE building on our college campus." << endl;
    cout << endl;
    cout << "Work Experience is a course that allows you to earn college credit through the experience you obtain" << endl;
    cout << "at your worksite." << endl;
    cout << "   - To enroll, you MUST be currently employed or working in an unpaid volunteer position" << endl;
    cout << "AND your position MUST be related to your major in order to be considered eligible." << endl;
    cout << endl;
}

//outputs user's part time schedule
void User::partTimeSchedule(){
    cout<< "   -----Year One------" << endl;
    cout<< " Fall Term       Spring Term"<<endl;
    cout<<"  Calc 1          Calc 2" << endl;
    cout<< " Comp b13        Physics B4A" << endl;
    cout<< "Units: 6         units: 7"<<endl;
    cout<< "------Year Two------" << endl;
    cout<<" Fall Term                  Spring Term"<<endl;
    cout<< "Intro to Cybersecurity     Comp b14" << endl;
    cout<< "Biol B11                   Phyton for Programmers " << endl;
    cout<< "units: 7                   units:6"<<endl;
    cout<< "------Year Three-----"<<endl;
    cout<< "Fall Term               Spring Term"<<endl;
    cout<< " intro to film          systems Programming" << endl;
    cout<< " Intro to web science   Data sctructure & advcanced programming" << endl;
    cout << " Calculus 3            units: 6" << endl;
    cout<< " units:7"<<endl;
    cout<<" ------Year Four-----"<<endl;
    cout<< " Fall Term        Spring Term"<<endl;
    cout<< " Math B6D         History 100" << endl;
    cout<< " Mat Lab          User Interface Design"  << endl;
    cout<< " Units: 7         units:6"<<endl;
    cout<< " ------Year Five------"<<endl;
    cout<< "Fall Term               Spring Term"<<endl;
    cout<< "Political science B1    Fundamentals of Data Science" << endl;
    cout<< "Cybersecurity 2         English B3" << endl;
    cout<< "Units:7                 Units:7"<<endl;
    cout<< " -------Year Six-------"<<endl;
    cout<< "Fall Term             Spring Term"<<endl;
    cout<< "Math B6E              Physics B4B" << endl;
    cout<< "Intro to Art          Probability & Statistics" << endl;
    cout<< "Phil B9" << endl;
    cout<< "Units: 7              Units:7"<<endl;
    }


//outputs user's full time schedule
void User::fullTimeSchedule(){
    cout<< "        ------Year One------    " << endl;
    cout<< " Fall Term                       Spring Term  "<<endl;
    cout<< " Calc 1 (4)                      Calc 2 (4)  " << endl;
    cout<< " Biol B11 (4)                    Physics B4A (4)" << endl;
    cout<< " Comp B13 (3)                    Comp B14 (3)" << endl;
    cout<< "Intro to CyberSecurity (3)       Phyton for Programmers(3)" << endl;
    cout<< "Intro to Flim(1)                 Units: 14" << endl;
    cout<< " Units: 15"<<endl;
    cout<< "         -----Year Two------     " << endl;
    cout<< " Fall Term                         Spring Term"<<endl;
    cout<< " Systems Programming(3)            Probability & Statistics(4)" << endl;
    cout<< " Intro to Web Science (3)          Data Structure & advanced programming(4)" << endl;
    cout<< " Calculus 3 (4)                    Mat Lab (4)" << endl;
    cout<< " Intro to Art (1)                  History 100 (3)" << endl;
    cout<< " Phil B9 (4)                       Units: 15" << endl;
    cout<< " Units: 15"<<endl;
    cout<< "              -----Year Three-----    "<< endl;
    cout<< " Fall Term                           Spring Term"<<endl;
    cout<< " User Interface Design(4)            English B3 (3)"<< endl;
    cout<< " Fundamentals of Data Science(4)     Physics B4B (4)"<< endl;
    cout<< " Political Science B1 (3)            Cybersecurity 2 (4)"<< endl;
    cout<< " Math B6D (4)                        Math B6E (4)"<< endl;
    cout<< "Units: 15                            Units: 15"<<endl;
}

void User::projectedIncomeFullTime(){
    cout<<"Your 15-year projected income as a full-time student (15 units per semester) is as follows: "<< endl;
    cout<<"__"<< endl;
    cout<<"Years 1-3: "<< endl;
    cout<<"After attending college full-time for three years you will have adebt of $50,000"<< endl;
    cout<<"Years 4-10: "<< endl;
    cout<<"Upon graduation, and making $50 per hour (assuming you will be working 40 hours per week),"<< endl;
    cout<<"and finishing paying your $50,000 student loan in 7 years..."<< endl;
    cout<<"Your net income by the end of the 10th year will be $622,000."<< endl;
    cout<<"Years 11-15: "<< endl;
    cout<<"Your yearly projected net income is $96,000 per year."<< endl;
    cout<<"So, your projected 15 year net income is $1,102,000.00"<< endl;
}


void User::projectedIncomePartTime(){
    cout<<"Your 15-year projected income as a part-time student (6 units per semester) goes as follows: "<< endl;
    cout<<"__"<< endl;
    cout<<"Years 1-7: "<< endl;
    cout<<"After attending college part-time for seven years, and working 40 hours per " << endl;
    cout << "week making $15/hour your net income is $201,600"<< endl;
    cout<<"Years 8-15: "<<endl;
    cout<<"Upon graduation, and making $50 per hour (assuming you will be working 40 hours per week),"<< endl;
    cout<<"Your projected 15 year net income is $969,600"<< endl;
}

void User::financialAidContacts(){
        cout<<" If you are interested in applying for financial aid please complete your " << endl;
        cout<< "application on this website and follow the prompts. https://studentaid.gov/h/apply-for-aid/fafsa"<<endl;
}

