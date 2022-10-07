# How to contribute in Hacktoberfest
1. You can contribute in terms of Code
2. You can contribute in terms of improving Documentation


# STEP BY STEP GUIDE TO HACKTOBERFEST PULL REQUEST:

## 1. Fork this repository

Fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

## 2. Clone the repository

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/clone.png" alt="clone this repository" />

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:

```
git clone "url you just copied"
```

where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/copy-to-clipboard.png" alt="copy URL to clipboard" />

For example:

```
git clone https://github.com/this-is-you/first-contributions.git
```

where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contributions repository on GitHub to your computer.

## 3. Create a branch

Change to the repository directory on your computer (if you are not already there):

```
cd first-contributions
```

Now create a branch using the `git switch` command:

```
git switch -c your-new-branch-name
```

For example:

```
git switch -c branch-name
```

## 4. Make necessary changes and commit those changes

Add those changes to the branch you just created using the `git add` command:

```
git add name of file-you-added
OR
git add .  //to add all files
```

Now commit those changes using the `git commit` command:

```
git commit -m "meaningful commit message indicating what you have added or updated"
```


## 5. Push changes to GitHub

Push your changes using the command `git push`:

```
git push origin -u your-branch-name
```

replacing `your-branch-name` with the name of the branch you created earlier.


## Submit your changes for review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.
![Annotation 2022-10-06 154813](https://user-images.githubusercontent.com/80174852/194636271-f2ae178e-c583-4f28-861d-22782c1e708f.png)

Now submit the pull request.

![Annotation 2022-10-06 154813](https://user-images.githubusercontent.com/80174852/194636342-7e09b569-e9af-4fd6-a762-ec8aa32af917.png)

Soon I'll be merging all your changes into the main branch of this project. You will get a notification email once the changes have been merged.

## GUIDELINES BEFORE YOU START CONTRIBUTING:
1. QUANTITY IS FUN, QUALITY IS KEY. So, focus on quality contribution
2. Don't contribute spam. I will not merge it and it will not benefit you in the long term
3. Contribute to help community

### MUST READ GUIDELINES BEFORE YOU START
https://hacktoberfest.com/participation/

*Good luck. You can do it*
