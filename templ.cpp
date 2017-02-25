//Silly template example
#include<iostream>

template <size_t N> struct Sum {
   enum { value = N + Sum<N-1>::value};
};

template <> struct Sum<1> {
   enum {value=1};
};	

int main() {
   std::cout<<Sum<500>::value;
}
