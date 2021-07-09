//Author: April Miller
//main.cpp (Driver)

#include "PersonAtMCC.h"
#include "Student.h"
#include "Staff.h"
#include "Instructor.h"
#include <iostream>
using namespace std ;

int main() {

    // Create Student objects for Amerlia Earhart and Muhammed Ali and myself
    Student *amelia = new Student(940392,
    "Amelia Earhart", "123 Main Street, Oceanside, CA","760.213.4930", "Computer Science", 240, true, true);

    Student *muhammed = new Student(840392, "Muhammed Ali", "294A West 4th Ave., Escondido, CA", "760.294.4932",
		"Math", 134, false, false);

    Student *april = new Student(940392,
    "April Miller", "Abbey Road", "760.123.4567", "Computer Science", 95, true, false);


    // Show the information for both students
    cout << "*** TWO STUDENTS ***\n" << endl;
    amelia->showInfo();
    muhammed->showInfo();
    april->showInfo();

    // How about a friendly instructor?
    Instructor *professorJudy = new Instructor(6294032, "Juanita Ramirez", "843 C St., Apt 43, San Diego, CA",
		"619.427.4933", "English", false, 59.85, 160);

    cout << "\n*** A FRIENDLY INSTRUCTOR ***\n" << endl ;
    professorJudy->showInfo() ;

    //The facilities guy
    Staff *elliot = new Staff(84920493, "Eliot Ness", "15 East Ramona Way, Ramona, CA", "760.583.3911", "x5923","Nov. 15, 2015", 49.25);

    cout << "\n*** STAFF MEMBER ***\n" << endl ;
    elliot->showInfo() ;

    // Finally just a plain old PersonAtMCC
    PersonAtMCC *ralph = new PersonAtMCC(10000000, "Ralph Kramden", "999 Yellow Brick Road", "555-BANG-ZOOM") ;

    //Ralph's Info									
    cout << "\n*** JUST ANOTHER PERSON AT MCC ***\n" << endl ;
    ralph->showInfo() ;
	
	  cout << "\n*** BASE CLASS SHOWINFO FOR MS. EARHART ***\n" << endl ;
	  amelia->PersonAtMCC::showInfo();

    return 0 ;
}