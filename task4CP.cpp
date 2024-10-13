#include<iostream>
using namespace std;
float am(char code,char dorn,int min);

int main(){

char code,dorn;
int min;

    cout << "Enter the service code(R/r for regular, P/p for premium):";
    cin >> code;

    if(code != 'r'&&code != 'R'&&code != 'P'&&code != 'p'){
        cout << "Error. Invalid code.";
        return 1;
    }

    if(code=='P' || code =='p'){
    cout << "Enter the time of the call(D/d for day, N/n for night):";
    cin >> dorn;
        
         if(dorn!= 'd'&&dorn!='D'&&dorn!='n'&&dorn!='N')
         { cout << "Error.Invalid code for the time of the call"<<endl;
        return 1;}
    }
    
    cout << "Enter the number of minutes used:";
    cin >> min;

     if(min<0){
        cout << "Error. Invalid minutes.";
        return 1;
    }

    float result;
    result= am(code,dorn,min);

    if(code=='R' || code=='r')
    {cout<<"Service type: Regular"<<endl;} 
    else if(code=='P' || code=='p')
    {cout<<"Service type: Premium"<<endl;}
    else{
        cout << "Error.Invalid code." <<endl;
        return 1;}


    cout << "Total Minutes Used: " << min << " minutes"<<endl;
    cout << "Amount Due: $" << result<<endl;

return 0;
}
float am(char code,char dorn,int min)
{

float amount=0.0;
float payable=0.0;

    if(code=='R' || code=='r'){
        if(min > 50){
        payable=min-50;
        amount=10.00+(payable*(0.20));
    }
    else{
        amount=10.00;}
    }

    if((code=='P' || code=='p') && (dorn =='D' || dorn=='d')){
              if(min > 75){
                payable=min-75;
                amount=25.00+(payable*(0.10));}
            else{amount=25.00;}
               }

    if((code=='P' || code=='p') && (dorn =='N' || dorn=='n')){
              if(min > 100){
                payable=min-100;
                amount=25.00+(payable*(0.05));}
            else{amount=25.00;}
               }
     
return amount;

}
