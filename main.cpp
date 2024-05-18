// main file having main method
#include <iostream>
#include "Rectangle.h"
using namespace std ;

// Main function
int main(){
 float length ;
 float width ;   

 // Enter length and width
   cout<<"Enter length && width:"<<endl ;
   cin>>length>>width ;


 // Creating an object of rectangle class
  Rectangle rectangle1 ;
  float x = rectangle1.assignValues(length,width);
  cout<<"Object length is:"<< x<<endl;

  float calculatedArea = rectangle1.areaOfrectangle();

   cout<<"The area is:"<<calculatedArea<<endl;

   


    
    return 0;
}
