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
* 0 <= x<sub>1</sub> < x<sub>2</sub> <= 10000
* 1 <= v<sub>1</sub> <= 10000
* 1 <= v<sub>2</sub> <= 10000

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


### Algorithm
