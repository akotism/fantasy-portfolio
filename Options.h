// Assignment: Special Programming Assignment – ePortfolio
//Course: COMP B12
//Instructor: Richard Miles
//Date submitted: 2023/03/19
//Author1: Mitchell, Destiny
//Author2: Sotelo, Verenize
//Author3: Tran, Christina

#ifndef COMPSCIPATH_OPTIONS_H
#define COMPSCIPATH_OPTIONS_H

using namespace std;

class Options{
public:
    Options();
    //full time or part time?
    void fullOrPartOptions();
    //interested in getting a scholarship?
    void scholarshipOptions();
    //do they work?
    void workOptions();
    //interested in work experience?
    void workExpOptions();
    //will you pursue graduate school?
    void graduateOptions();
    //switch case for fulltime
    void SwitchingFullTime();
    //exit function for fulltime
    void exitNumberFull();
    //menu function ofr fulltime
    void menuFunctionFullTime();
    //switch case for parttime
    void SwitchingPartTime();
    //exit function for parttime
    void exitNumberPart();
    //menu function for parttime
    void menuFunctionPartTime();
    //checks if input is an integer
    bool checkInteger(string choices);
};

#endif //COMPSCIPATH_OPTIONS_H
