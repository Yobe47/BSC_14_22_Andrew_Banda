// Arrays app
#include<iostream>
#include<string>
using namespace std ;

int main(){

//Declaring and initializing  the string array
 std::string reg[] = { "B123","A345","B177","C234","C15","G3003","C235","B179"} ;

 // finding length of reg[]
 
 int regLength =sizeof(reg) / sizeof(reg[0]);


 // Iterating through the array to find elements starting with "B"

  for (int i = 0; i < regLength; i++){
    if (reg[i][0] == 'B'){
        cout<<reg[i]<<endl;
    
        
    }
    
  
    
  }
  


    
    return 0;
}
