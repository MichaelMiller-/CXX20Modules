module;
#include <concepts>

export module ns.baz;

namespace ns {
export template <typename T>
  requires std::integral<T>
constexpr auto baz(T const value) {
  return value * value;
}
} // namespace ns