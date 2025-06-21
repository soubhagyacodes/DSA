#include <iostream>
using namespace std;

/*

PATTERN 1
*
**
***
****
***
**
*

*/

void pattern1(int rows){

    int k=0;
    int n = rows/2 + 1;

    for(int i = 1; i <= rows; i++){
        if(rows % 2 != 0) i <= n ? k ++ : k--;
        else {
            if(i <= n-1) k++;
            if(i >= n + 1) k--;
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}

/*

PATTERN 2
* * * * * * *
  * * * * *
    * * * 
      *

*/

void pattern2(int rows){
    int cols = 2*rows + 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if(j>=i && j<=cols-1-i){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
        
    }
    
}

/*

PATTERN 3
   1
  232
 34543
4567654

*/

void pattern3(int rows){
    int cols = 2*rows -1;
    for(int i = 1; i<=rows; i++){
        int k = i;
        for(int j = 1; j <= cols; j++){
            if(j >= rows+1-i && j <= rows-1 + i){
                cout << k;
                j > rows-1 ? k-- : k++;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*

PATTERN 4
6543210
543210
43210
3210
210
10
0

*/

void pattern4(int rows){
    for(int i = 1; i<=rows; i++){
        int k = rows- i;
        for(int j=1; j<=rows; j++){
            if(j <= rows+1-i){
                cout << k;
                k--;
            }
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern4(10);
}
