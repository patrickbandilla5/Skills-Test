#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
    double rateperhour, totalincome, taxedincome, schoolsupplies, individualbond;
    double clothes, parentsbond, hoursworked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE = 0.10;
    const double SCHOOLSUPPLIES_PERCENTAGE = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE = 0.25;
    const double PARENTS_CO_CONTRIBUTION_AMOUNT = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursworked;
    
    cout << "What was the hourly rate: $";
    cin >> rateperhour;
    
    totalincome = hoursworked * rateperhour;
    taxedincome = totalincome *= TAX_RATE;
    clothes = taxedincome * CLOTHES_PERCENTAGE;
    schoolsupplies = taxedincome * SCHOOLSUPPLIES_PERCENTAGE;
    taxedincome -= (clothes + schoolsupplies); 
    individualbond = taxedincome * SAVINGS_BONDS_PERCENTAGE;
    parentsbond = individualbond * PARENTS_CO_CONTRIBUTION_AMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << totalincome << endl;
    cout << "Net Income: $" << taxedincome << endl;
    cout << "Clothes & Accessories: $" << clothes << endl;
    cout << "School Supplies: $" << schoolsupplies << endl;
    cout << "Savings Bonds: $" << individualbond << endl;
    cout << "Parents Bonds Co-Contribution: $" << parentsbond << endl;
    getch();
    
    return 0;
}
