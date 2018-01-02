In this section, we will look at some basic operations performed in octave.
Gradually, we will see how we can build a program in octave to solve our ML problems/algorithms.

For understanding about any command in Octave, type 'help <command_name>'

#### Basic Operations
```
octave:1> 5+6
ans =  11
octave:2> 5-6
ans = -1
octave:3> 5^6
ans =  15625
octave:4> 5 == 6
ans = 0
octave:5> 5 == 5
ans =  1
octave:6> 1 && 0
ans = 0
octave:7> 1 || 0
ans =  1
octave:8> 5 ~= 6
ans =  1
```
### Matrix Operations

#### Defining a matrix
```
octave:9> A = [1 2; 3 4; 5 6]
A =

   1   2
   3   4
   5   6
```
#### Defining a vector
```
octave:10> V = [1 2 3]
V =

   1   2   3

octave:11> V = [1; 2; 3]
V =

   1
   2
   3
 ```

#### Defining special matrices
```
octave:12> ones(2,3)
ans =

   1   1   1
   1   1   1

octave:13> ones(3,4)
ans =

   1   1   1   1
   1   1   1   1
   1   1   1   1

octave:15> zeros(2,3)
ans =

   0   0   0
   0   0   0

octave:16> rand(2,3)
ans =

   0.402471   0.392975   0.045269
   0.672309   0.515049   0.547201

octave:17> randn(2, 3)
ans =

   0.020068   0.721126  -1.536936
   0.870038  -0.159717   0.377275

octave:20> w = -6 + sqrt(10) * (randn(1, 3000));
octave:21> hist(w)
```
<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img36.png">

```
octave:23> eye(4)
ans =

Diagonal Matrix

   1   0   0   0
   0   1   0   0
   0   0   1   0
   0   0   0   1
 
 ```

#### Finding size of a matrix

```
octave:24> A = [1 2; 3 4; 5 6]
A =

   1   2
   3   4
   5   6

octave:25> sz=size(A)
sz =

   3   2

octave:26> A = [1; 2; 3]
A =

   1
   2
   3

octave:27> sz=size(A)
sz =

   3   1

octave:29> sz=size(A, 1)
sz =  3
octave:30> sz=size(A, 2)
sz =  1


octave:28> length(A) %length is only for a vector
ans =  3

```

#### Moving the data around

```
octave:28> load features.dat  %Loads a file into the octave workspace
octave:29> load prices.dat

octave:29> who                % checks the variables present in the workspace
octave:29> clear              % clears the variables present in the workspace
octave:29> save predictions.txt var -ascii       % exports the variable present in the workspace to a file in human readable format
```

#### Accessing elements

```
octave:31> A = [1 2; 3 4; 5 6]
A =

   1   2
   3   4
   5   6

octave:32> A(2,2)
ans =  4

octave:33> A(2,:)          % ':' means every element in that row/column
ans =

   3   4
```

#### Appending Row
```
octave:31> A = [1 2; 3 4; 5 6]
A =

   1   2
   3   4
   5   6
octave:34> A = [A; [7 8]]
A =

   1   2
   3   4
   5   6
   7   8
```

#### Appending Column
```
A =

   1   2
   3   4
   5   6
   7   8

octave:35> A = [A, [ 10; 11; 12; 13]]
A =

    1    2   10
    3    4   11
    5    6   12
    7    8   13
```

#### Appening matrices
```
octave:36> A = [1 2; 3 4; 5 6]
A =

   1   2
   3   4
   5   6

octave:37> B = [7 8; 9 10; 11 12]
B =

    7    8
    9   10
   11   12

octave:38> c = [A B]
c =

    1    2    7    8
    3    4    9   10
    5    6   11   12

octave:39> c = [A; B]
c =

    1    2
    3    4
    5    6
    7    8
    9   10
   11   12
```

#### All elements in a vector
```
octave:40> A(:)
ans =

   1
   3
   5
   2
   4
   6
```
