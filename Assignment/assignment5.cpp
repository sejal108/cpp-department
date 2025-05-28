#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    string booktitle;
    float price;
    
   float totalcost(int n)
    {
        return price*n;
    }
    public:
    void input()
    {
        cout << "enter book name" <<endl;
        cin >> booktitle;
        cout<<"enter book number"<<endl;
        cin>>bookno;
        cout<<"enter book price"<<endl;
        cin>>price;
    }
    int purchase()
    {
        int copies;
        cout<<"enter the no. of books"<<endl;
        cin>>copies;
        cout<<"the total cost is"<<totalcost(copies)<<endl;
    }
};
int main()
{
    book b;
    b.input();
    b.purchase();
    return 0;
}
