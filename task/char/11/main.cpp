#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
	int count = 0;
  bool kok = true;

  for(int i = 0 ; i < str.length(); i++){
    if ( str[i] == '-'){
      kok = false;
    }
    if (str[i] >= '0' && str[i] <= '9'){
      count = count * 10 + (str[i] - '0');
    }
    if ((str[i] == ',')  || (i == str.length() - 1)){
      if ( kok == false){
        count = -count;
      }
 
      result.push_back(count);
      count = 0;
      kok = true;

    }
  }
  return result;
}

int main() {
    string str;
    getline(cin, str);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}