#include<iostream>
using namespace std;
int calculatevolleyballgames(string year,int holidays,int travelweekends);
int main()
{
    string year;
    int holidays,travelweekends,result;

    cout<<"Enter year type(leap or normal):";
    cin>> year;
    cout<<"Enter the number of holidays:";
    cin>> holidays;
    cout<<"Enter the number of weekends:";
    cin>> travelweekends;

    result=calculatevolleyballgames(year,holidays,travelweekends);
    cout<<result;
}
int calculatevolleyballgames(string year,int holidays,int travelweekends)
{
    //4*12=48
 int yearweekends=48;
 int pweekends,sofiaweekends,holidayplay,sofiaplay,totalplay;


    if (year=="normal"){

    //for weekends in sofia
    sofiaweekends=yearweekends-travelweekends; 

      holidayplay=holidays*(0.667);
      sofiaplay=sofiaweekends*(0.75);

totalplay=holidayplay+sofiaplay+travelweekends;
 }

   else if(year=="leap"){

pweekends=yearweekends*0.15; 
yearweekends=yearweekends+pweekends;

    sofiaweekends=yearweekends-travelweekends; 
    holidayplay=holidays*(0.667);
    sofiaplay=sofiaweekends*(0.75);

totalplay=holidayplay+sofiaplay+travelweekends;
}
return totalplay;

}