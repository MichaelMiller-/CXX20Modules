
// *.ixx is required for MSVC

// module structure (is important)
// ----- 
module;

// ---- global module fragment (preprocessor directive only)
#include <cassert>
#include <string>
#include <iostream>

// ----- 
export module foo;

// ----- module preamble (import declaration only)
// import std.core;

// ----- module purview (export declarations, etc)
namespace foo
{
   export void bar(int value)
   {
      std::cout << "call foo::bar() with value: " << value << std::endl;
   }
}