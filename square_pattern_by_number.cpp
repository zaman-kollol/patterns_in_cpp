  /*    0 1 2 3      
        0 1 2 3
        0 1 2 3  */

    #include <iostream>
    using namespace std;

    int main() {
        
        int n=4;
        
        for(int i=0; i<n; i++){ //loop for rows.
            for(int j=0; j<n; j++){ //loop for colums.

                cout<<j<<" ";
        }
            cout<<endl; 
        }
        
        return 0;
    }
