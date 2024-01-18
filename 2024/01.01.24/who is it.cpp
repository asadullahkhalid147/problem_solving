#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char ch;
    int num;
};
int main()
{
    Student a, b, c;

    cin>>a.id;
    getchar();
    cin.getline(a.name,100);
    cin>>a.ch>>a.num;


    cin>>b.id;
    getchar();
    cin.getline(b.name,100);
    cin>>b.ch>>b.num;


    cin>>c.id;
    getchar();
    cin.getline(c.name,100);
    cin>>c.ch>>c.num;


    cout<<a.id<<" "<<a.name<<" "<<a.ch<<" "<<a.num<<endl;
    cout<<b.id<<" "<<b.name<<" "<<b.ch<<" "<<b.num<<endl;
    cout<<c.id<<" "<<c.name<<" "<<c.ch<<" "<<c.num<<endl;


}
