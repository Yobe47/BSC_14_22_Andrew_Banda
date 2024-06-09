// Dynamic allocation of arrays.cpp
#include<iostream>
using namespace std ; // standard library
int main(){
    
  int numRows , numColumns ;

  // prompting the user to enter the dimensions of the array 
  do{
    cout<<"Enter rows:"<<endl ;
    cin>>numRows ;
    if (numRows > 3){
      cout<<"Dimensions cannot exceed 3.Please try again.";  
    
        
    }
    
  
    
  } while (numRows >3);
    
    do{
    // Enter num of columns 
    cout<<"number of Columns"<<endl ;
    cin>>numColumns ;
    if (numColumns > 3){
      cout<<"Dimensions cannot exceed 3. Please try again";  
    
        
    }
        
    } while (numColumns > 3);

    // allocation of 2D double [] dynamically
    double** array = new double*[numRows] ;

    for (int x = 0; x < numRows; x++){
        array[x] = new double[numColumns];
    
        
    }

    // Assigning values to each element of the array 
    for (int i = 0 ; i <numRows ; i++){
    
    for (int j = 0 ; j < numColumns ; j++){
    
        cout<<"Enter value for element["<<i<<"]["<<j<<"]: " ;
        cin>>array[i][j];
    }
    cout<<"\n";
    
    }

    //memory deallocation using delete keyword
    for (int a = 0; a < numRows ; a++){
        delete[] array[a];

        
    }

    delete[] array ;
      
    return 0;
}


