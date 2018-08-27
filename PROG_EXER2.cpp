/*
Author: M. S. Flores
Program: Profile Information.
Description: This program shows the profile information of the user.
*/
#include<iostream>
using namespace std;
int main()
{

//Initialize the variables
string FN,SN,E,A,M, a="+63" ;
int D,Y;
int C1, C2;
char MI;

//prompt the user to enter inputs 
cout <<"Enter your Surname: ";
cin >> SN;
cout <<"Enter your First name: ";
cin >> FN;
cout <<"Enter your Middle Initial: ";
cin >> MI;
cout <<"Enter your birth month: ";
cin >> M;
cout <<"Enter your birth date: ";
cin >> D;
cout <<"Enter your birth year: ";
cin >> Y;
cout <<"Enter your contact number 1st - 6th digit: ";
cin >> C1;
cout <<"Enter your contact number 7th - 11th digit: ";
cin >> C2;   
cout <<"Enter your email address: ";
cin >> E;
cout <<"Enter your address: ";
cin >> A;
cout << "\n\n" << endl;   

//outputs of the program
cout << "Name: " ;
cout << SN << "," << FN << " " << MI << "." << endl ;
cout << "Birthday: ";
cout << M << " " << D << "," << Y << endl; ;
cout << "Contact no.: " ;
cout << a << C1 << C2 << endl ;
cout << "Email Address :";
cout << E << endl;
cout << "Address :";
cout << A << endl;

return 0;
}

