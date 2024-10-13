#include<iostream>
#include<string>
using namespace std;
string checkstdstatus(int hr,int min,int arhr,int armin);

int main(){

    int hr,min,arhr,armin=0;

    cout << "Enter Exam Starting time(hours):";
    cin >> hr;
    cout << "Enter Exam Starting time(minutes):";
    cin >> min;
    cout << "Enter Student hour of arrival(hours):";
    cin >> arhr;
    cout << "Enter Student minutes of arrival(minutes):";
    cin >> armin;

string out;
    out=checkstdstatus(hr,min,arhr,armin);
    cout << out;

}
string checkstdstatus(int hr,int min,int arhr,int armin)
{
int exammin,stdmin,diff;
string result;

exammin=(hr*60)+min; 
stdmin=(arhr*60)+armin; 

diff=stdmin-exammin; //Taking difference of arrival time and exam time.

if(diff==0){ //Arrival time=Exam start time
    result="On time\n";}

else if(diff>0){
    if(diff>=60){
    result="Late\n" +to_string(diff/60)+ " hours and " +to_string(diff%60)+ " minutes after the start";}
    else{
    result="Late\n" +to_string(diff)+ " minutes after the start";}
}

else{
int early = -diff;
if(early<=30){ //30 mins before test time case
    result="On time\n" +to_string(early)+ " minutes before the start";}
        else if(early >= 60) {
            result="Early\n" +to_string(early/60) + " hours and " + to_string(early%60) + " minutes before the start";}
        else{
            result="Early\n" +to_string(early) + " minutes before the start";
        }
}
return result;
}

