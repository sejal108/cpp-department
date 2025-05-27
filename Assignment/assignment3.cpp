#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    string description;
    int nocandidate;
    //int number;
    float calcenter()
    {
        return nocandidate/(100+1);
    }
   public:
   void schedule()
   {
        cin>>testcode;
        cin>>description;
        cin>>nocandidate;
        cout<<"the no. of centers are"<<" "<<calcenter()<<endl;
        //cin>>notout;
        //cin>>runs;
   }
   void disptest()
   {
        cout<<"testcode is "<<testcode<<endl;
        cout<<"description is  "<<description<<endl;
        cout<<"nocandidate is  "<<nocandidate<<endl;
        //cout<<"innings is "<<innings<<endl;
        ///cout<<"notout is "<<notout<<endl;
   }


};
int main()
{
    test t;
    cout<<"enter the details"<<endl;
   // t.disptest();
    t.schedule();
    return 0;
}