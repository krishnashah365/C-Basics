// 13.      *
//         * *
//        *   *
//       *     *
//      *********

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row=1; row<=n; row++){
        for(int space=1; space<=n-row; space++){
            cout << " ";
        }
        for(int col=1; col<2*row; col++){
            if(col == 1 || col == 2*row-1 || row == n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}