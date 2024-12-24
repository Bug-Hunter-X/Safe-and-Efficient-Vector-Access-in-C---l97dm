# Safe and Efficient Vector Access in C++

This code demonstrates several ways to access elements of a `std::vector` in C++, highlighting safe practices and efficient techniques.

**Key Concepts:**

*   **`at()` method:**  Provides bounds checking; throws an exception if you try to access an element outside the vector's range.
*   **Iterators:** Offer a powerful and flexible way to traverse the vector.
*   **Range-based for loops:** A modern and readable approach to iterating over container elements.

**Why this is important:**  Out-of-bounds vector access is a frequent source of bugs in C++. This example shows how to avoid this issue and how to write efficient and readable vector access code.