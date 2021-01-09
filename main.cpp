/******************************************************************************

           welcome to farmerGuide your only guide to farm productivity

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    float totalAcres;
    int numberOfVegs;
    float portionX;
    float portionY;
    float seedCost;
    float plantingCost;
    float fertilizingCost;
    float labourCost;
    float priceX;
    float priceY;
    float totalRevenue;
    float totalCost;
    float difference;
    float xAcres , yAcres;
    string name;
    cout << "hello whats your name? ";
    cin >> name;
    cout << name << " please enter the total area of farm lands in acres";
    cin >> totalAcres;
    cout << endl;
    correctNumber :
    cout << "how many vegetables will you like to grow " << name;
    cin >> numberOfVegs;
    cout << endl;
    if (numberOfVegs <= 0 || numberOfVegs > 2)
    {
        cout << "oh sorry " <<name << " please enter a maximum of 2 vegetables and not less than 1." <<endl;
        goto correctNumber;
    }

    if (numberOfVegs == 1)
    {
        goto askTheUser;
    }

    else
    {
        cout << name <<
             " please enter the portion of land allocated each vegetable in percentages"
             << endl;
        cout << "first portion is? ";
        cin >> portionX;
        cout << "and the second portion is? ";
        cin >> portionY;
        xAcres = portionX * (totalAcres/100);
        yAcres = portionY * (totalAcres/100);
        cout <<"portion of the land in acres used by the first vegetable is " << xAcres <<endl;
        cout <<"portion of the land in acres used by the second vegetable is " << yAcres <<endl;
    }
    cout << endl;
    askTheUser:
    cout << name <<", now give us more details about the cost of production" <<endl;
    cout << "please enter the total cost of the seeds per each acre ";
    cin >> seedCost;
    cout << "please enter the total cost of planting per each acre ";
    cin >> plantingCost;
    cout << "please enter the total cost of fertilizing per each acre ";
    cin >> fertilizingCost;
    cout << "please enter the cost of labour per each acre ";
    cin >> labourCost;


    if (numberOfVegs == 1)
    {
        cout << "please enter selling price of the vegetable per acre ";
        cin >> priceX;
        cout << endl;
    }
    else
    {
        cout << "enter the selling price per acre of each vegetable ";
        cin >> priceX >> priceY;
    }

    if (numberOfVegs == 2)
    {
        totalRevenue = (priceX * xAcres + priceY * yAcres) * totalAcres;
    }
    else
    {
        totalRevenue = priceX * totalAcres;
    }
    cout << name << ", You made a total of " << totalRevenue << endl;

    totalCost = (seedCost + plantingCost + fertilizingCost + labourCost)* totalAcres;

    difference = totalRevenue - totalCost;
    if (difference >= 1)
    {
        cout << "Your profit is " << difference << ".00Ghs";
    }
    else
    {
        cout << "You made a loss of " << difference << ".00Ghs";
    }
    cout << endl;
    cout <<name <<" thank you for using farmerGuide.Have a fruitful season and bountiful harvest "<<endl;
    cout << "see you next year";
    return 0;
}


