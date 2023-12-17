import bar;
import ns.baz;
import foo;

#include <iostream>
#include <vector>

int main() {
  foo obj{};
  std::cout << obj.hello() << std::endl;

  auto n = bar(std::vector{1, 2, 3, 4});
  std::cout << "N elements: " << n << std::endl;

  auto x = ns::baz(5);
  std::cout << "x: " << x << std::endl;

  return 0;
}