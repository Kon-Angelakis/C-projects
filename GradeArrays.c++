#include <iostream>
#include <string>
using namespace std;

void gem(int n, float grades[]){
    cout << "Grades should be from 0-10" << endl;
    for(int i=0; i<n; i++){
            cout << "Enter grade number " << (i+1) << ": " ;
            cin >> grades[i];
            while(grades[i]<0 or grades[i]>10){
                cout << "Invalid number, please try again." << endl;
                cout << "Enter grade number " << (i+1) << ":" ;
                cin >> grades[i];
            }
        
    }
    cout << "Array filled!" << endl;
}

float add(int n, float grades[]){
    static float sum = 0;
    for(int i=0; i<n; i++){
        sum = grades[i] + sum;
    }

    return sum;
}

int main(){
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    while (n<=0){
        cout << "Invalid number of students! Please try again." << endl;
        cin >> n;
    }
    float grades[n];
    gem(n,grades);
    float sum = add(n,grades);
    float avg = sum/n;
    cout << "The average grade is: " << avg << endl;
    system("pause");
    return 0;
}
