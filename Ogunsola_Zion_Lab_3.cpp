//Zion Ogunsola
//Lab 3
//9/30/2024

#include <iostream> //Includes iostream

#include <iomanip> //Includes iomanip

using namespace std;

int main() //Begins function
{
   
   
   cout << setfill('#') << setw(90) << ('#') << endl; //Creates first line of #
   cout << "#"; //Outputs a # at the start of the second line
   cout << setfill(' ') << setw(88) << (' '); //Fills space 
   cout << "#" <<endl; //Outputs a # at the end of the second line
   
   
   cout << "#Ways to access the Task Manager on your Windows computer:"; //Outputs the statement
   cout << setfill(' ') << setw(31) <<(' ') << setw(1) << ('#') << endl; //Fills space on the same line as the statement outputted
   cout << "#" << setfill(' ') << setw(88) << (' ') << setw(1) << ('#') << endl; //Puts a # at the end of the line of the statement
  
   cout << "#        Press the key combination Ctrl + Shift + Escape" ; //Outputs the statement
   cout << setfill(' ') << setw(33) <<(' ') << setw(1) << ('#') << endl; //Fills space on the same line as the statement outputted
   cout << "#" << setfill(' ') << setw(88) << (' ') << setw(1) << ('#') << endl; //Puts a # at the end of the line of the statement
  
   cout << "#        Press the key combination Ctrl + Alt + Delete and select “Task Manager” " ; //Outputs the statement
   cout << setfill(' ') << setw(8) <<(' ') << setw(1) << ('#') << endl; //Fills space on the same line as the statement outputted
   cout << "#" <<setfill(' ') << setw(88) << (' ') << setw(1) << ('#') << endl; //Puts a # at the end of the line of the statement
   
   cout << "#        Type “Task Manager” in the Windows Start menu search" ; //Outputs the statement
   cout << setfill(' ') << setw(28) <<(' ') << setw(1) << ('#') << endl; //Fills space on the same line as the statement outputted
   cout <<"#" << setfill(' ') << setw(88) << (' ') << setw(1) <<('#') << endl; //Puts a # at the end of the line of the statement
   
   cout <<"#" <<setfill('#') << setw(89) << ('#') << endl; //Creates last line of #

   return 0; //Returns the function
}

/*
#########################################################################################
#                                                                                       #
#Ways to access the Task Manager on your Windows computer:                              #
#       Press the key combination Ctrl + Shift + Escape                                 #
#       Press the key combination Ctrl + Alt + Delete and select "Task Manager"         #
#       Type "Task Manager" in the Windows Start menu search                            #
#                                                                                       #
#########################################################################################
*/