# HackerRank - Kangaroo

## Table of Contents
<!-- TOC -->

- [HackerRank - Kangaroo](#hackerrank---kangaroo)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
        - [Sample Input 1](#sample-input-1)
        - [Sample Output 1](#sample-output-1)
        - [Explanation 1](#explanation-1)
    - [Solving](#solving)
        - [Sequences](#sequences)
            - [Definition](#definition)
            - [Example](#example)
        - [Recurrence Relations](#recurrence-relations)
            - [Definition](#definition-1)
            - [Example](#example-1)
        - [Problem Equations](#problem-equations)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* Given two kangaroos on a number line
* Each are are jumping in positive direction to infinity
* First kangaroo, x<sub>1</sub>, moves at a rate of v<sub>1</sub> meters per jump
* Second kangaroo, x<sub>2</sub>, moves at a rate of v<sub>2</sub> meters per jump
* Will the kangaroos ever land at the same location at the same time?
	* The two kangaroos must land at the same location at the same number of jumps

## Input Format
* A single line of four space-separated integers denoting the respective values of x<sub>1</sub>, v<sub>1</sub>, x<sub>2</sub>, v<sub>2</sub>

## Constraints
* 0 &le; x<sub>1</sub> < x<sub>2</sub> &le; 10000
* 1 &le; v<sub>1</sub> &le; 10000
* 1 &le; v<sub>2</sub> &le; 10000

## Output Format
* Print `YES` if they land on the same location at the same time; otherwise, print `NO`

## Samples

### Sample Input 0
```
0 3 4 2
```

### Sample Output 0
```
YES
```

### Explanation 0
At jump 4, both kangaroos land at 12

### Sample Input 1
```
0 2 5 3
```

### Sample Output 1
```
NO
```

### Explanation 1
* The second kangaroo moves at a faster rate (v<sub>2</sub> > v<sub>1</sub>)
* The first kangaroo will never catch up

## Solving
Used a recurrence relation to solve the problem. A recurrence relation is one of many ways to specify a sequence. A brief description of a sequence follows.

### Sequences
A sequence is a discrete structure used to represent an ordered list. For example, 1, 2, 3, 5, 8 is
a sequence with five terms and 1, 3, 9, 27, 81 , ... , 3<sup>n</sup>, ... is an infinite sequence.

#### Definition
A _sequence_ is a function from a subset of the set of integers (usually either the set{0, 1, 2, ...} or the set {1, 2, 3, ...}) to a set _S_. We use the notation _a<sub>n</sub>_ to denote the image of the integer _n_. We call _a<sub>n</sub>_ a _term_ of the sequence.

#### Example
Consider the sequence {_a<sub>n</sub>_}, where</br></br>
a<sub>n</sub> = 1 / _n_</br></br>
The list of the terms of this sequence, beginning with a<sub>1</sub>, namely,</br></br>
_a_<sub>1</sub>, _a_<sub>2</sub>, _a_<sub>3</sub>, _a_<sub>4</sub>, ... ,</br></br>
starts with</br></br>
**1, 1 / 2, 1 / 3, 1 / 4, ... ,**

### Recurrence Relations

#### Definition
A _recurrence relation_ for the sequence {_a<sub>n</sub>_} is an equation that expresses a<sub>n</sub> in terms of one or more of the previous terms of the sequence, namely, _a_<sub>0</sub>, _a_<sub>1</sub>, ... , _a_<sub>_n_ - 1</sub>, for all integers _n_ with _n_ &ge; _n_<sub>0</sub>, where _n_<sub>0</sub> is a nonnegative integer. A sequence is called a _solution_ of a recurrence relation if its terms satisfy the recurrence relation. (A recurrence relation is said to _recursively define_ a sequence. )

#### Example
Let {_a<sub>n</sub>_} be a sequence that satisfies the recurrence relation _a<sub>n</sub>_ = _a_<sub>_n_ - 1</sub> + 3 for _n_ = 1, 2, 3, ... , and suppose that _a<sub>0</sub>_ = 2. What are _a_<sub>1</sub>, _a_<sub>2</sub>, and _a_<sub>3</sub>?</br></br>
The recurrence relation is
* _a_<sub>1</sub> = _a_<sub>0</sub> + 3 = 2 + 3 = **5**
* _a_<sub>2</sub> = _a_<sub>1</sub> + 3 = 5 + 3 = **8**
* _a_<sub>3</sub> = _a_<sub>2</sub> + 3 = 8 + 3 = **11**

### Problem Equations
* x<sub>n</sub> = x<sub>n - 1</sub> + v<sub>1</sub>
* x<sub>n</sub> = x<sub>n - 1</sub> + v<sub>2</sub>


Input 0
* x<sub>n</sub> = x<sub>n - 1</sub> + v<sub>1</sub>
  * v<sub>1</sub> = **3** (rate)
  * x<sub>0</sub> = **0** (initial location)
  * x<sub>1</sub> = 0 + 3 = **3**
  * x<sub>2</sub> = 3 + 3 = **6**
  * x<sub>3</sub> = 6 + 3 = **9**
  * x<sub>4</sub> = 9 + 3 = **12**
  * x<sub>5</sub> = 12 + 3 = **15**
* x<sub>n</sub> = x<sub>n - 1</sub> + v<sub>2</sub>
  * v<sub>2</sub> = **2** (rate)
  * x<sub>0</sub> = **4** (initial location)
  * x<sub>1</sub> = 4 + 2 = **6**
  * x<sub>2</sub> = 6 + 2 = **8**
  * x<sub>3</sub> = 8 + 2 = **10**
  * x<sub>4</sub> = 10 + 2 = **12**
  * x<sub>5</sub> = 12 + 2 = **14**

x<sub>n - 1</sub> | v<sub>1</sub> | x<sub>n</sub>
---------|----------|---------
 0 | 3 | 3
 3 | 3 | 6
 6 | 3 | 9
 9 | 3 | 12
 12 | 3 | 15
 . | . | .
 . | . | .
 . | . | .

 x<sub>n - 1</sub> | v<sub>2</sub> | x<sub>n</sub>
---------|----------|---------
 4 | 2 | 6
 6 | 2 | 8
 8 | 2 | 10
 10 | 2 | 12
 12 | 2 | 14
 . | . | .
 . | . | .
 . | . | .


### Algorithm
1. Read from input and write to respective variables
2. If v<sub>1</sub> &le; v<sub>2</sub>, print `NO` and end program
3. Compute recursive relation. Print `YES` and end program when x<sub>n</sub> for x<sub>1</sub> and x<sub>2</sub> is equal. Print `NO` and end program when x<sub>n</sub> for x<sub>1</sub> is less than x<sub>2</sub>