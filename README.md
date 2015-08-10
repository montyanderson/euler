# euler

C++ solutions for [Project Euler](https://projecteuler.net/problems) problems.

![Project Euler Badge](https://projecteuler.net/profile/montyanderson.png)

## Execution

All solutions have been tested on Ubuntu 15.04 (64-bit), with g++ 4.9.2.

**Note: Problems 16+ require the [ttmath](http://www.ttmath.org/) library.**

``` bash
g++ "001 - Multiples of 3 and 5.cpp" && ./a.out
```

## Benchmarks

``` bash
./benchmark.sh
```

Here are the current results on my system:

```
$ ./benchmark.sh
001 - Multiples of 3 and 5.cpp

real	0m0.001s
user	0m0.000s
sys	0m0.000s
002 - Even Fibonacci numbers.cpp

real	0m0.001s
user	0m0.000s
sys	0m0.000s
003 - Largest prime factor.cpp

real	0m0.007s
user	0m0.004s
sys	0m0.000s
004 - Largest palindrome product.cpp

real	0m0.024s
user	0m0.020s
sys	0m0.000s
005 - Smallest multiple.cpp

real	0m0.467s
user	0m0.460s
sys	0m0.004s
006 - Sum square difference.cpp

real	0m0.001s
user	0m0.000s
sys	0m0.000s
007 - 10001st prime.cpp

real	0m0.009s
user	0m0.008s
sys	0m0.000s
008 - Largest product in a series.cpp

real	0m0.001s
user	0m0.000s
sys	0m0.000s
009 - Special Pythagorean triplet.cpp

real	0m0.093s
user	0m0.092s
sys	0m0.000s
010 - Summation of primes.cpp

real	0m0.449s
user	0m0.448s
sys	0m0.000s
012 - Highly divisible triangular number.cpp

real	0m0.318s
user	0m0.316s
sys	0m0.000s
014 - Longest Collatz sequence.cpp

real	0m0.500s
user	0m0.496s
sys	0m0.000s

```
