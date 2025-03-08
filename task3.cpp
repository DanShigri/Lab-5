 #include <iostream>
 #include <string>
 using namespace std;
 const int MAX_ITEMS = 10;
     class MenuItem 
      {
      public:
    string name;
    double price;
    MenuItem() : name(""), price(0.0) {}
    MenuItem(string n, double p) : name(n), price(p) {}
    void display() 
    {
     cout << name << " - $" << price << endl;
    }
    };
  class Menu
        {
     private:
    MenuItem items[MAX_ITEMS];
    int itemCount; 
     public:
    Menu() : itemCount(0) {}
    void addItem(string name, double price) {
        if (itemCount < MAX_ITEMS) {
     items[itemCount++] = MenuItem(name, price);
        }
    }
    void showMenu()
    {
      cout <<endl<<"--- Menu ---"<<endl;
        for (int i = 0; i < itemCount; i++) 
        {
      cout << i + 1 << ". ";
      items[i].display();
        }
    }
    MenuItem getItem(int index) {
        if (index >= 0 && index < itemCount) 
         {
            return items[index];
        }
        return MenuItem();
      }
     };
 class Payment  
     {
     public:
    double amount;
    Payment(double amt) : amount(amt) {}
    void display()
      {
        cout << "Total Payment: $" << amount << endl;
     }
     };
class Order {
private:
    MenuItem orderItems[MAX_ITEMS];
    int orderCount;
    double totalAmount;
     public:
    Order() : orderCount(0), totalAmount(0.0) {}
    void addItem(MenuItem item)
       {
        if (orderCount < MAX_ITEMS) 
    {
      orderItems[orderCount++] = item;
            totalAmount += item.price;
      }
    }
    void placeOrder() {
        cout << "\nOrder placed successfully"<<endl;
        for (int i = 0; i < orderCount; i++) 
         {
        orderItems[i].display();
         }
        Payment payment(totalAmount);
        payment.display();
       }
        };

    int main() 
  {
    Menu menu;
     menu.addItem("Burger", 5.99);
    menu.addItem(" Pizza", 8.99);
     menu.addItem("Soda",  1.99);
    menu.showMenu();
     Order order;
     order.addItem(menu.getItem(0)); 
    order.addItem(menu.getItem(1)); 
     order.placeOrder();

    return 0;
    }
