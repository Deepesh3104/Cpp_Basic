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

Bilkul! Chaliye hum class templates ko C++ mein basic se lekar advanced tak, code ke saath samjhate hain.

### Class Templates Ki Basic Samjh:

Class templates C++ mein generic classes banane mein madad karte hain, jo alag alag data types ke saath kaam kar sakte hain. Ye specific classes banane ke liye blueprint ki tarah kaam karte hain jisme data types ke liye jagah hai.

**Class Template Declaration Ki Syntax:**
```cpp
template <typename T>
class MeraTemplate {
public:
    T data;
    MeraTemplate(T value) : data(value) {}
    void display() {
        std::cout << data << std::endl;
    }
};
```

Is basic udaharan mein:
- `template <typename T>` ek class template declare karta hai jisme ek type parameter `T` hota hai.
- `MeraTemplate` class template ka naam hai.
- Class ke andar `T data;` ek member variable declare karta hai jo type `T` ka hota hai.
- `MeraTemplate(T value)` ek constructor hai jo `data` ko initialize karta hai.
- `display()` ek member function hai jo `data` ko dikhata hai.

### Class Template Ka Istemal Karna:
Class template ka istemal karte waqt aap instance banate samay data type specify karte hain.

```cpp
int main() {
    MeraTemplate<int> intObj(42);  // Int data type ke sath MeraTemplate ka ek instance banaya.
    MeraTemplate<double> doubleObj(3.14);  // Double data type ke sath ek aur instance banaya.

    intObj.display();  // Output: 42
    doubleObj.display();  // Output: 3.14

    return 0;
}
```

Is udaharan mein, humne `MeraTemplate` class ke do instances banaye, ek int aur ek double data type ke saath.

### Class Templates Ki Intermediate Samjh:
Class templates aur bhi complex ho sakte hain multiple type parameters, default values, aur specialized implementations ke saath.

**Multiple Type Parameters:**
Aap class template mein ek se adhik type parameters rakh sakte hain.

```cpp
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;
    Pair(T1 a, T2 b) : first(a), second(b) {}
};
```

**Type Parameters Ke Liye Default Values:**
Aap type parameters ke liye default values specify kar sakte hain.

```cpp
template <typename T = int>
class MeraTemplate {
public:
    T data;
    MeraTemplate(T value) : data(value) {}
};
```

**Template Specialization:**
Aap class template ko specific types ke liye customize kar sakte hain custom behavior dene ke liye.

```cpp
template <>
class MeraTemplate<char> {
public:
    char data;
    MeraTemplate(char value) : data(value) {}
    void display() {
        std::cout << "Character: " << data << std::endl;
    }
};
```

### Class Templates Ki Advanced Samjh:
Class templates ke advanced topics mein template metaprogramming aur variadic templates shaamil hote hain.

**Template Metaprogramming:**
Class templates ko template specialization aur recursion ka istemal karke compile time par computations ke liye use kiya ja sakta hai.

```cpp
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
};
```

**Variadic Templates:**
Variadic templates aapko variable number ke type parameters ya arguments ke saath kaam karne mein madad karte hain.

```cpp
template <typename... Args>
class Tuple {
    // Variable number ke types ke saath tuple ko handle karne ki implementation.
};
```

Saaransh mein, C++ mein class templates generic classes banane ka powerful tareeka dete hain jo alag alag data types ke saath kaam kar sakte hain. Ye advanced ho sakte hain multiple type parameters, default values, template specialization, aur template metaprogramming aur variadic templates ko support karke.

Ye udaharan function templates aur class templates ke versatility ko dikhate hain. Ye aapko alag alag data types ke sath punah prayogshil aur type-safe code likhne ki anumati dete hain.
