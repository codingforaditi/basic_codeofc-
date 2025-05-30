#include <iostream>

using namespace std;

namespace Dollar {
  void Conversion1(float rupee) {
    float dollar = float(1) / 111 * rupee;
    cout << "rupee to dollar:" << dollar << endl;
  }
  void Conversion2(float dinar) {
    float dollar = 3 * dinar;
    cout << "dinar to dollar:" << dollar << endl;
  }
}
namespace Rupee {
  void Conversion1(float dollar) {
    float rupee = 111 * dollar;
    cout << "dollar to rupee:" << rupee << endl;
  }
  void Conversion2(float dinar) {
    float rupee = 141 * dinar;
    cout << "dinar to Rupee:" << rupee << endl;
  }
}
namespace Dinar {
  void Conversion1(float rupee) {
    float dinar = float(1) / 141 * dinar;
    cout << "rupee to dinar:" << dinar << endl;
  }
  void Conversion2(float dollar) {
    float dinar = float(1) / 3 * dollar;
    cout << " dollar to dinar:" << dinar << endl;
  }
}
int main() {
  Dollar::Conversion1(150.25);
  Dollar::Conversion2(180);
  Rupee::Conversion1(1.0);
  Rupee::Conversion2(1.0);
  Dinar::Conversion1(141.0);
  Dinar::Conversion2(3);
  return 0;
}