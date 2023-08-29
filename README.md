# Cpp Template

Certainly! Let's explain function templates and class templates in C++ in a mix of Hindi and English along with some examples.

### Basic Function Template (Mool Function Template):

```cpp
#include <iostream>

// Mool Function Template hai jisse kisi bhi prakar ke data type ke do moolon ka adhik se adhik mool nikala ja sakta hai.
template <typename T>
T mool(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMool = mool(5, 10);
    double doubleMool = mool(3.14, 2.71);

    std::cout << "5 aur 10 ka adhik mool: " << intMool << std::endl;
    std::cout << "3.14 aur 2.71 ka adhik mool: " << doubleMool << std::endl;

    return 0;
}
```

Is basic example mein, hum ek function template `mool` define karte hain, jo kisi bhi data type ke do moolon ka adhik mool nikal sakta hai. Is function ke andar `typename` keyword ke sath type parameter `T` ka use hota hai. Phir function `a` aur `b` ko tulna karta hai aur adhik mool ko vapas karta hai.

### Class Templates (Class Mool Templates):

Templates sirf functions ke liye nahi, balki aap class templates bhi bana sakte hain. Neeche ek simple example hai:

```cpp
#include <iostream>

// Class template generic Pair ke liye
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(const T1 &f, const T2 &s) : first(f), second(s) {}
};

int main() {
    Pair<int, double> p1(1, 3.14);
    Pair<std::string, bool> p2("Hello", true);

    std::cout << "Pair 1: " << p1.first << ", " << p1.second << std::endl;
    std::cout << "Pair 2: " << p2.first << ", " << p2.second << std::endl;

    return 0;
}
```

Is example mein, hum ek class template `Pair` define karte hain, jo do alag alag data types ke moolon ko hold kar sakta hai. Hum `Pair` objects alag alag data types ke sath banate hain aur unke moolon ko print karte hain.

### Advanced Template Concepts (Advanced Template Vichar):

1. **Template Specialization (Template Visheshtata):**
   Aap templates ko specific types ke liye specialize kar sakte hain, jisse aap particular types ke liye custom behavior implement kar sakte hain.

```cpp
template <>
std::string mool(std::string a, std::string b) {
    return (a.length() > b.length()) ? a : b;
}
```

2. **Variadic Templates (Variadic Template):**
   Variadic templates allow karte hain ki aap alag alag sankhya ke template arguments ke sath kaam kar sakte hain.

```cpp
template <typename... Args>
void printArgs(Args... args) {
    ((std::cout << args << " "), ...);
}
```

3. **Template Metaprogramming (Template Metaprogramming):**
   Templates ko advanced tarike se use karke, compile time par computations kar sakte hain.

```cpp
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
}
```

Ye udaharan function templates aur class templates ke versatility ko dikhate hain. Ye aapko alag alag data types ke sath punah prayogshil aur type-safe code likhne ki anumati dete hain.
