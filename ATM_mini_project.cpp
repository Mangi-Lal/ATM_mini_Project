/* Mini project on functioning of ATM using random local user data
Targets-
>Check Balance 
>Cash withdrawl
>User details 
>Mobile no. update
*/
#include<conio.h> // for using _getch function
#include<iostream>
#include <string>
using namespacestd;

class ATM
{
private:
    long int Account_number;
    string Name;
    int PIN;
    string Mobile_number;
    double Balance;

public:
    void setData(long int Account_number_s,string Name_s,int PIN_s,string Mobile_number_s,double Balance_s){
        Account_number = Account_number_s;
        Name = Name_s;
        PIN = PIN_s;
        Mobile_number = Mobile_number_s;
        Balance = Balance_s;
    }

    long int getAccountNumber()
    {
        return Account_number;
    }
    string getName()
    {
        return Name;
    }
    int getPin()
    {
        return PIN;
    }
    string getMobileNumber()
    {
        return MobileNumber;
    }
    double getBalance()
    {
        return Balance;
    }

    void UpdateMobileNumber(string current_number, string new_number){

    }
    void CashWithdraw(int amount_w){

    }
}
int main()
{
    int choice = 0,PIN;
    long int Acc_number;
    system("cls");
    ATM Elon;
    setData(6179467544579080,Elon,1111,9087654321,999999.00);

    do
    {
        cout<<"$$$ Welcome To Mini_ATM $$$"<<endl;
        cout<<"Enter Account number: ";
        cin>>Acc_number;
        cout<<"Enter PIN: ";
        cin>>PIN;

        if((Acc_number==Elon.getAccountNumber())&&(PIN==Elon.getPin)){
            do
            {
                system("cls");
                int amount=0;
                string Mobile_Number_prev;
                string Mobile_Number_New;

                cout<<endl<<"$$$ Welcome To Mini_ATM $$$";
                cout<<endl<<"1. Check Balance";
                cout<<endl<<"2. Cash Withdraw";
                cout<<endl<<"3. Show User Details";
                cout<<endl<<"4. Update Mobile Number";
                cout<<endl<<"5. Exit";

                switch (choice)
                {
                case 1:
                    cout<<endl<<"Your current balance is: "<<Elon.getBalance();
                    _getch();
                    break;
                case 2:
                    cout<<endl<<"Enter the amount: ";
                    cin>>amount;
                    Elon.CashWithdraw(amount);
                    break;
                case 3:
                    cout<<endl<<"USER DETAILS:";
                    cout<<endl<<">>Account Number: "<<Elon.getAccountNumber();
                    cout<<endl<<">>Accountant Name: "<<Elon.getName();
                    cout<<endl<<">>Current Balance: "<<Elon.getBalance();
                    cout<<endl<<">>Mobile Number: "<<Elon.getMobileNumber();
                    _getch();
                    break;
                case 4:
                    cout<<"Enter Current Mobile Number: ";
                    cin>>Mobile_Number_prev;

                    cout<<"Enter New Mobile Number: ";
                    cin>>Mobile_Number_new;

                    Elon.UpdateMobileNumber(Mobile_Number_prev,Mobile_Number_new);
                    break;
                case 5:
                    exit(0);
            
                default:
                    cout<<endl<<"Not a Valid key!!!";
                }
                
            } while (1);
            
        }
        else
        {
            cout<<endl<<"Enter valid Account Number or Password!!!";
            _getch();
        }

    } while (1);


return 0;   
}