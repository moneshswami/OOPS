#include&lt;iostream&gt;
#include&lt;string.h&gt;
using namespace std;
class bank
{
int acno;
char nm[100], acctype[100];
float bal;
public:
bank(int acc_no, char *name, char *acc_type, float balance)
acno=acc_no;
strcpy(nm, name);
strcpy(acctype, acc_type);
bal=balance;
}
void deposit();
void withdraw();
void display();
};
void bank::deposit() //depositing an amount

{
int damt1;
cout&lt;&lt;&quot;\n Enter Deposit Amount = &quot;;
cin&gt;&gt;damt1;
bal+=damt1;
}
void bank::withdraw() //withdrawing an amount
{
int wamt1;
cout&lt;&lt;&quot;\n Enter Withdraw Amount = &quot;;
cin&gt;&gt;wamt1;
if(wamt1&gt;bal)
cout&lt;&lt;&quot;\n Cannot Withdraw Amount&quot;;
bal-=wamt1;
}
void bank::display() //displaying the details
{
cout&lt;&lt;&quot;\n ----------------------&quot;;
cout&lt;&lt;&quot;\n Accout No. : &quot;&lt;&lt;acno;
cout&lt;&lt;&quot;\n Name : &quot;&lt;&lt;nm;
cout&lt;&lt;&quot;\n Account Type : &quot;&lt;&lt;acctype;
cout&lt;&lt;&quot;\n Balance : &quot;&lt;&lt;bal;
}
int main()
{
int acc_no;
char name[100], acc_type[100];
float balance;
cout&lt;&lt;&quot;\n Enter Details: \n&quot;;
cout&lt;&lt;&quot;-----------------------&quot;;

cout&lt;&lt;&quot;\n Accout No. &quot;;
cin&gt;&gt;acc_no;
cout&lt;&lt;&quot;\n Name : &quot;;
cin&gt;&gt;name;
cout&lt;&lt;&quot;\n Account Type : &quot;;
cin&gt;&gt;acc_type;
cout&lt;&lt;&quot;\n Balance : &quot;;
cin&gt;&gt;balance;

bank b1(acc_no, name, acc_type, balance); //object is created
b1.deposit(); //
b1.withdraw(); // calling member functions
b1.display(); //
return 0;
}
