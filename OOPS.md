
Bilkul! Chaliye sabhi Object-Oriented Programming (OOP) concepts ko C++ mein hinglish mein depth mein samjhein, saath hi code examples ke saath.

### 1. Classes and Objects:

**Classes:** Class ek blueprint hoti hai object banane ke liye. Yeh attributes (data members) aur behaviors (member functions) define karti hai jo uske objects ke paas honge.

```cpp
class Student {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
```

**Objects:** Object class ka ek instance hota hai, jo data aur methods dono ko encapsulate karta hai.

```cpp
Student s1;   // Student class ka ek object banaya
s1.name = "Alice";
s1.age = 20;
s1.displayInfo();   // Output: Name: Alice, Age: 20
```

### 2. Encapsulation:

**Encapsulation:** Data aur methods ko class ke andar bundle karna, access ko access specifiers ke through control karna.

```cpp
class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}  // Constructor balance ko initialize karta hai

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};
```

### 3. Inheritance:

**Inheritance:** Ek new class (derived ya child class) ko existing class (base ya parent class) se properties aur behaviors inherit karne ki anumati deti hai.

```cpp
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};
```

### 4. Polymorphism:

**Polymorphism:** Alag alag classes ke objects ko ek common base class ke taur par treat karne ki anumati deti hai, isme function overloading aur overriding shamil hai.

```cpp
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
```

### 5. Abstraction:

**Abstraction:** Complex systems ko simpler parts mein todne ka process, abstract classes ka use interface define karne aur implementation details chhupane ke liye hota hai.

```cpp
class AbstractShape {
public:
    virtual void draw() = 0;  // Pure virtual function, class ko abstract banata hai
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
```

### 6. Composition:

**Composition:** Ek design principle hai jahan ek class dusri class ke objects ko members ke roop mein contain karti hai.

```cpp
class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Car {
private:
    Engine carEngine;

public:
    void start() {
        carEngine.start();
        cout << "Car started." << endl;
    }
};
```

### 7. Templates and Generic Programming:

**Templates:** Class aur function templates ka use generic code likhne mein hota hai, jo alag alag data types ke saath kaam kar sakta hai.

```cpp
template <typename T>
class MyContainer {
public:
    T data;
    MyContainer(T value) : data(value) {}
};

MyContainer<int> intContainer(42);
MyContainer<string> strContainer("Hello");
```

### 8. Exception Handling:

**Exception Handling:** Runtime errors ke sath deal karne ke liye ek mechanism hota hai.

```cpp
try {
    if (someCondition) {
        throw MyException("Custom exception message");
    }
} catch (const MyException& e) {
    cerr << "Exception: " << e.what() << endl;
}
```

### 9. Smart Pointers and Memory Management:

**Smart Pointers:** Memory ko automatically manage karne aur memory leaks se bachne ke liye `std::shared_ptr`, `std::unique_ptr`, aur `std::weak_ptr` jaise smart pointers provide kiye jaate hain.

```cpp
std::shared_ptr<int> ptr1 = std::make_shared<int>(42);
std::unique_ptr<double> ptr2 = std::make_unique<double>(3.14);
```

Yeh samjhane mein madadgar honge. C++ mein aap advanced topics aur design patterns explore karke aur complex aur robust software applications develop kar sakte hain.
