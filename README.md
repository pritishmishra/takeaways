# takeaways

# Machine Learning

- The ability to introspect on and manage your own thought processes is known as metacognition.
- **Parallel Reading:** read two different (possibly unrelated) things in parallel. Read a few paragraphs of one, then a few paragraphs of the other, and so on. Each time you switch, try to recall what the previous stretch of text was about. Switching forces it out of your working memory (the kind that stores words and images for short times). Therefore, you find out whether the material actually made it into your long-term memory.


### Understanding Softmax
- Article: https://rasbt.github.io/mlxtend/user_guide/classifier/SoftmaxRegression/
- I wanted to document 3 major things here which helped me understand.
- I am referring to the analogies as in article: https://jalammar.github.io/visual-interactive-guide-basics-neural-networks
- Classes: Here classes 0, 1, 2 can be thought of as the output you are expecting from your function. e.g. Good, Bad as in the house example in 2nd article.
- Features: Here features of the dataset can be thought of as 'Price per sq. ft.' and 'No. of bathrooms' as in 2nd article.
- Bias: You need one bias for every class that you have.
- So while building the function, each dataset will have 2 features. As there are 4 datasets, thus, it is 4x2 matrix. You can consider dataset as a single sample, which is just like '$250 per sq. ft' and '3 bathrooms'. You have to predict 'Good', 'Medium', 'Bad'.
- For undestanding weight matrix, just go through the 2nd article once. Notice the first example. Let's say you are predicting a class for one feature and one bias. So, c = wx + b. Now we have 3 classes. So we will need 3 w's. We also have 2 features. So we will need 3 w's per feature. So, here we have 2x3 matrix. 2 rows for each feature, 3 columns for each class.
- Similarly, We will need 3 bias for each class.
- My prime objective was to understand the model. Rest of it is gradient descent model and how, upon running large no of iterations, we come to a normalised score and it helps us to predict the sample into the resultant class.

# Netflix TechBlog

## 5 Lessons to learn if you are using AWS (or any cloud solution)
Good Read: :+1: [5 Lessons We’ve Learned Using AWS](https://medium.com/netflix-techblog/5-lessons-weve-learned-using-aws-1f2a28588e4c)

## Ensuring video streaming standards in HTML5
[HTML5 and Video Streaming](https://medium.com/netflix-techblog/html5-and-video-streaming-a3563b19eb02)

## Netflix use of 3 NoSQL database solutions simultaneously
[Leveraging Amazon SimpleDB, HBase, Cassandra all at once](https://medium.com/netflix-techblog/nosql-at-netflix-e937b660b4c)

## Partial Response & Partial Update
- [Making APIs Faster: Introducing Partial Response and Partial Update](http://googlecode.blogspot.de/2010/03/making-apis-faster-introducing-partial.html)
- Conceptualizing the API as a database. A database can handle incredible variability in requests through SQL. The API should also be able to answer questions with the same degree of variability that SQL can for a database. e.g. [YQL](https://developer.yahoo.com/yql/)

## No Silver Bullet
- [No Silver Bullet](https://en.wikipedia.org/wiki/No_Silver_Bullet)
- Brooks distinguishes between two different types of complexity: **accidental complexity** and **essential complexity**. 
- Accidental complexity relates to problems which engineers create and can fix; for example, the details of writing and optimizing assembly code or the delays caused by batch processing. 
- Essential complexity is caused by the problem to be solved, and nothing can remove it; if users want a program to do 30 different things, then those 30 things are essential and the program must do those 30 different things.



## P.S.:
- ## What are Chatty APIs?
  - [Addressing “chattiness” in a REST API](http://stackoverflow.com/questions/18900741/addressing-chattiness-in-a-rest-api)
- ## CAP Theorem
  - The CAP Theorem states that in the presence of a network partition, one has to choose between consistency[a] and availability[b].
  - 1. Consistency: Every read receives the most recent write or an error.
  - 2. Availability: Every request receives a (non-error) response – without guarantee that it contains the most recent write
  - [CAP Theorem Wiki](https://en.wikipedia.org/wiki/CAP_theorem)

## Dig Deeper?
- Cassandra as NoSQL solution
  - Concepts of NoSQL
  - How Cassandra works?
  - How can it be integrated for big data use-cases?
  - Pros & Cons


# Competitive Programming
I am learning the fundamentals of Competitive Programming. I will be sharing some of the resources that I read and followed.

[How do people solve HackerRank contests so fast? - Quora](https://www.quora.com/How-do-people-solve-HackerRank-contests-so-fast/answer/Ana-Echavarria?srid=2c8S)

[Standard Template Library (STL)](https://github.com/pritishmishra/takeaways/blob/master/stl.md)

**Amazing exhaustive resource for STL by Dmitry Korolev :** [Part 1](https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-1/) / [Part 2](https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-2/)

# Misc
## Data Storage in Distributed Computing
:+1:[How Your Data is Stored, or, The Laws of the Imaginary Greeks](https://hackernoon.com/how-your-data-is-stored-or-the-laws-of-the-imaginary-greeks-54c569c17a49): An amazing geeky story describing the whole data-storage process (eventual/strong consistency, Quorum decision, Master election, etc.)
A really long article, but worth your time if you need to understand/revisit the concepts in an interesting story manner.
