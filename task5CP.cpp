#include<iostream>
using namespace std;

float calculateprice(string fr,string day,double qty);

int main(){
    string fr,day;
    double qty;
    float result;
    
    cout << "Enter the fruit name: ";
    cin  >> fr;
    cout << "Enter the day of the week(e.g. Monday, Sunday):";
    cin  >> day;
    cout << "Enter the quantity: " ;
    cin  >> qty;

    result = calculateprice(fr,day,qty);
    cout << "Price: $" << result <<endl;

return 0;

}      
float calculateprice(string fr,string day,double qty)
{

float price=0.0;

if(day == "Monday"||day=="monday"||day == "Tuesday"||day=="tuesday"||day == "Wednesday"||day=="wednesday"||day == "Thursday"||day=="thursday"||day == "Friday"||day=="friday")
{
    if(fr=="banana"|| fr=="Banana"){
        price = qty * 2.50;}
    else if(fr=="apple"|| fr=="Apple" ){
        price = qty * 1.20;}
    else if(fr=="orange"|| fr=="Orange" ){
        price = qty * 0.85;}
    else if(fr=="grapefruit"|| fr=="Grapefruit" ){
        price = qty * 1.45;}
    else if(fr=="kiwi" || fr=="Kiwi"){
        price = qty * 2.70;}
    else if(fr=="pineapple" || fr=="Pineapple" ){
        price = qty * 5.50;}
    else if(fr=="grapes" || fr=="Grapes" ){
        price = qty * 3.85;} 
    else{
    cout << "Error! You entered " << fr << " which is invalid.";}

return price;}
else if(day == "Saturday"||day=="saturday"||day == "Sunday"||day=="sunday"){
     
    if(fr=="banana"|| fr=="Banana"){
        price = qty * 2.70;}
    else if(fr=="apple"|| fr=="Apple" ){
        price = qty * 1.25;}
    else if(fr=="orange"|| fr=="Orange" ){
        price = qty * 0.90;}
    else if(fr=="grapefruit"|| fr=="Grapefruit" ){
        price = qty * 1.60;}
    else if(fr=="kiwi" || fr=="Kiwi"){
        price = qty * 3.00;}
    else if(fr=="pineapple" || fr=="Pineapple" ){
        price = qty * 5.60;}
    else if(fr=="grapes" || fr=="Grapes" ){
        price = qty * 4.20;} 
    else
    {
    cout << "Error! You entered " << fr << " which is invalid.";}

return price;
}

else{
    cout << "Error! You entered " << day << " which is invalid.";
    }

}