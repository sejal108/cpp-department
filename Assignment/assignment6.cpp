#include<iostream>
using namespace std;
class report
{
    int m_adno;
    string m_name;
    float marks[5];
    float avg;
    float getavg(float marks[],int size)
    {
       float sum=0;
       int i;
       for(i=0;i<size;i++)
       {
        sum=sum+marks[i];
       }
       return sum / size;
    }
    public:
    void readinfo()
    {
      cout<<"enter the adno"<<endl;
      cin>>m_adno;
      cout<<"enter the name"<<endl;
      cin>>m_name;
     cout << "Enter 5 marks:\n";
     for (int i = 0; i < 5; i++) 
    {
        cout << "Marks " << i + 1 << ": ";
        cin >> marks[i];

    }
}
void display()
{
    cout<<"the adno is"<<m_adno<<endl;
    cout<<"the name is "<<m_name<<endl;
    cout<<"the average is"<<getavg(marks,5)<<endl;
}

};
int main()
{
   report r;
   r.readinfo();
   r.display();
   return 0;
}