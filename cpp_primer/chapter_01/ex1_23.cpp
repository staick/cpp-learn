#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item curr_item, item;
  if (std::cin >> curr_item) {
    int cnt = 1;
    while (std::cin >> item) {
      if (curr_item.isbn() == item.isbn()) {
        cnt++;
      } else {
        std::cout << curr_item.isbn() << ": " << cnt << std::endl;
        curr_item = item;
        cnt = 1;
      }
    }
    std::cout << curr_item.isbn() << ": " << cnt << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
  }

  return 0;
}
