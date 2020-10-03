
// *.ixx is required for MSVC

// module structure (is important)
// ----- 
module;

// ---- global module fragment (preprocessor directive only)
#include <cassert>

// ----- 
export module math;

// ----- module preamble (import declaration only)
// import std.core;

// ----- module purview (export declarations, etc)
namespace math
{
   export int add(int a, int b)
   {
      return a + b;
   }
}