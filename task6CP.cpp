#include<iostream>
#include<string>
using namespace std;
string calculatehotelprices(string mon,int stays);

int main(){

string mon;
int stays;

    cout << "Enter the month(May,June,July,August,September,October):";
    cin >> mon;
    cout << "Enter the number of stays(0-200):";
    cin >> stays;

string result=calculatehotelprices(mon,stays);
cout << result;

return 0;
}

string calculatehotelprices(string mon,int stays)
{
float priceapt=0.0,pricest=0.0,discpr=0.0,discpr1=0.0;
string type;

if(mon=="july" ||mon=="July" ||mon=="august"||mon=="August"){
    pricest=76*stays;
    priceapt=77*stays;}

else if(mon=="may" ||mon=="May" ||mon=="october"||mon=="October"){

    pricest=50*stays;
    priceapt=65*stays;

    if(stays>7&&stays<=14){
       pricest=pricest-(0.05*pricest);
    }
    else if(stays>14){
       pricest=pricest-(0.30*pricest);
    }
}

else if(mon=="june" ||mon=="June" ||mon=="september"||mon=="September"){ 

    pricest=75.20*stays;
    priceapt=68.70*stays;

    if(stays>14){
    pricest=pricest-(0.20*pricest);
    }
}

if(stays>14){
    priceapt=priceapt-(0.10*priceapt);}

string result="Apartment: " +to_string(priceapt)+"$.\n" + "Studio: " +to_string(pricest)+"$.";


return result;
}
