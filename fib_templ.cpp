#include<iostream>

template <size_t N> struct Fib{
   enum { value = Fib<N-1>::value + Fib<N-2>::value};
};

template <> struct Fib<2> {
   enum {value=1};
};	


template <> struct Fib<1> {
   enum {value=1};
};	

int main() {
   std::cout<<Fib<20>::value;
}
