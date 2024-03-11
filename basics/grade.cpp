#include<iostream>
using namespace std;
int main(){
    int no = 39;
    char grade;


if(no>89){
    grade = 'O';}
    else if (no > 74)
    {
        /* code */
        grade = 'S';
    }
    else if (no> 64)
    {
        grade = 'A';

    }
    else if (no > 54){
        grade = 'X';

    }
    else if (no > 49){
        grade = 'B';
    }    
    
    else if (no > 44){
        grade = 'C';
    }    
    
    else if (no > 39 ){
        grade = 'P';
        if (no == 40)

        {
            grade = '*';
            /* code */
        }
    }
    else{
        grade = 'F';
    }
        cout<<"grade = "<<grade<<endl;
}
