// #include<iostream>
// using namespace std;
// class MyString
// {
// public:
// //MyString();
// //MyString(const char *str);
// void show()
// {
//     cout<<m_str<<endl;
//     cout<<m_len<<endl;
// }
// MyString() :m_len{1}
// {
//     m_str = new char[1];
//     *m_str =  '\0';
// }
// MyString(cont char *str)
// {
//    m_len = strlen(ptr);
//    m_str = new char[m_len +1];
//    memcpy(m_str,ptr,m_len +1);
//    cout<<m_str<<endl;
// };
// private:
// char *str;
// int len;
// };
// int main()
// {
//     MyString str;
//     MyString str1 = "nitin";
//     //string name = "ABCD";
//     //cout<<"nitin"<<endl;
//     str.show();
//     getchar();
//     return 0;
// }
#include <iostream>
#include <cstring> // for strlen and memcpy
using namespace std;

class MyString {
public:
    // Show method to print the string and length
    void show() {
        cout << m_str << endl;
        cout << m_len << endl;
    }

    // Default constructor
    MyString() : m_len{1}
     {
        m_str = new char[1];
        m_str[0] = '\0';
    }

    // Constructor from C-string
    MyString(const char *str) {
        m_len = strlen(str);
        m_str = new char[m_len + 1];
        memcpy(m_str, str, m_len + 1);
    }

    // Destructor to free memory
    ~MyString() {
        delete[] m_str;
    }

private:
    char *m_str;
    int m_len;
};

int main() {
    MyString str;
    MyString str1 = "nitin";
    str.show();
    str1.show();  // <-- Added this to show str1 too
    return 0;
}
