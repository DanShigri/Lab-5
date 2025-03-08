 #include <iostream>
 #include <string>
 using namespace std;
 class Airport 
   {
    public:
     string name;
    string location;
     Airport(string n, string l) : name(n), location(l) 
     { 
         
       }
    void display()
    {
        cout << "Airport: " << name << " (" << location << ")" << endl;
    }
 };
     class Flight 
     {
     private:
    string flightNumber;
     string  origin;
    string destination;
  Airport*  currentLocation;
      public:
    Flight(string fn, string o, string d) : flightNumber(fn), origin(o), destination(d), currentLocation(nullptr) 
    {
        
     }
  void takeOff(Airport &airport) 
    {
         currentLocation = &airport;
      cout << " Flight " << flightNumber << " is taking off from " << airport.name << "!" << endl;
    }
void land(Airport &airport) 
    {
    currentLocation = &airport;
        cout << "Flight " << flightNumber << "  has landed at " << airport.name << "!" << endl;
    }  
       void displayStatus() 
     {
    cout << " Flight " << flightNumber << " from " << origin << " to " << destination << " is currently at: ";
         if (currentLocation)
            currentLocation->display();
      else
     cout << "Unknown location!" << endl;
    }
       };
    int main() {
     Airport karachi(" Jinnah International", " Karachi");
      Airport islamabad( "Islamabad International",  "Islamabad");
  Airport london("Heathrow", "London");
    Flight pk303("PK-303",  "Karachi",   "London");
     pk303.displayStatus();
       pk303.takeOff(karachi);
    pk303.land(islamabad); 
     pk303.displayStatus() ; 
    return 0;
  }
