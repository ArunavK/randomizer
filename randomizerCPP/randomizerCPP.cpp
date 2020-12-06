#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

  int n{};
  cout << "No of entries" << endl;  
  cin >> n;

  vector <string> v(n);

  // Taking input
  for (size_t i = 0; i < n; i++)
  {
    cout << "Enter entry " << i+1 << ": ";
    cin >> v.at(i);
  }

  //Displaying the input
  cout << endl << "Input list:" << endl;
  for (size_t i = 0; i < n; i++)
  {
    cout << v.at(i);

    if(i != n-1) {
      cout << ", ";
    } else {
      cout << "." << endl;
    }
  }
  cout << endl;
  
  //Randomizing the list using the Mersenne Twister algorithm
  random_device rd;
  mt19937 g(rd());

  shuffle(v.begin(), v.end(), g);

  // Randomized output
  cout << endl << "Randomized List:" << endl;
  for (size_t i = 0; i < n; i++)
  {
    cout << v.at(i);

    if(i != n-1) {
      cout << ", ";
    } else {
      cout << "." << endl;
    }
  }
  cout << endl;

}