// Calculating area of shape
#include<iostream>
using namespace std ;
// function to find Area of Triangle
double areaOftriangle(int base , int height){
  double area = (0.5)*(base)*(height);
  return area ;  

}

 // function to find Area of Rectangle
  double areaOfrectangle(int length , int width){
    double area = (length)*(width);

    return area ;

  }

  // function to find Area of  Square
  double areaOfsquare(int side1 ,int side2 ){
    double area = side1*side2 ;
    return area ;

  }

  // function to show Area Choices
  void showChoices(){
    cout<<"Please Select the Area of Shape to Calculate"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Triangle"<<endl;
    
    
  }

  void continuation(){
    cout<<"1.Enter 0 to continue"<<endl;
    cout<<"2.Enter 4 to exit "<<endl;
  }


int main(){
 int option ; 
 int count;
 int appCount ; // controlling the looping of this app
 double result ;
 
 do{

  // Choosing from the list the Area of choice

  showChoices();

  // Enter choice
  int choice;
  cout<<"Enter Choice"<<endl;
  cin>>choice;

  if (choice == 1){
    int side1 ; int side2 ;
    //Enter side1 and side2
    cout<<"Enter side1:"<<endl;
    cin>>side1;
    cout<<"Enter side2:"<<endl;
    cin>>side2;
    
    result = areaOfsquare(side1,side2);

    cout<<"Area of Square is:"<<result;

    
    
  }
  else if (choice == 2){
    int length ; int width ;
    cout<<"Length:"<<endl;
    cin>>length;

    cout<<"Width:"<<endl;
    cin>>width;

    result = areaOfrectangle(length,width);
    
    cout<<"Area of Rectangle is:"<<result;
    
  }
  else if(choice == 3){
    int base; int height ;
    cout<<"Base:"<<endl;
    cin>>base;

    cout<<"Height:"<<endl;
    cin>>height;

    result = areaOftriangle(base,height);
  
    cout<<"Area of Triangle is:"<<result;
  }
  
  

  continuation();

  //Enter 0 or 4
 
  cout<<"Option 0 or 4:"<<endl;
  cin>>option;


  if (option == 0){
  
    appCount = 0 ;
  }else{
  
    appCount = 4 ;
  }
  
  
  
    
  
  
  
  
  
   //appCount = count;
 
    
 } while (appCount == 0);
 


    
    return 0;
}
