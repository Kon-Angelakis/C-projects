#include <iostream>
using namespace std;

int main(){

    int x,j,k;

    cout << "Please select the size(y-axis) of the tree: ";
    cin >> x;


    for (int i=1; i<=x; i++){

        for(j=1; j<=x-i; j++){
            cout << " ";
        }

        for(k=j+1; k<=2*x+2-j; j++){ 
            if(j>x){
                cout << "/";
            }else{
            cout << "\\";}
            
        }

        cout << endl;
    }

    system("pause");
    return 0;
}