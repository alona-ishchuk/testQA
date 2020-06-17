
Alice and Bob are playing some game. There are 3 criterias of estimation : clarity, originality and difficulty.
Let's define Alice's rating of this game to be a triplet a = (a[0], a[1], a[2]) and Bob's rating to be 
the triplet b = (b[0], b[1], b[2]).
Your task is to find who wins by comparison points a[0] with b[0], a[1] with b[1] and a[2] with b[2].
if a[i]>b[i], then Alice is awarded 1 point.
if a[i]<b[i], then Bob is awarded 1 point.
if a[i]=b[i], then neither person receives a point.

Input format:
a[0] a[1] a[2]
b[0] b[1] b[2]

Output format:
Alice's score | Bob's score
-----------------------------------------------------
Example: 
Alice's results are:
Clarity - 3
Originality - 4
Difficulty - 5

So Alice's triplet is a = (3, 4 and 5)

Bob's results are:
Clarity - 1
Originality - 2
Difficulty - 8

So Bob's triplet is b = (1, 2 and 8)

Let's compare it now:
3>1 so Alice gets a point
4>2 so Alice gets the point again
5<8 so Bob gets the point
So final score is 2:1

Sample input:
3 4 5
1 2 8

Sample output
2 | 1

Program can be run on the ideone.com (https://ideone.com/qUv4NE )
