// Assignment: Special Programming Assignment – ePortfolio
//Course: COMP B12
//Instructor: Richard Miles
//Date submitted: 2023/03/19
//Author1: Mitchell, Destiny
//Author2: Sotelo, Verenize
//Author3: Tran, Christina

#ifndef COMPSCIPATH_USER_H
#define COMPSCIPATH_USER_H

using namespace std;

class User{

public:
    User();
    //sets user's name
    void setName(string name);
    //outputs user's name
    string getName();
    //sets user's preference of full time or part time student
    void setFullOrPart(int choice);
    //outputs user's preference of full time or part time student
    string getFullOrPart();
    //sets user's amount of units they want to take
    void setAmountOfUnits(int units);
    //outputs scholarship information
    void scholarshipInfo();
    //outputs work experience information
    void workExpInfo();
    //outputs user's part time schedule
    void partTimeSchedule();
    //outputs user's full time schedule
    void fullTimeSchedule();
    //outputs users income full time
    void projectedIncomeFullTime();
    //outputs users income part time
    void projectedIncomePartTime();
    //outputs users contact for financial aid
    void financialAidContacts();


private:
    string usersName;
    string usersChoice;
    int usersUnits;
    string usersWork;
    int usersHours;
};

#endif //COMPSCIPATH_USER_H
