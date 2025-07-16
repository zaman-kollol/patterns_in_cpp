   /*   A B C D
        E F G H
        I J K L
        M N O P */


    #include <iostream>
    using namespace std;

    int main() {
        int n=4;
        int num = 0; //intializing the number to start from 0.
        
        for(int i=0; i<n; i++){    //inner loop for rows.
            for(int j=0; j<n; j++){  //inner loop for columns.

                 cout<<(char)(num+65)<<" "; //type casting. 
                num++; 
        }
            cout<<endl; //for new line after each row.
        }
        return 0;
    }
