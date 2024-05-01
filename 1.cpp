#include&lt;iostream&gt;
using namespace std;
float area(float,float);
float area(float);
int main()
{
float r,B,H;
cout&lt;&lt;&quot;Enter base and height of triangle:&quot;;
cin&gt;&gt;B&gt;&gt;H;
cout&lt;&lt;&quot;Enter radius of circle:&quot;;
cin&gt;&gt;r;
cout&lt;&lt;&quot;\nArea of triangle is &quot;&lt;&lt;area(B,H);
cout&lt;&lt;&quot;\nArea of circle is &quot;&lt;&lt;area(r);
}
float area(float B,float H)
{
return((B*H)/2);
}
float area(float r)
{
return(3.14*r*r);
}
