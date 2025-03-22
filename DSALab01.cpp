

# include <iostream>
using namespace std;

int main(){
    cout<<"welcome\n";
    cout<<"This program anlyzes product sells and store inventory.\n";
    cout<<"Note that C++ is a compiled language!\n\n";

    string productName;
    int productCategory;
    int initialInventory;
    float pricePerUnit;
    int numOfItemSold;
    int newInventory = initialInventory - numOfItemSold;
    float totalSale =  numOfItemSold*pricePerUnit;
    string inventoryStatus;

    if ( newInventory<10){
        inventoryStatus = "Low inventory";
    } else
        inventoryStatus = "Sifficient";

    
    int directInitialisation = 5;
    int assignmentAfterDeclaration;
    assignmentAfterDeclaration = 10;
    int listInitialisation {80};
    
    auto copyTotalSale = totalSale;
    decltype(initialInventory) copyOfInventory = 50;

    #define taxRateMacro 0.07 
    double const taxRate = 0.07;


    cout << "Enter product name: ";
    getline(cin, productName);
    cout << "Enter product category \n Category 1: Electronics\n Category 2: Groceries \n Category 3: Clothing \n Category 4: Stationary   \n Category 5: Miscelaneous\n (enter between 1 and 5): ";
    cin >> productCategory;
    cout << "Enter initial inventory quantity: ";
    cin >> initialInventory;
    cout << "Enter product price per unit: ";
    cin >> pricePerUnit;
    cout << "Enter number of items sold: ";
    cin >> numOfItemSold;
    

    newInventory = initialInventory - numOfItemSold;
    totalSale = numOfItemSold * pricePerUnit;
    string newInventoryStatus =  (newInventory <10) ? "Low inventory": "Sufficient";


    if (productCategory < 1 || productCategory > 5) {
        cout << "Invalid product category!\n";
    } else {
        switch (productCategory) {
            case 1: cout << "Category 1: Electronics\n\n"; break;
            case 2: cout << "Category 2: Groceries\n\n"; break;
            case 3: cout << "Category 3: Clothing\n\n"; break;
            case 4: cout << "Category 4: Stationery\n\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n\n"; break;
        }
    }

    if (numOfItemSold >0){
        for (int i = 1; i <= numOfItemSold;i++){
            cout<<"Item " << i << ": " << "sold in price of "<< pricePerUnit<<"\n\n";
        }
    }

    cout<<"Tax rate from pre processor constat is "<<taxRateMacro<<"\n";
    cout<<"Tax rate from const variable is "<<taxRate<<"\n";

    cout << "\n\n------ Sales Summary ------\n\n";
    cout << "Product Name: " << productName << "\n";
    cout << "Product Category: " << productCategory << "\n";
    cout << "Initial Inventory: " << initialInventory << "\n";
    cout << "Number of items Sold: " << numOfItemSold << "\n";
    cout << "New Inventory: " << newInventory << "\n";
    cout << "Total Sales: $" << totalSale << "\n";
    cout << "Inventory Status: " << inventoryStatus << "\n";
    cout << "Inventory Status: " << newInventoryStatus << "\n\n\n";
    cout << "Total Sales Copy (by Auto key word): " << copyTotalSale << "\n";
    cout << "Helper Value (Decltype): " << copyOfInventory << "\n";

    return 0;}
