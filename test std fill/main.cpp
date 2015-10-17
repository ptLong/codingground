#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

constexpr auto LEN = 188;
  
int main()
{
#if 0
  uint8_t arr[LEN] = {0x08};
  fill_n(arr, LEN, 0xA8);
#else
  array<uint8_t, LEN> arr;
  fill_n(arr.begin(), LEN, 0xA8);
#endif
  
  

  for (auto c : arr){
    cout << hex << setfill('0') << setw(2) << +c << " ";
  }
  cout << "\n\nHello World" << endl; 

  return 0;
}
