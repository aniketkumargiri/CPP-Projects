// Basic Hotel Management System using C++ & Terminal.
#include <iostream>
using namespace std;

int main()
{
    int Quantity;
    int Price;
    int Choice;

    // Qunatity
    int Quantity_Rooms = 0;
    int Quantity_Pizza = 0;
    int Quantity_Burger = 0;
    int Quantity_Noodles = 0;
    int Quantity_Shake = 0;
    int Quantity_Chicken = 0;

    // Sold food items
    int Sold_Rooms = 0;
    int Sold_Pizza = 0;
    int Sold_Burger = 0;
    int Sold_Noodles = 0;
    int Sold_Shake = 0;
    int Sold_Chicken = 0;

    // total price of items
    int Total_Rooms = 0;
    int Total_Pizza = 0;
    int Total_Burger = 0;
    int Total_Noodles = 0;
    int Total_Shake = 0;
    int Total_Chicken = 0;

    cout << "\n\t Quantity of items we have in a Hotel";
    cout << "\n Rooms available: ";
    cin >> Quantity_Rooms;
    cout << "\n Quantity of Pizza: ";
    cin >> Quantity_Pizza;
    cout << "\n Quantity of Burger: ";
    cin >> Quantity_Burger;
    cout << "\n Quantity of Noodles: ";
    cin >> Quantity_Noodles;
    cout << "\n Quantity of Shake: ";
    cin >> Quantity_Shake;
    cout << "\n Quantity of Chicken: ";
    cin >> Quantity_Chicken;

// goto label menu
m:
    cout << "\n\t\t\t Please select from the Menu options: ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pizza";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken";
    cout << "\n7) Information regarding Sales and Collections: ";
    cout << "\n8) Exit";

    cout << "\n\n Please Enter your Choice! ";
    cin >> Choice;

    // switch case
    switch (Choice)
    {
    case 1:
        cout << "\n\n Enter the number of Rooms you want: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of each Room: ";
        cin >> Price;

        if (Quantity_Rooms - Sold_Rooms >= Quantity)
        {
            Sold_Rooms = Sold_Rooms + Quantity;
            Total_Rooms = Total_Rooms + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Room/Rooms have been alloted to you!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Rooms - Sold_Rooms << " Rooms remaining in Hotel";
        }
        break;

    case 2:
        cout << "\n\n Enter Pizza Quantity: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of each Pizza: ";
        cin >> Price;

        if (Quantity_Pizza - Sold_Pizza >= Quantity)
        {
            Sold_Pizza = Sold_Pizza + Quantity;
            Total_Pizza = Total_Pizza + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Pizza is the order!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Pizza - Sold_Pizza << " Pizza remaining in Hotel";
        }
        break;

    case 3:
        cout << "\n\n Enter Burger Quantity: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of each Burger: ";
        cin >> Price;

        if (Quantity_Burger - Sold_Burger >= Quantity)
        {
            Sold_Burger = Sold_Burger + Quantity;
            Total_Burger = Total_Burger + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Burger is the order!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Burger - Sold_Burger << " Burgers remaining in Hotel";
        }
        break;

    case 4:
        cout << "\n\n Enter Noodles Quantity: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of Noodles: ";
        cin >> Price;

        if (Quantity_Noodles - Sold_Noodles >= Quantity)
        {
            Sold_Noodles = Sold_Noodles + Quantity;
            Total_Noodles = Total_Noodles + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Noodles is the order!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Noodles - Sold_Noodles << " Noodles remaining in Hotel";
        }
        break;

    case 5:
        cout << "\n\n Enter Shakes Quantity: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of each shake: ";
        cin >> Price;

        if (Quantity_Shake - Sold_Shake >= Quantity)
        {
            Sold_Shake = Sold_Shake + Quantity;
            Total_Shake = Total_Shake + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Shakes is the order!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Shake - Sold_Shake << " Shakes remaining in Hotel";
        }
        break;

    case 6:
        cout << "\n\n Enter Chicken Quantity: ";
        cin >> Quantity;

        cout << "\n\n Enter the Price of each Chicken: ";
        cin >> Price;

        if (Quantity_Chicken - Sold_Chicken >= Quantity)
        {
            Sold_Chicken = Sold_Chicken + Quantity;
            Total_Chicken = Total_Chicken + Quantity * Price;
            cout << "\n\n\t\t" << Quantity << " Chicken is the order!";
        }
        else
        {
            cout << "\n\tOnly " << Quantity_Chicken - Sold_Chicken << " Chicken remaining in Hotel";
        }
        break;

    case 7:
        cout << "\n\t\tDetails of sales and collection: ";
        cout << "\n\n Number of Rooms we had: " << Quantity_Rooms;
        cout << "\n\n Number of Rooms we have for rent: " << Sold_Rooms;
        cout << "\n\n Remaining Rooms: " << Quantity_Rooms - Sold_Rooms;
        cout << "\n\n Total Rooms collection for the day: " << Total_Rooms;

        cout << "\n\n Number of Pizzas we had: " << Quantity_Pizza;
        cout << "\n\n Number of Pizzas we sold: " << Sold_Pizza;
        cout << "\n\n Remaining Pizzas: " << Quantity_Pizza - Sold_Pizza;
        cout << "\n\n Total Pizzas collection for the day: " << Total_Pizza;

        cout << "\n\n Number of Burgers we had: " << Quantity_Burger;
        cout << "\n\n Number of Burgers we sold: " << Sold_Burger;
        cout << "\n\n Remaining Burgers: " << Quantity_Burger - Sold_Burger;
        cout << "\n\n Total Burgers collection for the day: " << Total_Burger;

        cout << "\n\n Number of Noodles we had: " << Quantity_Noodles;
        cout << "\n\n Number of Noodles we sold: " << Sold_Noodles;
        cout << "\n\n Remaining Noodles: " << Quantity_Noodles - Sold_Noodles;
        cout << "\n\n Total Noodles collection for the day: " << Total_Noodles;

        cout << "\n\n Number of Shakes we had: " << Quantity_Shake;
        cout << "\n\n Number of Shakes we sold: " << Sold_Shake;
        cout << "\n\n Remaining Shakes: " << Quantity_Shake - Sold_Shake;
        cout << "\n\n Total Shakes collection for the day: " << Total_Shake;

        cout << "\n\n Number of Chicken we had: " << Quantity_Chicken;
        cout << "\n\n Number of Chicken we sold: " << Sold_Chicken;
        cout << "\n\n Remaining Chicken: " << Quantity_Chicken - Sold_Chicken;
        cout << "\n\n Total Chicken collection for the day: " << Total_Chicken;

        cout << "\n\n\n Total Collections for the day: " << Total_Rooms + Total_Pizza + Total_Burger + Total_Noodles + Total_Shake + Total_Chicken;
        break;

    case 8:
        exit(0);

    default:
        cout << "\n Please select the numbers mentioned above!";
        break;
    }

    goto m;

    return 0;
}