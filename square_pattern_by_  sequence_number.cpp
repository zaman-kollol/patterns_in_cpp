
    /*   0 1 2
        3 4 5
        6 7 8  */


    #include <iostream>
    using namespace std;

    int main() {
        int n=3;
        int num = 0; //intializing the number to start from 0.
        
        for(int i=0; i<n; i++){    //inner loop for rows.
            for(int j=0; j<n; j++){  //inner loop for columns.

                cout<<num<<" "; 
                num++; 
        }
            cout<<endl; //for new line after each row.
        }
        return 0;
    }
