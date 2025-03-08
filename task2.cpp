#include<iostream>
#include<string>
using namespace std;
class Battery
{
  private:
  int capacity_mah;
   
public:
    Battery(int capacity) : capacity_mah(capacity) {}
    
   void showbattery() const
   {
     cout<<"Battery capacity is : "<< capacity_mah<<endl;
   }
};
class Smartphone
{
  private:
  string brand;
  string model;
  const Battery battery;
  
  public:
  Smartphone(string b, string m, int batteryCapacity) 
        : brand(b), model(m), battery(batteryCapacity) 
    {}
  void showDetail()
   {
     cout<<"Smartphone brand  is : "<< brand<< " model is "<< model<<endl;
     battery.showbattery();
   }
  
};

int main()
{
  Smartphone phone("TechNova", "X100", 5000);
    phone.showDetail();
    return 0;
}