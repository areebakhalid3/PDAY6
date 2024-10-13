#include<iostream>
using namespace std;
string decideactivity(string temp,string hum);

int main(){

string temp,hum;
     
    cout << "Enter temperature(warm or cold): ";
    cin >> temp;

    cout << "Enter humidity(dry or humid):";
    cin >> hum;

string activity=decideactivity(temp,hum);
 cout << "Recommended activity:" <<activity<<endl;

    return 0;
}

string decideactivity(string temp,string hum)
{

string act;

if(temp=="warm"){
    if(hum=="dry"){
        act=" Play tennis";
    }

    else if(hum=="humid"){
        act=" swim";
    }
    else {
        act = "Invalid humidity input";
    }
}

else if(temp=="cold"){
    if(hum=="dry"){
        act=" Play basketball";
    }

    else if(hum=="humid"){
        act=" Watch tv";
    }
    else {
        act = "Invalid humidity input";
    }
}

else{
    act="Invalid temperature input.";
}

return act;
}
