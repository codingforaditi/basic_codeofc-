#include<iostream>
using namespace std;
class ROOM {
    int length;
    int width;
public:
    void getdata(int l, int w) {
        length = l;  
        width = w;
    }
    void display() {
        cout << "The length = " << length << endl;
        cout << "The width = " << width << endl;
    }
    void area() {
        int area = length * width;  
        cout << "The area of the room = " << area << endl;
    }
};
int main() {
    ROOM R1, R2, R3;
    R1.getdata(22, 33);
    R2.getdata(2, 3);
    R3.getdata(4, 4);
    
    cout << " R1=" << endl;
    R1.display();
    R1.area();

    cout << "R2=" << endl;
    R2.display();
    R2.area();

    cout << "R3=" << endl;
    R3.display();
    R3.area();

    return 0;
}
