#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int marks;
    Student(int roll, int marks)
    {
        this->roll = roll;
        this->marks = marks;
    }
};

bool cmp(Student a, Student b)
{
    if (a.roll > a.roll)
    {
        return true;
    }
    else if (a.roll < b.roll) return false;
    else{
        if(a.roll < b.roll) return true;
        else return false;
    }
}

int main()
{

    int n;
    cin >> n;
    vector<Student> v;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        v.push_back(Student(roll, marks));
    }
    sort(v.begin(), v.end(), cmp); 
    for (auto x : v)
    {
        cout << x.roll << " " << x.marks << endl;
    }

    return 0;
}