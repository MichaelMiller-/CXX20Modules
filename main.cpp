import std.core;
import math;
import foo;

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv)
{
   std::cout << math::add(5, 42) << std::endl;

   foo::bar(43);

   return 0;
}

