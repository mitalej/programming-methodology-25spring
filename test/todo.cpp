#include "todo.h"
#include <stdexcept>

void TodoList::init() {
    // TODO: set size to 0 and all task pointers to nullptr
    for(int i=0; i<MAX_TASKS; i++) tasks[i] =nullptr;
    size = 0;
}

void TodoList::destroy() {
    // TODO: delete all tasks and reset pointers
    for (int i=0; i<size; i++) delete[] tasks[i];
    size = 0;
}

int TodoList::string_length(const char* str) const {
    // TODO: return the number of characters before '\0'
    int ret=0;
    while(str[ret] != '\0') ret++;
    return ret;
}

void TodoList::string_copy(char* dest, const char* src) const {
    // TODO: copy characters from src to dest
    int src_len = string_length(src);
    for (int i=0; i<src_len+1; i++) dest[i] = src[i];
}

void TodoList::add_task(const char* task) {
    // TODO: if full, throw. otherwise allocate and copy new task
    if (size == MAX_TASKS) throw std::runtime_error("full");
    else {
        int len = string_length(task);
        tasks[size] = new char[len+1];
        string_copy(tasks[size], task);
        size++;
    }
}

void TodoList::remove_task(int index) {
    // TODO: check bounds, delete task, shift left
    if ((index < 0) || (index>size-1)) throw std::runtime_error("out of index");
    else {
        for(int i=index; i<size-1; i++){
            string_copy(tasks[i], tasks[i+1]);
        }
        delete[] tasks[size];
        size--;
    }
}

const char** TodoList::get_pending_tasks(int& count) const {
    // TODO: set count and return task array
    count = size;
    return const_cast<const char**>(tasks);
}