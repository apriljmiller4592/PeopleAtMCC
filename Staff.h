/**
Author: April Miller
Staff.h header file for Staff members at MiraCosta.
*/

#ifndef STAFF_H
#define STAFF_H

#include "PersonAtMCC.h"
using namespace std ;

class Staff : public PersonAtMCC 
{    
    private :
        string extension ;
        string hire_date ;
        double pay_rate ;

    public :
        Staff(long, string, string, string, string, string, double) ;         // full constructor

        string getExtension() ;                       // all getters and setters
        void setExtension(string) ;
        string getHireDate() ;
        void setHireDate(string) ;
        double getPayRate() ;
        void setPayRate(double) ;

        void showInfo() ;
} ;

#endif