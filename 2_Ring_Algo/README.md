# Assignment II for Automation

## Ring Algorithm

What you are going to do is to simulate the ring algorithm in range of (-180,180].

Consider our robot has a head that can rotate for 360 degrees. By convention, we
assume the direction when the robot is just powered on is 0, so then the range of
rotation of the head is limited to (-180, 180]. For simplicity, we can assume that
the degrees are always represented in integers.

Let us assume that now the robot rotates its head in uniform angular velocity, in such a way that it moves to a certain position represented by angles. An example of rotating the head 30 degrees every 2 seconds is as follows:

0

30

60

90

120

150

180

**-150**  _Not 210_

-120

...

-30

0

**30**

You task now is to write a program in C to simulate the algorithm mentioned above.

## Before you start

### Merge the new folder to your branch

The folder where you are currently in is the folder for you to implement the
algorithm. Note this folder only appears in the `master` branch but not your
working branch.

The first task you have to do is to merge the folder to your own branch. You can
have a taste of how Git & GitHub can greatly reduce your workload when you cooperate
within a team.

**On your local machine**
**In your HKURoboMasterTraining folder**
Open the git bash in the folder; do:

```sh
git status
```
_(The command above help you to make sure that you are in your own branch with nothing to commit)_
```sh
git checkout master
git pull

```
After that, do
```sh
git checkout [YOUR BRANCH NAME]
git merge master
```
Should there be any merge conflicts, try to resolve using the procedures we
have discussed before. If you encounter any difficulties, first try to [google](https://www.google.com/search?q=git+merge+conflicts&oq=git+merge+conflicts&aqs=chrome..69i57j35i39j0l4.7513j0j7&sourceid=chrome&ie=UTF-8)
for it and then contact us.

### Go to 2\_Ring\_Alog

Still in the git bash.
```sh
cd 2_Ring_Alog
```

### Start writing code!

## Test case

In the folder there exist a file named `test_case.txt` where you can see a sequence of integers.

Remember that your program should keep asking for integer inputs until the input is no longer an integer.

Your program should exit normally without any exceptions or errors when a non-integer
input is given.

Each time the operator types in an integer, and presses `ENTER`, the program should
output a direction in the unit of degrees afterwards. See the example below:

| Input | Output |
|-------|--------|
| 0 | 0 |
|30 | 30|
|-30| 0 |
|210|-150|
|90|-60|
|70| 10|
|-190|180|
| 1 | -179|
|'c'| (Program exits)|

You may realize that the **input in the test cases** may not be limited to the range mentioned above.

There is no need for you to output in the table format.

Using Euler Coordinates, you can say that a positive input means rotating clockwise, vice versa.

### Additional Notes

1. Should you have any inquiries regarding the assignment, please post your thoughts in Slack.
1. Same as before, your assignment submission should be in your own branches. No need to issue a pull request to the master.
