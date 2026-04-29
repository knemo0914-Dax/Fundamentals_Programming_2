#include<iostream>
#include<cstdlib>
using namespace std;
void userinput(int &size){
    cout<<"This program takes positive intergers only!"<<endl;
    cout<<"Enter size (rows): ";
    cin>>size;
    cout<<endl;
    // INPUT VALIDATION
    if(size <= 1){
       cout<<"Invalid input.\nRestart the program.";
       exit(0);
      }
}

void upperhalf(int size){
    cout<<"- - - Dax Sysmetric Diamond - - -"<<endl;
    cout<<endl;
    // LOOP FOR PRINTING THE FIRST HALF OR THE DIAMOND
    for(int i = 1; i <= size; i++ ){
    	//  CONTROL ROWS
        for(int j = size-1; j >= i; j-- ){
        	// PRINTING DECREMENTING "SPACES"
            cout<<" ";
            } 
        for(int k = 1; k <= 2*i - 1; k++ ){
        	// PRINTING INCREMENTING "STARS"
            cout<<"*";
            }
            cout<<endl;
    }
}

void lowerhalf(int size){
	// LOOP FOR PRINTING THE SECOND HALF OR THE DIAMOND
    for(int i = size - 1 ; i >= 1; i--){
    	//  CONTROL ROWS
        for(int j = 1; j <= size - i ; j++){
        	// PRINTING INCREMENTING "SPACES"
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++){
        	// PRINTING DECREMENTING "STARS"
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"- - - Bye - - -"<<endl;
}

int main(){
    int size;
    userinput(size);
    upperhalf(size);
    lowerhalf(size);
    return 0;
}

// Documentation of Dax Diamond

/* This program was build by Nkwa Fortune Abang a level 1 student.

Dedication:
To Lecturer Ngwa Jude.

______________________________________________________________________
DEFINITIONS OF THE VARIOUS IDENTIFIERS, VARIABLE USED AND WHAT THEY DO
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	
1.) size: 
This variable collects the users input.
Note: This is the only defined input point of the program.
It defines the number of rows that will be printed. 
--------------------------------------------------------------------------------
2.) userinput
Is the name of the function that permits the user to enter the size of the diamond.
It is the only function that can modify, change the input, its done by referencing.
That explains why there is "&" infront of the size parameter.
Also its valids the user input (exiting the program if input is less than and equal to 1.
--------------------------------------------------------------------------------
3.) Upperhalf:
Is the name of the function that prints the first the half of the diamond (The triangle).
It uses variables like:
	
(i)  i, which determines the "rows" by incrementing through size.

(ii) j, print reducing "spaces" by decrementing j= size -1 through i.

(iii) k, print "stars". it uses the formula:
"2*i - 1" to produce an odd number pattern of stars.
--------------------------------------------------------------------------------
4) lowerhalf:
Is the name of the function that prints the second the half of the diamond (The reversed triangle).
It uses variables like:
	
(i)  i, which determines the "rows" by decrementing "size-1" to 1.
It also prevent the middle for repeating.

(ii) j, print increasing "spaces" by increment j  through size-i.

(iii) k, print "stars". it uses the formula:
"2*i - 1" to produce an odd number pattern of stars.

*/

