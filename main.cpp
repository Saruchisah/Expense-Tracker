#include <iostream>
using namespace std;

int main()
{
    string expense[100];
    float amount[100];
    int count = 0;
    int choice;
    float total = 0;

    do
    {
        cout << "\n===== EXPENSE TRACKER =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Show Total Expense\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Expense Name: ";
                cin >> expense[count];

                cout << "Enter Amount: ";
                cin >> amount[count];

                total += amount[count];
                count++;

                cout << "Expense Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- Expense List -----\n";

                if(count == 0)
                {
                    cout << "No Expenses Added Yet!\n";
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << i + 1 << ". "
                             << expense[i]
                             << " - Rs. "
                             << amount[i]
                             << endl;
                    }
                }
                break;

            case 3:
                cout << "\nTotal Expense = Rs. "
                     << total << endl;
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
