# Gradient Descent

So we have our hypothesis function and we have a way of measuring how well it fits into the data. Now we need to estimate the parameters in the hypothesis function. That's where gradient descent comes in.

Imagine that we graph our hypothesis function based on its fields θ0 and θ1 (actually we are graphing the cost function as a function of the parameter estimates). We are not graphing x and y itself, but the parameter range of our hypothesis function and the cost resulting from selecting a particular set of parameters.

We put θ0 on the x axis and θ1 on the y axis, with the cost function on the vertical z axis. The points on our graph will be the result of the cost function using our hypothesis with those specific theta parameters. The graph below depicts such a setup.

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img19.png" height="200" width="300"/>

We will know that we have succeeded when our cost function is at the very bottom of the pits in our graph, i.e. when its value is the minimum. The red arrows show the minimum points in the graph.

The way we do this is by taking the derivative (the tangential line to a function) of our cost function. The slope of the tangent is the derivative at that point and it will give us a direction to move towards. We make steps down the cost function in the direction with the steepest descent. The size of each step is determined by the parameter α, which is called the learning rate.

For example, the distance between each 'star' in the graph above represents a step determined by our parameter α. A smaller α would result in a smaller step and a larger α results in a larger step. The direction in which the step is taken is determined by the partial derivative of J(θ0,θ1). Depending on where one starts on the graph, one could end up at different points. The image above shows us two different starting points that end up in two different places.

The gradient descent algorithm is:

repeat until convergence:
<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img20.png"/>

where

j=0,1 represents the feature index number.

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img21.png" />


# Gradient Descent Intuition

We use one parameter θ1 and plot its cost function to implement a gradient descent.

The following graph shows that when the slope is negative, the value of θ1 increases and when it is positive, the value of θ1 decreases.

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img22.png" height="200" width="300"/>

On a side note, we should adjust our parameter α to ensure that the gradient descent algorithm converges in a reasonable time. Failure to converge or too much time to obtain the minimum value imply that our step size is wrong.

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img23.png" height="200" width="300"/>

### How does gradient descent converge with a fixed step size α?

The intuition behind the convergence is that the derivative approaches 0 as we approach the bottom of our convex function. At the minimum, the derivative will always be 0 and thus we get:

**θ1:= θ1 − α∗0**

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img24.png" height="200" width="300"/>

# Gradient Descent For Linear Regression

When specifically applied to the case of linear regression, a new form of the gradient descent equation can be derived. We can substitute our actual cost function and our actual hypothesis function and modify the equation to :

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img25.png"/>

where m is the size of the training set, θ0 a constant that will be changing simultaneously with θ1 and xi,yiare values of the given training set (data).

Note that we have separated out the two cases for θj into separate equations for θ0 and θ1; and that for θ1 we are multiplying xi at the end due to the derivative. The following is a derivation  for a single example :

<img src="https://github.com/pritishmishra/takeaways/blob/master/images/img26.png" height="200" width="300"/>

The point of all this is that if we start with a guess for our hypothesis and then repeatedly apply these gradient descent equations, our hypothesis will become more and more accurate.

So, this is simply gradient descent on the original cost function J. This method looks at every example in the entire training set on every step, and is called batch gradient descent. Note that, while gradient descent can be susceptible to local minima in general, the optimization problem we have posed here for linear regression has only one global, and no other local, optima; thus gradient descent always converges (assuming the learning rate α is not too large) to the global minimum. Indeed, J is a convex quadratic function.
