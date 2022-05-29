#include <iostream>
using namespace std;

int main()
{
    int rooms, item1, item2, item3;
    cout << "Enter no of rooms: " << endl;
    cin >> rooms;
    cout << "Enter quanity of item 1:" << endl;
    cin >> item1;
    cout << "Enter quanity of item 2:" << endl;
    cin >> item2;
    cout << "Enter quanity of item 3:" << endl;
    cin >> item3;

    // sales
    int room_sales = 0, i1_sales = 0, i2_sales = 0, i3_sales = 0;

    while (true)
    {
        int choice;
        cout << "\nSelect your choice: \n";
        cout << "1) Room    Price: Rs2000\n";
        cout << "2) Item 1    Price: Rs200\n";
        cout << "3) Item 2    Price: Rs300\n";
        cout << "4) Item 3    Price: Rs500\n";
        cout << "5) Sales and collection\n";
        cout << "6) Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter the number of rooms required:\n";
            int rooms_query;
            cin >> rooms_query;
            if (rooms >= rooms_query)
            {
                cout << rooms_query << " rooms have been allocated\n";
                rooms -= rooms_query;
                room_sales += rooms_query;
            }
            else
            {
                cout << "Sorry! Not enough rooms.\n";
            }
        }

        else if (choice == 2)
        {
            cout << "Enter the number of item1 required:\n";
            int i1_query;
            cin >> i1_query;
            if (item1 >= i1_query)
            {
                cout << i1_query << " item1 have been allocated\n";
                item1 -= i1_query;
                i1_sales += i1_query;
            }
            else
            {
                cout << "Sorry! Not enough item.\n";
            }
        }

        else if (choice == 3)
        {
            cout << "Enter the number of item2 required:\n";
            int i2_query;
            cin >> i2_query;
            if (item2 >= i2_query)
            {
                cout << i2_query << " item2 have been allocated\n";
                item2 -= i2_query;
                i2_sales += i2_query;
            }
            else
            {
                cout << "Sorry! Not enough item.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Enter the number of item3 required:\n";
            int i3_query;
            cin >> i3_query;
            if (item3 >= i3_query)
            {
                cout << i3_query << " item3 have been allocated\n";
                item3 -= i3_query;
                i3_sales += i3_query;
            }
            else
            {
                cout << "Sorry! Not enough item.\n";
            }
        }

        else if (choice == 5)
        {
            int room_income = room_sales * 2000;
            int i1_income = i1_sales * 200;
            int i2_income = i2_sales * 300;
            int i3_income = i3_sales * 500;

            cout << "\n Sales today: \n";
            cout << "Rooms sold: " << room_sales << "| Income: " << room_income << endl;
            cout << "Item1 sold: " << i1_sales << "| Income: " << i1_income << endl;
            cout << "Item2 sold: " << i2_sales << "| Income: " << i2_income << endl;
            cout << "Item3 sold: " << i3_sales << "| Income: " << i3_income << endl;
            cout << "Total sales of the day: " << room_income + i1_income + i2_income + i3_income;
            cout << endl;
        }
        else if (choice == 6)
        {
            return 0;
        }
        else
        {
            cout << "Please enter a valid number \n";
        }
    }

    return 0;
}