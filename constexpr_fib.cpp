#include<iostream>
template <typename T>
constexpr auto fib_ce(T n) {
   return (n>1) ? fib_ce(n-1)+fib_ce(n-2) : 1;
}

int main() {
   std::cout<<fib_ce(4)<<"\n";
}
