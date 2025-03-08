#include <iostream>
#include <iomanip>
 using namespace std;
    class LoanHelper {
   private:
         double loanAmount;
          int  months;
         const double interestRate; 
       public:
    LoanHelper(double amount, int m, double rate) : loanAmount(amount), months(m), interestRate(rate) 
    {
   if (interestRate < 0.0 || interestRate > 0.005) 
        {
             cout << "Invalid interest rate! Setting to default 0.5%." << endl;
            *(double*)&interestRate = 0.005; 
         }
      }
    void calculateMonthlyPayment() const 
      {
        double monthlyPayment = (loanAmount / months) * (1 + interestRate);
         cout << fixed << setprecision(2);
          cout << " You have to pay $" << monthlyPayment << " every month for " << months << " months to repay your loan."     << endl;
        }
      };
  int main()
    {
     LoanHelper loan1( 5000, 12, 0.005);
       LoanHelper loan2(10000, 24, 0.003);
    LoanHelper loan3(7500, 18,  0.007); 
     loan1.calculateMonthlyPayment() ;
   loan2.calculateMonthlyPayment();
        loan3.calculateMonthlyPayment()  ;
    return 0;
   }
