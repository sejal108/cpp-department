//Q1
#include<iostream>
using namespace std;
class student
{
    public:
    void takedata()
    {
        cin>>admno;
        cin>>m_name;
        cin>>math;
        cin>>science;
        cin>>english;
        
    }
    void showdata()
    {
        cout<<"adminno is "<<admno<<endl;
        cout<<"name is  "<<m_name<<endl;
        cout<<"math is  "<<math<<endl;
        cout<<"science is "<<science<<endl;
        cout<<"english is "<<english<<endl;
        cout<<"total marks is"<<ctotal()<<endl;
    }
    private:
    int admno;
    string m_name;
    float math,science,english,total;
    int ctotal()
    {
       int result;
       result = math+science+english;
       return result;
    }

};
int main()
{
    student s;
    cout<<"enter the details"<<endl;
    s.takedata();
    s.showdata();
    return 0;
}