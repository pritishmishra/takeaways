# Standard Template Library

The Standard Template Library, or STL, is a C++ library of container classes, algorithms, and iterators; it provides many of the basic algorithms and data structures of computer science. The STL is a generic library, meaning that its components are heavily parameterized: almost every component in the STL is a template. You should make sure that you understand how templates work in C++ before you use the STL.

It provides four components called [algorithms](#algorithms), [containers](#containers), [functional](#functional), and [iterators](#iterators).

## [Algorithms](#algorithms)

## [Containers](#containers)
- They store objects in an organized way that follows specific access rules. The size of the container depends on the number of objects (elements) it contains.

- A Container is an object that stores other objects (its elements), and that has methods for accessing its elements. In particular, every type that is a model of Container has an associated iterator type that can be used to iterate through the Container's elements.

- Containers replicate structures very commonly used in programming: dynamic arrays (vector), queues (queue), stacks (stack), heaps (priority_queue), linked lists (list), trees (set), associative arrays (map)...

- The STL includes the classes vector, list, deque, set, multiset, map, multimap, hash_set, hash_multiset, hash_map, and hash_multimap.

- Containers can be divided into two groups.
  -  **Single value containers:** Each object is stored independently in the container and it is accessed directly or with an iterator.

  - **Associative containers:** An associative array, map, or dictionary is a container composed of (key,value) pairs, such that each key appears at most once in the container. The key is used to find the value, the object, if it is stored in the container.

- Many containers have several member functions in common, and share functionalities. The decision of which type of container to use for a specific need does not generally depend only on the functionality offered by the container, but also on the efficiency of some of its members (complexity). This is especially true for sequence containers, which offer different trade-offs in complexity between inserting/removing elements and accessing them.

- [Deep Dive/Reference](http://www.sgi.com/tech/stl/Container.html)

### Sequence Containers

  - ### [Vector](#vector)
    - Vectors are sequence containers representing arrays that can change in size.
    - A vector is a Sequence that supports random access to elements, constant time insertion and removal of elements at the end, and linear time insertion and removal of elements at the beginning or in the middle. 
    - The number of elements in a vector may vary dynamically; memory management is automatic. 
    - Vector is the simplest of the STL container classes, and in many cases the most efficient.
    - **Deep Dive/Reference:** [Reference 1](http://www.sgi.com/tech/stl/Vector.html),  [Reference 2](http://www.cplusplus.com/reference/vector/vector/)
    - [**Implementation Example**](http://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm)

  - ### [Deque](#deque)
    - A deque is very much like a vector: like vector, it is a sequence that supports random access to elements, constant time insertion and removal of elements at the end of the sequence, and linear time insertion and removal of elements in the middle.
    - The main way in which deque differs from vector is that deque also supports constant time insertion and removal of elements at the beginning of the sequence. 
    - Additionally, deque does not have any member functions analogous to vector's capacity() and reserve(), and does not provide any of the guarantees on iterator validity that are associated with those member functions.
    - **Deep Dive/Reference:** [Reference 1](http://www.sgi.com/tech/stl/Deque.html#2), [Reference 2](http://www.cplusplus.com/reference/deque/deque/)

  - ### [List](#list)
    - A list is a doubly linked list. That is, it is a Sequence that supports both forward and backward traversal, and (amortized) constant time insertion and removal of elements at the beginning or the end, or in the middle.
    - Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions.
    - Compared to other base standard sequence containers (array, vector and deque), lists perform generally better in inserting, extracting and moving elements in any position within the container for which an iterator has already been obtained, and therefore also in algorithms that make intensive use of these, like **sorting algorithms**.
    - **Deep Dive/Reference:** [Reference 1](http://www.sgi.com/tech/stl/List.html), [Reference 2](http://www.cplusplus.com/reference/list/list/)

### Associative Containers

## [Functional](#functional)

## [Iterators](#iterators)
