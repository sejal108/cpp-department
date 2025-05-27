#include<iostream>
using namespace std;
class travel
{
    private:
    int flight_no;
    string destination;
    float distance,fuel;
   int calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
            cout<<"fuel cost is "<<fuel<<endl;
        }
        else if(distance >=1000 && distance <=2000)
        {
           fuel=1100;
           cout<<"fuel cost is "<<fuel<<endl;
        }
        else
        {
            fuel = 2200;
            cout<<"fuel cost is "<<fuel<<endl;;

        }
    }
    public:
    void feedinfo()
    {
        cin>>flight_no;
        cin>>destination;
        cin>>distance;
        cout<<"the fuel required is"<<" "<<fuel<<endl;
        calfuel();
    }
    void showinfo()
    {
        cout<<"flight number is "<<flight_no<<endl;
        cout<<"destination  "<<destination<<endl;
        cout<<"distance is  "<<distance<<endl;
        cout<<"cost of the fuel required is"<<fuel<<endl;
    }
};
int main()
{
    travel t;
    cout<<"enter the details"<<endl;
    t.feedinfo();
    t.showinfo();
    return 0;
}
