import bar;
import ns.baz;
import foo;

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Test library") {
  SECTION("foo") {
    auto obj = foo{};
    auto result = obj.hello();
    REQUIRE(result == "hello world");
  }
  SECTION("bar") {
    auto result = bar(std::vector{1, 2, 3, 4});
    REQUIRE(result == 4);
  }
  SECTION("baz") {
    auto result = ns::baz(5);
    REQUIRE(result == 25);
  }
}
