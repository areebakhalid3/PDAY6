#include<iostream>
using namespace std;
string findzodiacsign(int date,string mon);

int main(){

int date;
string mon;

cout << "Enter the date of birth:";
cin >> date;
cout << "Enter the month of birth(e.g., January, February):";
cin >> mon;

cout << "People born on this data have zodiac " <<findzodiacsign(date,mon)<<endl;

return 0;
}

string findzodiacsign(int date,string mon)
{
 string sign;

    if(mon=="March" && date>=21 && date<=31 || mon=="April" && date>=1 && date<=19){
    sign="Aries";
    }
    else if(mon=="April" && date>=20 && date<=30 || mon=="May" && date>=1 && date<=20){
    sign="Taurus";
    }
    else if(mon=="May" && date>=21 && date<=31 || mon=="June" && date>=1 && date<=20){
    sign="Gemini";
    }
    else if(mon=="June" && date>=21 && date<=30 || mon=="July" && date>=1 && date<=22){
    sign="Cancer";
    }
    else if(mon=="July" && date>=23 && date<=31 || mon=="August" && date>=1 && date<=22){
    sign="Leo";
    }
    else if(mon=="August" && date>=23 && date<=31 || mon=="September" && date>=1 && date<=22){
    sign="Virgo";
    }
    else if(mon=="September" && date>=23 && date<=30 || mon=="October" && date>=1 && date<=22){
    sign="Libra";
    }
    else if(mon=="October" && date>=23 && date<=31 || mon=="November" && date>=1 && date<=21){
    sign="Scorpio";
    }
    else if(mon=="November" && date>=22 && date<=30 || mon=="December" && date>=1 && date<=21){
    sign="Sagittarius";
    }
    else if(mon=="December" && date>=22 && date<=31 || mon=="January" && date>=1 && date<=19){
    sign="Capricorn";
    }
    else if(mon=="January" && date>=20 && date<=31 || mon=="February" && date>=1 && date<=18){
    sign="Aquarius";
    }
    else if(mon=="February" && date>=19 && date<=29 || mon=="March" && date>=1 && date<=20){
    sign="Pisces";
    }

return sign;
}