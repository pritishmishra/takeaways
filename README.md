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

### Machine Learning course by Andrew Ng on Coursera:
- Link: https://www.coursera.org/learn/machine-learning

#### Supervised vs Unsupervised Learning:
- **Supervised Learning:**
- Supervised learning is the machine learning task of inferring a function from labeled training data. The training data consist of a set of training examples. In supervised learning, each example is a pair consisting of an input object (typically a vector) and a desired output value (also called the supervisory signal). A supervised learning algorithm analyzes the training data and produces an inferred function, which can be used for mapping new examples.
- Supervised learning problems are categorized into "regression" and "classification" problems. In a regression problem, we are trying to predict results within a continuous output, meaning that we are trying to map input variables to some continuous function. In a classification problem, we are instead trying to predict results in a discrete output. In other words, we are trying to map input variables into discrete categories.
- Example:
  - Given data about the size of houses on the real estate market, try to predict their price. Price as a function of size is a continuous output, so this is a regression problem.
  - We could turn this example into a classification problem by instead making our output about whether the house "sells for more or less than the asking price." Here we are classifying the houses based on price into two discrete categories.
- More info on this topic in a single article: https://jalammar.github.io/visual-interactive-guide-basics-neural-networks 
- **Unsupervised Learning:**
- Unsupervised machine learning is the machine learning task of inferring a function to describe hidden structure from "unlabeled" data (a classification or categorization is not included in the observations). Since the examples given to the learner are unlabeled, there is no evaluation of the accuracy of the structure that is output by the relevant algorithm—which is one way of distinguishing unsupervised learning from supervised learning and reinforcement learning.
- Example:
  - Clustering: Take a collection of 1,000,000 different genes, and find a way to automatically group these genes into groups that are somehow similar or related by different variables, such as lifespan, location, roles, and so on.
 
#### Cost Function:
<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img18.png" height="500" width="700"/>

#### Gradient Descent:
Please refer to the notes here: https://github.com/pritishmishra/takeaways/blob/master/gradient_descent.md

#### Linear Algebra:
This section provides a refresher on the mathematical terms/derivations which we are going to use for various ML algorithms.
Please refer to the notes here: https://github.com/pritishmishra/takeaways/blob/master/linear_algebra.md

#### Multiple Features
- First, let us introduce how we can bring in multiple features into this model.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/multivariate_linear_regression.md

#### Gradient Descent For Multiple Variables
- Now let us understand how to apply gradient descent for these multiple features.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/multivariate_linear_regression.md

#### Improving performance of gradient descent: Feature Scaling & Mean Normalization
- Next up, we try to improve the efficiency of gradient descent.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/multivariate_linear_regression.md

#### Debugging if Gradient descent is working & Choosing a good value of α, learning rate
- Next up, lets understand how to debug and check if the gradient descent is working.
- Also we try to understand what is a good choice of value for this learning rate.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/multivariate_linear_regression.md

#### Features and Polynomial Regression
- Next, we can improve our features and the form of our hypothesis function in 2 different ways.
- 1. Combining multiple features into one.
- 2. Choosing a polynomial function instead of linear one for our hypothesis.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/multivariate_linear_regression.md

#### Normal Equation
- Gradient descent was one way of minimizing the cost function and predicting values.
- However, that involves running through iterations (sometimes a lot) before arriving at the minimized values.
- Lets see how we can analytically solve and determine the minimized values.
- For this section, refer here: https://github.com/pritishmishra/takeaways/blob/master/normal_equation.md

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
