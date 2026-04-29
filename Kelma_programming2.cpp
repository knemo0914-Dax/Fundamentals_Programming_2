#include<iostream>
using namespace std;
void firsthalf(int number){
    for(int row = 1; row <= number; row++ ){
        for(int space = number -1; space>= row; space-- ){
            cout<<" ";
            } 
        for(int star = 1; star <= 2*row - 1; star++ ){
            cout<<"*";
            }
            cout<<endl;
    }
}

void secondhalf(int number){
    for(int row = number - 1 ; row >= 1; row--){
        for(int space = 1; space <= number - row; space++){
            cout<<" ";
        }
        for(int star  = 1; star <= 2*row-1; star++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int number;
    cout<<"Enter size: ";
    cin>>number;
    firsthalf(number);
    secondhalf(number);
}



