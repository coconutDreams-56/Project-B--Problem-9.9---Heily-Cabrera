/****Project-B--Problem-9.9---Heily-Cabrera ****/

/** After closing time, the store manager would like to know how much business was transacted during the day. Modify the CashRegister class to enable this functionality. 
Supply member functions get_sales_total and get_sales_count to get the total amount of all sales and the number of sales.
Supply a member function reset_sales that resets any counters and totals so that the next day’s sales start from zero. **/

//Programmer: Heily Cabrera
//Tester: Ashley Jacobson

// Group Project B //
/***** Members *****/
/***** Ashley Jacobson *****/
/***** Giannfranco Brance *****/
/***** Audrey Tapia *****/
/***** Heily Cabrera Guerrero *****/

#include <iostream>
#include <vector>

using namespace std;

class CashRegister
{
private:
vector<double> items;
double sales_tot;
double sales_count;

public:
CashRegister()
{
  sales_tot = 0;
  sales_count = 0;
}

void clear() 
{
if (!items.empty())
{
  sales_tot += get_tot();
  sales_count++;
}
items.clear();
}

void add_item(double price) 
    {
        items.push_back(price);
    }

double get_tot() const 
{
        double tot = 0;
        for (double price : items) {
            tot += price;
        }
        return tot;
}

int get_count() const 
    {
        return items.size();
    }

void display_all() const 
    {
        cout << "Items in cart:" << endl;
        for (double price : items) 
        {
            cout << "$" << price << endl;
        }
    }

double get_sales_total() const 
    {
        return sales_tot;
    }

int get_sales_count() const 
{
        return sales_count;

}

void reset_sales() 
    {
        sales_tot = 0;
        sales_count = 0;
    }
};


int main()
  {
  CashRegister myregister;

    myregister.add_item(3.29);
    myregister.add_item(7.79);
    myregister.add_item(1.25);
    myregister.display_all();
    cout << "Total: $" << register.get_tot() << endl;
    cout << "Item count: " << register.get_count() << endl;
    myregister.clear(); // Ends transaction

    myregister.add_item(5.99);
    myregister.add_item(2.50);
    cout << "\nSecond customer:\n";
    myregister.display_all();
    cout << "Total: $" << register.get_tot() << endl;
    myregister.clear(); // Ends transaction

    cout << "\nEnd of day report:" << endl;
    cout << "Total sales: $" << register.get_sales_total() << endl;
    cout << "Number of transactions: " << register.get_sales_count() << endl;

    
    myregister.reset_sales();
    cout << "\nSales reset for next day." << endl;
    cout << "Total sales: $" << register.get_sales_total() << endl;
    cout << "Number of transactions: " << register.get_sales_count() << endl;

    return 0;

  } 
