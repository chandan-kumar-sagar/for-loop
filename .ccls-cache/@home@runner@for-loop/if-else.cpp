#include <iostream>
using namespace std;
int main() {
  int marks;
  cout << "enter the marks" << endl;
  cin >> marks;
  if (marks >= 90) {
    cout << "grade A" << endl;
  } else if (marks >= 70) {
    cout << "grade B" << endl;
  } else if (marks >= 40) {
    cout << "grade C" << endl;
  } else {
    cout << "grade f" << endl;
  }
}