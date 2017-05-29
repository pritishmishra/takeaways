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

## [Functional](#functional)

## [Iterators](#iterators)
