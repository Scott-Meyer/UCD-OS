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
git checkout -b FEATURE_NAME

Then make any changes you want, commiting them as you go:
git add *
git commit -m "Commit message"

Once you are done with the feature, merge the branch:
git checkout master
git merge FEATURE_NAME

Finally, upload your changes to GitHub:
git push origin master
