 #include <iostream>
 #include <string>
 using namespace std;
 
   class ValidateString {
    private:
     string data;
public:
    ValidateString(string str) : data(str) 
    { 
    }
bool isValid() const 
       {
        for (char ch : data) 
         {
    if (!isalpha(ch))  
   { 
       return false;
   }
    }
    return true;
    }
    void displayResult() const
    {
         cout << " String: " << data << " -> ";
        if (isValid())
    {
        cout << "Valid (Only Letters)" << endl;
     } else {
            cout << "Invalid (Contains  Non-Letter Characters)" << endl;
        }
    }
       };
  int main() {
     ValidateString str1("  HelloWorld");
    ValidateString str2("  Hello123");
      ValidateString str3("  C++Rocks!");
     str1.displayResult() ;
         str2.displayResult() ;
    str3.displayResult() ;
    return 0;
}
