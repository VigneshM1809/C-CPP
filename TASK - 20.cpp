#include<iostream>
using namespace std;
template<class T>
class Data
{
private:
    T num;
public:
    void getData()
    {
        cout<<"Enter The Number:";
        cin>>num;
    }
    void displayData()
    {
        cout<<"Number:"<<num<<endl;
        cout<<endl;
    }
};
int main()
{
    Data<int> d;
    Data<char [20]> d1;
    Data<float> d2;
    d.getData();
    d.displayData();
    d1.getData();
    d1.displayData();
    d2.getData();
    d2.displayData();
    return 0;
}

