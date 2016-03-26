# UCD-OS
My Intro to OS project

Instructions for working on this project:
Open Terminal

Enter these commands:
cd /home
sudo mkdir git-repos
sudo chown YOUR_USERNAME /home/git-repos
cd git-repos
git clone https://github.com/Scott-Meyer/UCD-OS

You now have the repository. To add features, use branches:
git checkout -b MY_BRANCH_NAME

Then make any changes you want, commiting them as you go:
git add *
git commit -m "Commit message"

When you are ready to upload your changes to GitHub:
git push origin MY_BRANCH_NAME       (use git branch to see branch names)

Finally, when you are done with the feature and want to merge the changes, go to the repo page on GitHub. There should be a section called "Your recently pushed branches:", click Compare & pull request next to the branch. Write any kind of title and description you want, and then click Create pull request. Scott will double check there are no issues and accept the pull request.

