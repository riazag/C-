#include <iostream>
using namespace std;

// Function to display the available options for a category
void displayOptions(string category, string itemCode[], string description[], double price[], int size)
{
    cout << "Available Options for " << category << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << itemCode[i] << " - " << description[i] << " ($" << price[i] << ")" << endl;
    }
}

int main()
{
    const int SIZE = 3;           // Number of options for each category
    const int NUM_CATEGORIES = 7; // Number of categories

    // Arrays to store options for each category
    string category[NUM_CATEGORIES] = {"Case", "RAM", "Main HDD", "SSD", "2nd HDD", "Optical Drive", "OS"};
    string itemCode[NUM_CATEGORIES][3] = {{"A1", "A2", "A3"},
                                          {"B1", "B2", "B3"},
                                          {"C1", "C2", "C3"},
                                          {"D1", "D2", "D3"},
                                          {"E1", "E2", "E3"},
                                          {"F1", "F2", "F3"},
                                          {"G1", "G2", "G3"}};
    string description[NUM_CATEGORIES][3] = {{"Compact", "Tower", "Mini"},
                                             {"8 GB", "16 GB", "32 GB"},
                                             {"1 TB HDD", "2 TB HDD", "4 TB HDD"},
                                             {"240 GB SSD", "480 GB SSD", "1 TB SSD"},
                                             {"1 TB HDD", "2 TB HDD", "4 TB HDD"},
                                             {"DVD/Blu-Ray Player", "DVD/BluRay Re-writer", "None"},
                                             {"Standard Version", "Professional Version", "Enterprise Version"}};
    double price[NUM_CATEGORIES][3] = {{75.00, 150.00, 100.00},
                                       {79.99, 149.99, 299.99},
                                       {49.99, 89.99, 129.99},
                                       {59.99, 119.99, 199.99},
                                       {49.99, 89.99, 129.99},
                                       {50.00, 100.00, 0.00},
                                       {100.00, 175.00, 250.00}};

    // Arrays to store the user's choices
    string chosenItems[NUM_CATEGORIES];
    double chosenPrices[NUM_CATEGORIES] = {0.0};

    int choice; // Declare choice here

    // Display options and get user's choices
    for (int i = 0; i < NUM_CATEGORIES; i++)
    {
        cout << "Do you want to add an item from " << category[i] << "? (1 for Yes, 0 for No): ";
        cin >> choice; // Use choice without redeclaration

        if (choice == 1)
        {
            cout << "Choose one item from " << category[i] << ":" << endl;
            displayOptions(category[i], itemCode[i], description[i], price[i], SIZE);
            cin >> choice; // Use choice without redeclaration
            chosenItems[i] = description[i][choice - 1];
            chosenPrices[i] = price[i][choice - 1];
        }
    }

    // Calculate total price
    double basicComponentsPrice = 200.00;
    double totalPrice = basicComponentsPrice;
    for (int i = 0; i < NUM_CATEGORIES; i++)
    {
        totalPrice += chosenPrices[i];
    }

    // Display chosen items and total price
    cout << "Chosen Items:" << endl;
    for (int i = 0; i < NUM_CATEGORIES; i++)
    {
        if (!chosenItems[i].empty())
        {
            cout << category[i] << ": " << chosenItems[i] << " ($" << chosenPrices[i] << ")" << endl;
        }
    }

    // Allow the customer to choose additional items
    cout << "Do you want to purchase items from other categories? (1 for Yes, 0 for No): ";
    int additionalChoice;
    cin >> additionalChoice;

    if (additionalChoice == 1)
    {
        // Allow the customer to choose additional items
        cout << "Choose additional items:" << endl;
        for (int i = 0; i < NUM_CATEGORIES; i++)
        {
            if (chosenItems[i].empty())
            {

                cout << "Choose one item from " << category[i] << ":" << endl;
                displayOptions(category[i], itemCode[i], description[i], price[i], SIZE);
                cin >> choice; // Use choice without redeclaration
                chosenItems[i] = description[i][choice - 1];
                chosenPrices[i] = price[i][choice - 1];
            }
        }

        // Recalculate the total price
        totalPrice = basicComponentsPrice;
        for (int i = 0; i < NUM_CATEGORIES; i++)
        {
            totalPrice += chosenPrices[i];
        }

        // Display the chosen items and the updated total price
        cout << "Chosen Items (including additional items):" << endl;
        for (int i = 0; i < NUM_CATEGORIES; i++)
        {
            if (!chosenItems[i].empty())
            {
                cout << category[i] << ": " << chosenItems[i] << " ($" << chosenPrices[i] << ")" << endl;
            }
        }
        cout << "Updated Total Price: $" << totalPrice << endl;
    }

    return 0;
}
