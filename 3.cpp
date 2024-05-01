#include &lt;iostream&gt;
using namespace std;
class DB; // Forward declaration
class DM {
private:
int meters;
float centimeters; //Members declared as private are only accessible within the class itself.
public:
void setDistance(int m, float cm) {
meters = m;
centimeters = cm; //Public members define the interface of the class, allowing external
code to interact with the class.
}
friend void addDistances(DM, DB);
};
class DB {
private:
int feet;
float inches;
public:
void setDistance(int f, float in) {
feet = f;
inches = in;
}
friend void addDistances(DM, DB);
};
// Friend function to add DM and DB distances
void addDistances(DM dmObj, DB dbObj) {
// Convert DM to centimeters
float dmInCentimeters = dmObj.meters * 100 + dmObj.centimeters;
// Convert DB to inches
float dbInInches = dbObj.feet * 12 + dbObj.inches;
// Add the distances
float totalDistance = dmInCentimeters + dbInInches;
// Convert total distance back to meters and centimeters
int totalMeters = static_cast&lt;int&gt;(totalDistance / 100);
float remainingCentimeters = totalDistance - totalMeters * 100;
cout &lt;&lt; &quot;Total Distance: &quot; &lt;&lt; totalMeters &lt;&lt; &quot; meters and &quot; &lt;&lt; remainingCentimeters &lt;&lt; &quot;

centimeters&quot; &lt;&lt; std::endl;
}
int main() {
DM dmObj;
DB dbObj;
int meters;
float centimeters;
cout &lt;&lt; &quot;Enter distance in meters and centimeters&quot;;
cin &gt;&gt; meters &gt;&gt; centimeters;
dmObj.setDistance(meters, centimeters);
int feet;
float inches;
cout &lt;&lt; &quot;Enter distance in feet and inches &quot;;
cin &gt;&gt; feet &gt;&gt; inches;
dbObj.setDistance(feet, inches);
// Add DM and DB distances
addDistances(dmObj, dbObj);
return 0;
}
