#include <iostream>
#include <string>
using namespace std;

int marks;
string result;

string gpa(int marks){

if (marks>= 0 && marks <= 49){
    result = "GPA: 0.00\n\n";
}

else if (marks >= 50 && marks <= 54){
    result = "GPA: 1.00\n\n" ;
}

else if (marks >= 55 && marks <= 59){
    result = "GPA: 2.00\n\n" ;
}

else if (marks >= 60 && marks <= 64){
 result = "GPA: 2.30\n\n" ;
}

else if (marks >= 65 && marks <= 69){
    result = "GPA: 2.70\n\n" ;
}

else if (marks >= 70 && marks <= 74){
    result = "GPA: 3.00\n\n" ;
}

else if (marks >= 75 && marks <= 79){
    result = "GPA: 3.30\n\n" ;
}

else if (marks >= 80 && marks <= 84){
    result = "GPA: 3.70\n\n" ;
}

else if (marks >= 85 && marks <= 100){
    result = "GPA: 4.00\n\n" ;
}

else if (marks > 100 && marks < 0){
    result = "Error, please input again.\n\n" ;
}

return result;
}

int main(){
	string res;
cin >> marks;
cout<<gpa (marks);
return 0;
}
