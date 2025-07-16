/*   A B C D
     A B C D
     A B C D
     A B C D  */ 

#include<iostream>
using namespace std;
int main(){ 
    
     int n=4;
     
     for(int i=0; i<n; i++){   //inner loop for rows.
        for(int j=0; j<n; j++){ //inner loop for columns.

             cout<<(char)(j+65)<<" "; 
     }
           cout<<endl; //for new line after each row.
     }
    
    return 0;
}