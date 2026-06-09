#include <iostream>
using namespace std;

int main()
{
    string expense[3];
    float amount[3];
    float total = 0;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter Expense Name: ";
        cin>>expense[i];

        cout<<"Enter Amount: ";
        cin>>amount[i];

        total += amount[i];
    }
    cout<<"\nExpenses:\n";

    for(int i=0;i<3;i++)
    {
        cout<<expense[i]<<" : Rs. "<<amount[i]<<endl;
    }
    cout<<"\nTotal Expense = Rs. "<<total;

    return 0;
}