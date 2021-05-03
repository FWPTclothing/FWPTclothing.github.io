/******************************************************************************

          receipt system: input the items and the price, get a total amount 
          in a nice format 

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    // size of order
    int order_size;
    cout << "size of order: ";
    cin >> order_size;
    
    
    // order details
    vector<pair<string, double>> orders;
    orders.resize(order_size);
    
    for(int i = 0 ; i < order_size ; i++) {
        string item;
        double price;
        cout << "      order " << i+1 << " item: " ; 
        cin >> item  ;
        cout << "      order " << i+1 << " price: " ; 
        cin >> price  ;
        pair<string, double> order(item, price);
        orders[i] = order;
    }
    
    cout << "\nThank you for your order!: " << endl;
    // output a nice receipt 
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    
    cout << fixed;
    cout << setprecision(2);
    
    double total = 0 ;
    
    for(int i = 0 ; i < order_size ; i++){
        cout << orders[i].first << endl;
        cout << "                                  $" << orders[i].second << endl;
        total += orders[i].second;
    }
    cout << "----------------------------------------" << endl;
    cout <<"total: "<< endl;
    cout << "                                  $" << total << endl;
    
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;

    return 0;
}
