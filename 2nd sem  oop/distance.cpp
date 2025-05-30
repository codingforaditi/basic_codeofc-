#include <iostream> 
using namespace std; 
struct DISTANCE1
{
int meter;
 };
struct DISTANCE2 {
float km;
 };
void Compare(DISTANCE1 A, DISTANCE2 B) {
float km1 = float(A.meter) / 1000;

if (km1 > B.km)
{
cout << "the vlaue in meter is greater" << endl; } 
else if (km1 < B.km)
{
cout << "the vlaue in meter is smaller" << endl; }
else
{
    cout << "the vlaue is equal" << endl; } }
int main() {
DISTANCE1 D; 
DISTANCE2 E; 
D.meter = 7028; 
E.km = 123; 
Compare(D, E); 
return 0;
}
