### The ```auto``` Keyword

* Used for automatic type inference in C++11

```cpp
auto d = 5.0;    //becomes double
auto i = 1 + 2;  //becomes int
```

* The auto keyword can’t be used with function parameters

* Type inference for function return types in C++14 

* Trailing return type syntax in C++11

```cpp
auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
auto printSomething() -> void;
auto calculateThis(int x, double d) -> std::string;
```
