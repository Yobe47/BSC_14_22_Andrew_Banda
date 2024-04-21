// RandomNumber app
#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std ;


int main(){
  // Seed the random number generator
  std::srand(std::time(nullptr));

  // Generate random number btwn 0 and 11
   int daysUntilExpiration = std::rand() % 12 ;

   
   // Showing User-Subscription  based on daysUntilExpiration

   if (daysUntilExpiration == 0 ){

    cout<<"Your subscription has expired"<<endl;
    
    cout<<daysUntilExpiration;
   
    
   }
   else if (daysUntilExpiration == 1){
    cout<<"Your subscription expires within a day Renew now and save 20%"<<endl;
    cout<<daysUntilExpiration;
   
    
   }else if (daysUntilExpiration >1 && daysUntilExpiration <=5){

    cout<<"Your subscription expires in"<<daysUntilExpiration<<"Renew now and save 10%"<<endl;
    cout<<daysUntilExpiration;
    
  }else if (daysUntilExpiration >5 && daysUntilExpiration <=10){
    cout<<"Your subscription will expire soon.Renew now!"<<endl;
    cout<<daysUntilExpiration;
  
    
  }else if (daysUntilExpiration > 10){
    cout<<"You have an active subscription"<<endl;
    cout<<daysUntilExpiration;
  
    
  }



    return 0;
}
