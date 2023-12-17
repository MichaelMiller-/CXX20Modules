module;

#include <algorithm>
#include <ranges>

export module bar;

// function is not exported
constexpr auto impl(auto values) { return std::distance(begin(values), end(values)); }

// export a simple constrained template function (placeholder syntax)
export constexpr auto bar(std::ranges::range auto const& values) {
  return impl(values);
}
