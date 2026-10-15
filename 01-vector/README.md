# Vector

## What is a Vector?

`std::vector` is a **dynamic array** from the C++ Standard Template 
Library (STL). Unlike a regular array, its **size is not fixed** and 
it can grow or shrink automatically.

Think of it as a box that you can keep adding things to, 
without knowing in advance how many you'll need.

---

## Why Use It?

- When you **don't know the number of elements** in advance
- When you need to **add or remove elements** frequently
- When you need **fast access** to elements (`v[i]`)
- When you want to use **STL algorithms** (`sort`, `find`, ...)

---

## 📂 Files in This Section

| File | Description |
|------|-------------|
| `basic-operations.cpp` | Creation, insertion, deletion, access |
| `size-capacity.cpp` | size, capacity, resize, reserve |
| `iterators.cpp` | begin, end, range-based for |
| `2d-vector.cpp` | Matrix with vector |

### Practice

| File | Description |
|------|-------------|
| `practice/remove-duplicates.cpp` | Remove duplicate elements |
| `practice/find-second-largest.cpp` | Find the second largest element |
| `practice/matrix-with-vector.cpp` | Matrix operations with vector |
