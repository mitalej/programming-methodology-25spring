#include "todo.h"
#include <stdexcept>

void TodoList::init() {
    // TODO: set size to 0 and all task pointers to nullptr
}

void TodoList::destroy() {
    // TODO: delete all tasks and reset pointers
}

int TodoList::string_length(const char* str) const {
    // TODO: return the number of characters before '\0'
    return 0;
}

void TodoList::string_copy(char* dest, const char* src) const {
    // TODO: copy characters from src to dest
}

void TodoList::add_task(const char* task) {
    // TODO: if full, throw. otherwise allocate and copy new task
}

void TodoList::remove_task(int index) {
    // TODO: check bounds, delete task, shift left
}

const char** TodoList::get_pending_tasks(int& count) const {
    // TODO: set count and return task array
    return nullptr;
}