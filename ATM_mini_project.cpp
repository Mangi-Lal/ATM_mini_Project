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
using namespace std;

class ATM // class ATM created 
{
private: //defining member variables 
    long int Account_number;
    string Name;
    int PIN;
    string Mobile_number;
    double Balance;

public: // defining member functions 
    // setting data function
    void setData(long int Account_number_s,string Name_s,int PIN_s,string Mobile_number_s,double Balance_s){
        Account_number = Account_number_s;
        Name = Name_s;
        PIN = PIN_s;
        Mobile_number = Mobile_number_s;
        Balance = Balance_s;
    }
    // function for getting data from member variables within class 
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
        return Mobile_number;
    }
    double getBalance()
    {
        return Balance;
    }

    //Updating Mobile Number of user 
    void UpdateMobileNumber(string current_number, string new_number){
        if(current_number==Mobile_number){
            Mobile_number=new_number;
            cout<<endl<<"Your Mobile Number Updated Sucessfully!";
            _getch();
        }
        else
        {
            cout<<endl<<"Current Mobile Number is Incorrect !!!";
            _getch();
        }
    }
    
    // Cashwithdrawl function  
    void CashWithdraw(int amount_w){
        if(amount_w>0 && amount_w<Balance){
            Balance-=amount_w;
            cout<<endl<<"Collect the cash from tray";
            cout<<endl<<"Available Current Balance: "<<Balance;
            _getch();
        }
        else if(amount_w<=0){
            cout<<"Enter a valid amount!!";
            _getch();
        }
        else{
            cout<<"Insufficient Balance";
            _getch();
        }

    }
};
int main()
{
    int choice = 0,enterPIN; 
    long int Acc_number;
    system("cls");  //clear screen
    ATM Elon;
    Elon.setData(617946980,"Elon",1111,"9087654321",999999.00);

    do
    {
        system("cls");
        cout<<"$$$ Welcome To Mini_ATM $$$"<<endl;
        cout<<"Enter Account number: ";
        cin>>Acc_number;
        cout<<"Enter PIN: ";
        cin>>enterPIN;

        if((Acc_number==Elon.getAccountNumber())&&(enterPIN==Elon.getPin())){
            do
            {
                int amount=0;
                string Mobile_Number_prev;
                string Mobile_Number_New;

                cout<<endl<<"$$$ Welcome To Mini_ATM $$$";
                cout<<endl<<"1. Check Balance";
                cout<<endl<<"2. Cash Withdraw";
                cout<<endl<<"3. Show User Details";
                cout<<endl<<"4. Update Mobile Number";
                cout<<endl<<"5. Exit"<<endl;
                cin>>choice;

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
                    cin>>Mobile_Number_New;

                    Elon.UpdateMobileNumber(Mobile_Number_prev,Mobile_Number_New);
                    break;
                case 5:
                    exit(0);
            
                default:
                    cout<<endl<<"Not a Valid key!!!";
                    _getch();
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