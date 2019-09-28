# HKU RoboMaster Training
This is for the HKU RoboMaster Team training, specifically for the training of Automation.

### Important Note
In the following sections, whatever in the square brackets should be replaced by your specifications.

## One. How to submit your assignment

### Step One: Create a new branch with your name, using an underscore to replace any spaces in your name.

To create a branch, you just click the `branch:master` button and type the new branch name into the textbox. Example of a branch name is `liu_yun_hao` Click the button "Create a branch ..." under the textbox to confirm. Done!

This branch is where you are going to submit your code.

**NEVER submit your assignment to the master branch. Otherwise, you may get a ZERO mark with no chance to argue.**

### Step Two: Clone the Repo to your local machine.

To clone the repo, you simply click the button `clone or download`, click the button to the right of the URL to copy the URL.

Then you should open your git bash application software, and type in:

```sh
git clone [THE COPIED URL]
```
Press Enter.

After everything is finished, type in
```sh
cd HKURoboMasterTraining
```
to enter the folder which contains the content of the repo you have just cloned.

Then fetch the branch you have just created and checkout to that branch to start coding.

```sh
git fetch origin [YOUR BRANCH NAME]
```
```sh
git checkout [YOUR BRANCH NAME]
```

### Step Three: Use whatever you have learnt or searched google to finish the given tasks.

Try your best and we trust you have the ability to finish them.

### Step Four: Add and Commit

After each modification, remember to stage your work by `git add .` command.

After a certain period of working, remember to create a commit with
```sh
git commit -m "[BREIF INTRO]"
```
command so that you keep a fresh historical recording of your work.

*This is essential even if your code doesn't work, your git history provides us with sufficient information of your devotion into the tasks.*

### Step Five: Push

```sh
git push
```
After you are convinced that all the tasks have been fulfilled, you can submit your commits by `git push`. Remember that GitHub is a platform for **opensource** projects, which means your work is **exposed to everyone**. If you are not willing to do so, you can conduct the push near the end of the assignment deadline.

*Do not worry that this will make us think that you are a deadline fighter. As your working history is stored in the git commit history, we can track the exact time you make those git commits.*

*Moreover, this may also become the first-hand proof of any overdue work.*
