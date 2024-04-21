// Reading text file app
#include<iostream>
#include<fstream> // including file stream library
#include<string> // using string library

using namespace std ;

 // function to count the number of vowels
 int countVowels(const std:: string &str){
    int stat = 0 ;
    for (char c : str){
        if (std:: string("aeiouAEIOU").find(c)!= std::string::npos){
            stat++ ;
        
            
        }
        
    
        
    }

    return stat ;
    

  }

  // function to count number of words
  int countWords(const std::string &str){
    int readingWords = 0;
    bool inWord = false ;

    for (char c : str){
     if (std::isspace(c)){
        inWord = false;
     
        
     }else if (!inWord){
        readingWords++ ;
        inWord = true ;
     
        
     }
     
     
    
    
    }
    return readingWords ;

  }

   // Function to Reverse String
   std:: string reverseString(const std::string &str){

    return std:: string(str.rbegin(),str.rend());

   }

   // Function to captalize second letter
   std:: string captalizeSecondLetter(const std::string &str){
    std::string result = str ;
    bool capitalize = false ;

    for ( char &c : result){
        if (std::isalpha(c)){
         if (capitalize){
         
            c = std::toupper(c);
            capitalize = false ;
         }else{
         
            capitalize = true ;
         }
         
         
            
        }else{
        
          capitalize = false ;  
        }
        
        
    
        
    }

    return result ;
    

   }

    


int main(){
  std:: string fileData ;   
 // opening  an existing file named "com221.txt" 
 std::ifstream  inputFile("com221.txt");

 if (inputFile.is_open()){
   

    while (std::getline(inputFile,fileData)){ // Looping through eachLine
     // Display eachline on the console
     cout<<fileData<<endl;
    
        
    }

    inputFile.close();
    
 
    
 }else{
    cout<<"Failed to open the file."<<endl;
 }

 // count  vowels
  int vowelsCount = countVowels(fileData);
  cout<<"Number of vowels"<<vowelsCount<<endl;

  // count words
   int wordsCount = countWords(fileData);
  cout<<"The number of words"<<wordsCount<<endl;

  // Reverse String
   std:: string reversedString = reverseString(fileData);
   cout<<"Reversed String::"<<reversedString<<endl;

   // Capitalise letter
   std:: string capitalizeString = captalizeSecondLetter(fileData);
   cout<<"Capitalised String:"<< capitalizeString<<endl;

  

    
    return 0;
}

