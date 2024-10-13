#include<iostream>
using namespace std;
float calculateaverage(float engmarks,float mathsmarks, float chemmarks,float ssmarks,float biomarks);
string calculategrade(float average);

int main(){

string name;
float engmarks,mathsmarks,chemmarks,ssmarks,biomarks,average;

cout << "Enter student name:";
cin >> name;  

cout << "Enter marks for English: ";
cin >> engmarks;
cout << "Enter marks for Maths: ";
cin >> mathsmarks;
cout << "Enter marks for Chemistry: ";
cin >> chemmarks;
cout << "Enter marks for Social Sciences: ";
cin >> ssmarks;
cout << "Enter marks for Biology: ";
cin >> biomarks;

cout << "Student name: " << name    << endl;
average = calculateaverage(engmarks,mathsmarks,chemmarks,ssmarks,biomarks);

string grade;
grade= calculategrade(average);

cout << "Percentage: " << average<< "%"<<endl;
cout << "Grade: " << grade << endl;

}

float calculateaverage(float engmarks,float mathsmarks, float chemmarks,float ssmarks,float biomarks)
{

float sum,avg;

    sum=engmarks+mathsmarks+chemmarks+ssmarks+biomarks;
    avg=sum/5;
    return avg;
    
return 0;
}

string calculategrade(float average)
{
string grade1; 

    if(average >= 90 && average <= 100)
    { grade1="A+";
    }
   else if(average >= 80 && average < 90)
    { grade1="A";
    }
   else if(average>= 70 && average < 80)
    { grade1="B+";
    }
   else if(average>= 60 && average < 70)
    { grade1="B";
    }
   else  if(average>= 50 && average < 60)
    { grade1="C";
    }
   else  if(average>= 40 && average < 50)
    { grade1="D";
    }
   else
    { grade1="F";
    }

return grade1;

}