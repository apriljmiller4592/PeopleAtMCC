//Author: April Miller
//PersonAtMCC.h header file for people at MiraCosta.

#ifndef PERSON_AT_MCC_H
#define PERSON_AT_MCC_H

#include <iostream>
using namespace std ;

class PersonAtMCC {

    private:
        long id ;
        string name ;
        string address ;
        string phone ;

    public :
        PersonAtMCC() ;                                 // default constructor
        PersonAtMCC(long, string) ;                     // id and name
        PersonAtMCC(long, string, string, string) ;     // full constructor

        long getId() ;                                  // all getters and setters
        void setId(long) ;
        string getName() ;
        void setName(string) ;
        string getAddress() ;
        void setAddress(string) ;
        string getPhone() ;
        void setPhone(string) ;

        void showInfo() ;
} ;

#endif
