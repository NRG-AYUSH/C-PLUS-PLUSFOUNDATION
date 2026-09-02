#include <iostream>
using namespace std;
class CabBooking
{
private:
    string riderName;
    float distancePerKm;
    float ratePerKm;
    float totalFare;

public:
    CabBooking() {}
    CabBooking(string name, float dist, float rate)
    {

        riderName = name;
        distancePerKm = dist;
        ratePerKm = rate;
        totalFare = dist * rate;
    }
    CabBooking(string name, float dist, float rate, int discountPercent)
    { riderName = name;
        distancePerKm = dist;
        ratePerKm = rate;
        totalFare = (dist * rate);
        totalFare -= ((totalFare * discountPercent) / 100);
    }
    void DisplayReciept()
    {
        cout << "NAME OF RIDER: " << riderName << endl;
        cout << "Distance: " << distancePerKm << endl;
        cout << "Rate per Km: " << ratePerKm << endl;
        cout << "Total Fare: " << totalFare << endl;
    }
};
int main()
{
    int a;
    cout << "PRESS 1 FOR STANDARD OR 2 FOR THE PROMO" << endl;
    cin >> a;
    string name;
    float distance;
    if (a == 1)
    {
        cout << "ENTER NAME,ENTER DISTANCE IN KM" << endl;
        cin >> name >> distance;
        CabBooking b1(name, distance, 5.0);
        b1.DisplayReciept();
    }
    else
    {
        int discount;
        cout << "ENTER NAME,ENTER DISTANCE IN KM" << endl;
        cin >> name >> distance;
        if (distance < 5)
{
    discount = 0;
}
else if (distance <= 10) 
{
    discount = 5;
}
else
{
    discount = 7; 
}
        CabBooking b2(name, distance, 5.0, discount);
        b2.DisplayReciept();
    }
    return 0;
}