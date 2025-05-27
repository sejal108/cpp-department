//Q2
#include<iostream>
using namespace std;
class batman
{
    private:
    int bcode;
    string m_bname;
    int innings,notout,runs;
    float calavg()
    {
         float batavg;
         batavg=(runs/(innings-notout));
         return batavg;
    }
    public:
    void readdata()
    {
        cin>>bcode;
        cin>>m_bname;
        cin>>innings;
        cin>>notout;
        cin>>runs;
    }
    void display()
    {
        cout<<"bcode is "<<bcode<<endl;
        cout<<"bname is  "<<m_bname<<endl;
        cout<<"runs is  "<<runs<<endl;
        cout<<"innings is "<<innings<<endl;
        cout<<"notout is "<<notout<<endl;
        cout<<"average is"<<calavg()<<endl;
    }
};
int main()
{
    batman b;
    b.readdata();
    b.display();
    return 0;
}