#include&lt;iostream&gt;
#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
using namespace std;
class person
{
public:
char name[10];
int code;
void getp()
{
cout&lt;&lt;&quot;Enter Name : &quot;;
cin&gt;&gt;name;
cout&lt;&lt;&quot;\nEnter Code : &quot;;
cin&gt;&gt;code;
}
};
class account : virtual public person
{
public:
double pay;
void getac()
{
cout&lt;&lt;&quot;\nEnter Salary : &quot;;
cin&gt;&gt;pay;
}
};

class admin : virtual public person
{
public:
double exp;
void getad()
{
cout&lt;&lt;&quot;\nEnter Experience : &quot;;
cin&gt;&gt;exp;
}
};
class employee : public account, public admin
{
public:
void disp()
{
cout&lt;&lt;&quot;\n=========================\nName\t\t: &quot;&lt;&lt;name;
cout&lt;&lt;&quot;\nCode\t\t: &quot;&lt;&lt;code;
cout&lt;&lt;&quot;\nSalary\t\t: &quot;&lt;&lt;pay;
cout&lt;&lt;&quot;\nExperience\t: &quot;&lt;&lt;exp;
cout&lt;&lt;&quot;\n=========================&quot;;
}
};
int main()
{
employee e1;
e1.getp();
e1.getac();
e1.getad();
e1.disp();
getch();
}
