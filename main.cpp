/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ MATTHEW, ELIJAH MOSES ]
 * Matric No:   [ PDS/2013/5912]
 * Department:  [ STATISTICS ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // TODO: Put your code to receive input from user here
    
    // TODO: Put your code to receive input from user here
    cout<<"first name ";
                 getline(cin,firstName); 
      cout<<"last name ";  
    getline(cin,lastName); 
     cout<<"gender ";  
                   getline(cin,gender);
     cout<<"month ";     
    cin>>month;    
     cout<<" day ";          
    cin>>day; 
     cout<<" year ";               
    cin>>year;    
     cout<<" current year ";           
    cin>>currentYear; 
                           cout<<" current day ";         
    cin>>currentDay;  
                       cout<<" current month ";     
    cin>>currentMonth; 
     cout<<" weight ";   
                    cin>>weight;
     cout<<" height ";
    cin>>height;
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    HealthProfile nHealthP(firstName, lastName, gender, month, day, year, weight, height, currentMonth, currentDay, currentYear);
   
   
    // Print information from the object - by calling getInformation() function
    nHealthP.getInformation();
    
 system("PAUSE");
    return 0;
    
   
    

    
}
