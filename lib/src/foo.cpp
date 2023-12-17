module;
#include <string>

export module foo;

export class foo {
public:
  foo() = default;
  ~foo() = default;
  auto hello() -> std::string { return "hello world"; }
};
