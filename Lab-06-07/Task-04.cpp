#include <iostream>
using namespace std;
int main (){
	double subject1,subject2,subject3;
	
	cout << "Enter your marks for Subject 1 (Out of 100)" << endl;
	cin>> subject1;
	
	cout << "Enter your marks for subject 2 (Out of 100)" << endl;
	cin >> subject2;
	
		
	cout << "Enter your marks for subject 3 (Out of 100)" << endl;
	cin >> subject3;
	
	double  obtainedMarks= subject1+subject2+subject3;
	
	double percentage = obtainedMarks/300*100 ;
	
	
	char grade1;
	if (subject1 >= 90) {
	grade1 = 'A';
	}else if (subject1 >= 80) {
	grade1 = 'B';
	}else if (subject1 >= 70) {
    	grade1 = 'C';
	} else if (subject1 >= 60) {
		grade1 = 'D';
	}else {
		grade1 = 'F';
	}
    
    	char grade2;
	if (subject2 >= 90) {
	grade2 = 'A';
	}else if (subject2 >= 80) {
	grade2 = 'B';
	}else if (subject2 >= 70) {
    	grade2 = 'C';
	} else if (subject2 >= 60) {
		grade2 = 'D';
	}else {
		grade2 = 'F';
	}
    
    	char grade3;
	if (subject3 >= 90) {
	grade3 = 'A';
	}else if (subject3 >= 80) {
	grade3 = 'B';
	}else if (subject3 >= 70) {
    	grade3 = 'C';
	} else if (subject3 >= 60) {
		grade3 = 'D';
	}else {
		grade3 = 'F';
	}
    
    
    if ( grade1=='F' ||  grade2=='F' || grade3=='F' ) {
    	cout << "Failed" << endl;
    	return 0;
	}    
    
  	cout << "Total marks=" << obtainedMarks << endl;
  	cout << "Percentage=" << percentage << endl;
  	
  	cout << "Grade for Subject 1: " << grade1 << endl;
    cout << "Grade for Subject 2: " << grade2 << endl;
    cout << "Grade for Subject 3: " << grade3 << endl;
    
     if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && obtainedMarks >= 270) {
        cout << "Eligible for Merit Scholarship." << endl;
    } else if ((grade1 == 'A' || grade1 == 'B') &&
               (grade2 == 'A' || grade2 == 'B') &&
               (grade3 == 'A' || grade3 == 'B') && obtainedMarks >= 240) {
        cout << "Eligible for Regular Scholarship." << endl;
    } else {
        cout << "Not eligible for any scholarship." << endl;
    }
    
    return 0;
    
    
    
    
}
