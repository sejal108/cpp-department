 //function overloading
// #include<iostream>
// using namespace std;
// class sample
// {
//      public:

// int add(int a, int b, int c)
// {
//         return a+b+c;
// }
    

// int add(int a, int b)
// {
//         return a+b;
// }

// };
// int main()
// {
//    sample s;
//     cout << "s.add(10,20) = " << s.add(10, 20) << endl;
//     cout << "s.add(1,2,3) = " << s.add(1, 2, 3) << endl;
//     return 0;
// }




// setting parameters
// #include<iostream>
// using namespace std;

// class sample 
// {
//     int m_a;
//     int m_b;
// public:
// sample(int a, int b) 
// {
//     m_a=a;
//     m_b=b;
// }//: m_a(0), m_b(0) {}
// //sample(int a, int b) : m_a(a), m_b(b) {} 
//     void show()
//     {
//         cout<<"value of a is "<<m_a<<" "<<"value of b is"<<m_b<<endl; 
//     }
//     void setA(int k)
//     {
//         m_a = k;
//     }
//     void setB(int k)
//     {
//         m_b = k;
//     }

// };

// int main()
// {
//     sample obj(10,89);
//     obj.show();
//     obj.setA(10);
//     obj.setB(20);
//     obj.show();
//     sample obj2(100, 200); // Another object with different initialization
//     obj2.show();
//    getchar();
//     return 0;
// }



//constructors
// #include<iostream>
// using namespace std;
// class sample
// {
//     int m_a;
//     int m_b;
// public:

// sample(int u , int f)

// {
//     cout<<"inside default constrctor "<<endl;
//     m_a =u;
//     m_b =f;
// }
// void show()
// {
//     cout<<"the value of a is "<<m_a<<" the value of b is "<<m_b<<endl;
// }
// void setA(int k)
// {
//     m_a=k;
// }
// void setB(int k)
// {
//     m_b=k;
// }
// sample()= default;
// };
// int main()
// {
//     sample obj(1,2);
//       sample obj1;
//     obj.show();
//     obj.setA(10);
//     obj.setB(20);
//     obj.show();
//     return 0;
// }

//session3 
// #include<iostream>
// using namespace std;
// class employee
// {
//     private:
//     int m_salary;
//     int m_age;
//     string m_name;
//     string m_department;

//     public:
//   // employee()=default;


//      employee(string m_name,int m_age,int m_salary,string m_department)
//     {
//         cout<<"name:"<<m_name<<"  "<<"age:"<<m_age<<"  "<<m_salary<<"  "<<m_department<<endl;
//     }
//     void show()
//     {
//         cout<<"name:"<<m_name<<"  "<<"age:"<<m_age<<"  "<<"salary"<<m_salary<<"  "<<"department"<<m_department<<endl;
//     }

//     void setage(double new_age)
//     {
//         m_age=new_age;
//     }


// };
// void fun(employee *p)
// {
//     p->setage(88.8);
// }

    
// int main()
// {
//     employee s("Sejal",24,700000,"parking");
//     s.show();
//     fun(&s);
//     //s.show();
//     getchar();
//     return 0;
// }

// passing obj as parameter to fun & pass by v and r mistake code is above
//befor is pass by v
#include <iostream>
using namespace std;

class employee {
private:
    int m_salary;
    int m_age;
    string m_name;
    string m_department;

public:
    // ✅ Correct constructor: use initializer list
    employee(string name, int age, int salary, string department)
        : m_name(name), m_age(age), m_salary(salary), m_department(department) {}

    // ✅ Show all fields properly labeled
    void show() {
        cout << "name: " << m_name
             << "  age: " << m_age
             << "  salary: " << m_salary
             << "  department: " << m_department << endl;
    }

    // Setter for age
    void setage(int new_age) {
        m_age = new_age;
    }
};

// ✅ Global function to modify age
int fun(employee *p) {
    p->setage(88);
    return 0;
}

int main() {
    employee s("Sejal", 24, 700000, "parking");
    s.show();     // Shows initial state
    fun(&s);      // Changes age to 88
    s.show();     // Shows updated state
    return 0;
}

