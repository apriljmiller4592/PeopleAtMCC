//Author: April Miller
//Instructor.h header file for instructors at MiraCosta.

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "PersonAtMCC.h"
using namespace std ;

class Instructor : public PersonAtMCC
{

    private:
        string department ;
        bool is_permanent ;
        double pay_rate ;
        double hours ;

    public :
        Instructor(long, string, string, string, string, bool, double, double) ;	// full
        
        string getDepartment() ;                       // getters and setters
        void setDepartment(string) ;
        
        bool getIsPermanent() ;
        void setIsPermanent(bool) ;
        
        double getPayRate() ;
        void setPayRate(double) ;
        
        double getHours() ;
        void setHours(double) ;
        
        void showInfo() ;                              // show all info for this Instructor
} ;

#endif
