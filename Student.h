/**
Author: April Miller
Student.h header file for students at MiraCosta.
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "PersonAtMCC.h"
using namespace std ;

class Student : public PersonAtMCC
{    

    //Private instance variables
    private :
        string major ;
        int credits_received ;
        bool applied_to_4_year ;
        bool is_veteran ;

    public :
        //Constructor
        Student(long, string, string, string, string, int, bool, bool); 

        string getMajor() ;                       
         //getters and setters
        void setMajor(string);
        int getCreditsReceived();
        void setCreditsReceived(int);
        bool getAppliedTo4Year();
        void setAppliedTo4Year(bool);
        bool getIsVeteran();
        void setIsVeteran(bool);
        void showInfo() ;
};

#endif