#include&lt;iostream&gt;
using namespace std;

class MAT
{
int a[2][2];

public:
void accept()
{
cout&lt;&lt;&quot;\n\n Enter 4 element : &quot;;
for(int i=0;i&lt;2;i++)
{
for(int j=0;j&lt;2;j++)

cin&gt;&gt;a[i][j];
}
}

void display()
{
for(int i=0;i&lt;2;i++)
{
cout&lt;&lt;endl;
for(int j=0;j&lt;2;j++)

cout&lt;&lt;&quot; &quot;&lt;&lt;a[i][j];
}
}

MAT operator+(MAT M2)
{
MAT M3;
for(int i=0;i&lt;2;i++)
{
for(int j=0;j&lt;2;j++)
{
M3.a[i][j]=a[i][j]+M2.a[i][j];
}
}
return M3;
}

MAT operator-(MAT M2)
{
MAT M3;
for(int i=0;i&lt;2;i++)
{
for(int j=0;j&lt;2;j++)
{
M3.a[i][j]=a[i][j]-M2.a[i][j];
}
}
return M3;
}

MAT operator*(MAT M2)
{
MAT M3;

for(int i=0;i&lt;2;i++)
{
for(int j=0;j&lt;2;j++)
{
M3.a[i][j]=0;
for(int k=0;k&lt;2;k++)
{
M3.a[i][j]=(a[i][k]*M2.a[k][j])+M3.a[i][j];
}
}
}

return M3;
}
};

int main()
{
MAT M1,M2,M3;

cout&lt;&lt;&quot;\n\n Enter Matrix M1 value: &quot;;
M1.accept();

cout&lt;&lt;&quot;\n\n Enter Matrix M2 value: &quot;;
M2.accept();

M3=M1+M2;
cout&lt;&lt;&quot;\n\n Addition of M1+M2 : &quot;;
M3.display();

M3=M1-M2;
cout&lt;&lt;&quot;\n\n Subtrachtion of M1-M2 : &quot;;
M3.display();

M3=M1*M2;
cout&lt;&lt;&quot;\n\n Multiplication of M1*M2 : &quot;;
M3.display();

return 0;
}
