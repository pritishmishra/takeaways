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
<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img36.png">

octave:23> eye(4)
ans =

Diagonal Matrix

   1   0   0   0
   0   1   0   0
   0   0   1   0
   0   0   0   1
 
 ```
