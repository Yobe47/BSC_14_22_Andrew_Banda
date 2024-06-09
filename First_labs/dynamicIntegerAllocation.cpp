// dynamic allocation of integer
#include<iostream>
#include<string>
using namespace std ;

int main(){

  int* allocateInteger  = new int ; // dynamically allocate  int 

   string * allocateString = new string ;  // dynamic allocate string

   // prompt the user to input values for the dynamically allocate integer
   cout<<"Enter integer:"<<endl;
   cin>>*allocateInteger ;
   cin.ignore(); // clearing the input buffer

   // Enter string
   cout<<"Enter a String:"<<endl;
   std::getline(cin,*allocateString);


   //output the dynamically allocated integer and string 
    cout<<"Dynamically allocated integer value:"<<*allocateInteger<<endl;
    cout<<"Dynamically allocated string value:"<<*allocateString<<endl;

    // Deallocate the dynamically allocated memory
     delete allocateInteger ;
     delete allocateString ;

    return 0;
}
