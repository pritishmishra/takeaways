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
 - In computing, associative containers refer to a group of class templates in the standard library of the C++ programming language that implement ordered associative arrays.
 - Being templates, they can be used to store arbitrary elements, such as integers or custom classes. 
 - The following containers are defined in the current revision of the C++ standard: set, map, multiset, multimap.
 - **Associative arrays:** is an abstract data type composed of a collection of (key, value) pairs, such that each possible key appears at most once in the collection.
 - **Characteristics:**
    - **Key uniqueness:** In `map` and `set` each key must be unique. `multimap` and `multiset` do not have this restriction.
    - **Element composition:** In `map` and `multimap` each element is composed from a key and a mapped value. In `set` and `multiset` each element is key; there are no mapped values.
    - **Element ordering:** Elements follow a strict weak ordering
  - **e.g.** The following code demonstrates how to use the `map<string, int>` to count occurrences of words. It uses the word as the key and the count as the value.
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img1.png" height="300" width="500"/>
  **e.g.** This illustrates inserting elements into a map using the insert function and searching for a key using a map iterator and the find function:
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img2.png" height="600" width="700"/>
  **e.g.** This is an example of looping through a map to display all keys and values using iterators:
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img3.png" height="400" width="600"/>

- ### [Set](#set)
  - Sets are containers that store unique elements following a specific order.
  - In a set, the value of an element also identifies it (the value is itself the key, of type T), and each value must be unique. 
  - The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.
  - Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
  - Set and multiset are particularly well suited to the set algorithms includes, set_union, set_intersection, set_difference, and set_symmetric_difference. 
  - The reason for this is twofold. 
    - First, the set algorithms require their arguments to be sorted ranges, and, since set and multiset are Sorted Associative Containers, their elements are always sorted in ascending order. 
    - Second, the output range of these algorithms is always sorted, and inserting a sorted range into a set or multiset is a fast operation: the Unique Sorted Associative Container and Multiple Sorted Associative Container requirements guarantee that inserting a range takes only linear time if the range is already sorted.
  - **Deep Dive:** [Reference 1](http://www.sgi.com/tech/stl/set.html)/[Reference 2](http://www.cplusplus.com/reference/set/set/)
  
- ### [Map](#map)
  - Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
  - In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. 
  - The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:
  `typedef pair<const Key, T> value_type;`
  - Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
  - The mapped values in a map can be accessed directly by their corresponding key using the bracket operator ((operator[]).
  - **Deep Dive:** [Reference 1](http://www.sgi.com/tech/stl/Map.html)/[Reference 2](http://www.cplusplus.com/reference/map/map/)

- ### [Multiset](#multiset)
  - **Multiple-key set**
  - Multisets are containers that store elements following a specific order, and where multiple elements can have equivalent values.
  - In a multiset, the value of an element also identifies it (the value is itself the key, of type T). 
  - The value of the elements in a multiset cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.
  - Internally, the elements in a multiset are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
  - **Deep Dive:** [Reference 1](http://www.sgi.com/tech/stl/multiset.html)/[Reference 2](http://www.cplusplus.com/reference/set/multiset/)
- ### [Multimap](#multimap)
  - Multimaps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order, and where multiple elements can have equivalent keys.
  - In a multimap, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. 
  - The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both.
  - **Deep Dive:** [Reference 1](http://www.sgi.com/tech/stl/Multimap.html)/[Reference 2](http://www.cplusplus.com/reference/map/multimap/)
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img4.png" height="400" width="600"/>
## [Functional](#functional)

## [Iterators](#iterators)
- The most obvious form of iterator is a pointer: A pointer can point to elements in an array, and can iterate through them using the increment operator (++). 
- But other kinds of iterators are possible. For example, each container type (such as a list) has a specific iterator type designed to iterate through its elements.
- Notice that while a pointer is a form of iterator, not all iterators have the same functionality of pointers
- ### [Input Iterator](#input)
  - Input iterators are iterators that can be used in sequential input operations, where each value pointed by the iterator is read only once and then the iterator is incremented.
  - All forward, bidirectional and random-access iterators are also valid input iterators.
  - Algorithms requiring input iterators should be single-pass input algorithms: algorithms pass through an iterator position once at most.
  - **Properties:**
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img5.png" height="200" width="600"/>
  
- ### [Forward Iterator](#forward)
  - Forward iterators are iterators that can be used to access the sequence of elements in a range in the direction that goes from its beginning towards its end.
  - Performing operations on a forward iterator that is dereferenceable never makes its iterator value non-dereferenceable. 
  - This enables algorithms that use this category of iterators to use multiple copies of an iterator to pass more than once by the same iterator values.
  - All bidirectional and random-access iterators are also valid forward iterators.
  - These properties are the same as those of bidirectional iterators, except that forward iterators only support being incremented (but not decreased).
  - **Properties:**
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img6.png" height="200" width="600"/>

- ### [Bi-directional Iterator](#bi-directional)
  - Bidirectional iterators are iterators that can be used to access the sequence of elements in a range in both directions (towards the end and towards the beginning).
  - All random-access iterators are also valid bidirectional iterators.
  - **Properties:**
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img7.png" height="200" width="600"/>

- ### [Random-access Iterator](#random-access)
  - Random-access iterators are iterators that can be used to access elements at an arbitrary offset position relative to the element they point to, offering the same functionality as pointers.
  - Random-access iterators are the most complete iterators in terms of functionality. 
  - All pointer types are also valid random-access iterators.
  - **Properties:**
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img8.png" height="300" width="600"/>

- ### [Output Iterator](#output)
  - Output iterators are iterators that can be used in sequential output operations, where each element pointed by the iterator is written a value only once and then the iterator is incremented.
  - All forward, bidirectional and random-access iterators that are not constant iterators are also valid output iterators.
  - Algorithms requiring output iterators should be single-pass output algorithms: each iterator position is dereferenced once at most.
  - **Properties:**
  <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img9.png" height="200" width="600"/>
  
 - ### [Iterator Operations](#iterator-operations)
    - **advance**
      - Advances the iterator it by n element positions.
      - If it is a random-access iterator, the function uses just once operator+ or operator-. Otherwise, the function uses repeatedly the increase or decrease operator (operator++ or operator--) until n elements have been advanced.
      <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img10.png" height="300" width="600"/>
    - **distance**
      - Return distance between iterators
      - Calculates the number of elements between first and last.
      <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img11.png" height="300" width="600"/>
    - **begin**
      - Iterator to beginning
      - Returns an iterator pointing to the first element in the sequence:
      - (1) Container: The function returns cont.begin().
      - (2) Array: The function returns the array-to-pointer conversion of its argument.
      - If the sequence is empty, the returned value shall not be dereferenced.
      - These function templates are defined in multiple headers: Each of these headers includes the generic templates for all container and array types and not simply a specific overload. 
       - The headers are: `<iterator>`, `<array>`, `<deque>`, `<forward_list>`, `<list>`, `map`, `<regex>`, `<set>`, `<string>`, `<unordered_map>`, `<unordered_set>` and `<vector>`.
      - Conversely, begin is overloaded (with a different definition) in headers `<initializer_list>` and `<valarray>`.
      <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img12.png" height="350" width="600"/>
    - **end**
      - Same as **begin**.
    - **prev**
      - Get iterator to previous element
      - Returns an iterator pointing to the element that *it* would be pointing to if advanced -n positions
      <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img13.png" height="300" width="600"/>
    - **next**
      - Returns an iterator pointing to the element that *it* would be pointing to if advanced n positions.
      - *it* is not modified.
      <img src="https://github.com/pritishmishra/takeaways/blob/master/images/img14.png" height="300" width="500"/>
