#include <iostream>
using namespace std;
string checkpointposition(int h, int x, int y);
int main()
{
    int h,x,y;

    cout << "Enter height:";
    cin >> h;
    cout << "Enter x coordinate:";
    cin >> x;
    cout << "Enter y coordinate:";
    cin >> y;

    string result=checkpointposition( h, x, y);
    cout << result;
}
string checkpointposition(int h, int x, int y)
{
 string point;
 int x1,x2,y1;

    x1=3*h;
    x2=2*h;
    y1=4*h;

// for points inside the given figure
    if (y>0 && y<h && x>0 && x<x1 || y<y1 && x>h && x<x2) 
    { 
        point ="Inside";
    }
    else if ((y==0 && x<x1) || (y==h && x<x1) || (x==0 && y<=h) || (x==h && y<=y1) || (x==x2 && y<=y1) || (x==x1 && y<=h ))
    // for points on border of given figure 
    { 
        point ="Border";
    }
    else //points outside 
    {
        point="Outside";
    }
    return point;
}