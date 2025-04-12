# 📝 Assignment: Test-Driven Development — Implementing a `TodoList` Class in C++


## Objective

Implement a simple `TodoList` class in C++ using raw pointers (`char**`), with a fixed capacity of 32 tasks. You'll practice manual memory management and write your own unit tests using Google Test.

---

## Learning Goals

- Use `char*` and `char**` to manage arrays of C-style strings
- Handle memory safely using `new[]` and `delete[]`
- Write your own versions of `strlen` and `strcpy`
- Use Google Test to write and run unit tests

## 📚 Requirements

You must implement a class with the following interface:

```cpp
class TodoList {
public:
    void init();     
    void destroy();  

    void add_task(const char* task);
    void remove_task(int index);
    const char** get_pending_tasks(int& count) const;

private:
    static const int MAX_TASKS = 32;
    char* tasks[MAX_TASKS];
    int size;

    int string_length(const char* str) const;
    void string_copy(char* dest, const char* src) const;
};
```