#include<iostream>
using namespace std;
class rectangle
{
    float length,width;
    public:
    void setlength(float l)
    {
        length=l;
    }
    void setwidth(float w)
    {
        width=w;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
    float area()
    {
        return length*width;
    }
    void show()
    {
        cout<<"the perimeter is"<<"  "<<perimeter()<<endl;
        cout<<"the area is"<<"  "<<area()<<endl;
    }
    int samearea(rectangle other)
    {
        if (this->area() == other.area())
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};
int main()
{
    rectangle r1,r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
    r1.show();
    r2.show();
    if (r1.samearea(r2))
    {
        cout << "Both rectangles have the same area." << endl;
    } else 
    {
        cout << "The rectangles have different areas." << endl;
    }
    return 0;

}