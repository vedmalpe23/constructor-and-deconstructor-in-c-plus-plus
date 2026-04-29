#  Constructors and Destructors in C++

##  Aim

The aim of understanding **constructors** and **destructors** in C++ is to:

- Automate the **initialization** and **cleanup** processes for objects.
- Ensure that resources such as memory, file handles, and network connections are properly **acquired and released**.
- Promote the principles of **Object-Oriented Programming (OOP)**, such as **encapsulation**, by binding resource management directly to the lifecycle of objects.
- Enable developers to write **robust**, **efficient**, and **maintainable** code by reducing manual intervention in resource handling.

---

##  Theory of Constructors

###  Definition

A **constructor** is a special member function of a class that is **automatically invoked when an object is created**. Its main purpose is to **initialize the object’s data members**.

###  Characteristics

- Has the **same name as the class**.
- Has **no return type**, not even `void`.
- Is automatically called when an object is instantiated.
- Can be **overloaded** to support different ways of initializing objects.
- Can be **default**, **parameterized**, **copy**, or **delegating**, depending on how initialization is performed.

### Purpose

- Ensure that objects start their lifetime in a **valid state**.
- Automate the initialization of data members.
- Support **dynamic memory allocation** during object creation when needed.
- Allow the creation of object copies with desired behaviors.

---

## Theory of Destructors

###  Definition

A **destructor** is a special member function of a class that is **automatically invoked when an object is destroyed**. Its main purpose is to **release resources** acquired by the object during its lifetime.

### Characteristics

- Has the **same name as the class**, preceded by a **tilde (~)**.
- Has **no arguments** and **no return type**.
- **Cannot be overloaded** — only one destructor per class.
- Automatically called when an object goes out of scope or is explicitly deleted.

###  Purpose

- Perform **cleanup tasks** such as deallocating dynamic memory or closing open files.
- Prevent **memory leaks** and **resource leaks**.
- Ensure that resources are released in a **controlled and predictable manner**.

---

## Relationship Between Constructor and Destructor

- **Constructors and destructors work together** to manage the lifecycle of an object.
- While constructors handle **resource acquisition**, destructors handle **resource release**.
- This principle is often referred to as **RAII** (Resource Acquisition Is Initialization), a key idiom in C++ for managing resources safely and automatically.

---

## Summary

| Concept      | Constructor                         | Destructor                          |
|--------------|--------------------------------------|--------------------------------------|
| Purpose      | Initialize object                   | Cleanup before object destruction    |
| Invocation   | When an object is created           | When an object goes out of scope     |
| Overloading  | Allowed                             | Not allowed                          |
| Return Type  | None                                | None                                 |
| Name         | Same as class name                  | Tilde (~) followed by class name     |

---

##  Importance in C++

Understanding constructors and destructors is essential for:

- Writing **safe and efficient** object-oriented programs.
- Managing **dynamic resources** like heap memory and system handles.
- Avoiding issues like **memory leaks**, **undefined behavior**, and **resource contention**.
- Building **scalable and reusable** C++ software components.

---
## Program 1:
This program demonstrates a simple use of a class in C++ to input and display student information using a constructor and a member function.


## Step-wise Algorithm

**Step-1:** Start the program.

**Step-2:** Define a class named `student` with private data members:  
- `rollno` (integer)  
- `name` (character array)  
- `fee` (double)  

**Step-3:** Create a constructor for the class that:  
- Asks the user to enter the roll number and stores it.  
- Asks the user to enter the name and stores it.  
- Asks the user to enter the fee and stores it.  

**Step-4:** Define a member function `display()` that prints:  
- The roll number  
- The name  
- The fee  

**Step-5:** In the `main()` function:  
- Create an object of the class `student` (which calls the constructor).  
- Call the `display()` function using the object.  

**Step-6:** End the program.

---

