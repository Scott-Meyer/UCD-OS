# UCD-OS

### Instructions for working on this project: 

1. Open Terminal
2. Enter these commands:  
    ```
    cd /home  
    sudo mkdir git-repos  
    sudo chown YOUR_USERNAME /home/git-repos  
    cd git-repos 
    git clone https://github.com/Scott-Meyer/UCD-OS  
    ```

3. Go to https://github.com/ivogeorg/os-playground/blob/master/pintos-with-qemu.md and follow steps 3 and 5.
    
4. You now have the repository.  To add features, use branches:   
    ```    
    git checkout -b MY_BRANCH_NAME
    ```

5. Then make any changes you want, commiting them as you go:  
    ```
    git commit -a -m "Commit message"
    ```

5. When you are ready to upload your changes to GitHub:
    ```
    git push origin MY_BRANCH_NAME  
    ```
    Tip: use git branch to see branch names

6. Finally, when you are done with the feature and want to merge the changes, go to the repo page on GitHub.
7. There should be a section called "Your recently pushed branches:", click Compare & pull request next to the branch.
8. Write any kind of title and description you want, and then click Create pull request.
9. If there are no errors and you're confident in the pull request, click Merge to master.

To test your pintos builds, follow instruction #8 or the "Run the tests" section outlined here: https://github.com/ivogeorg/os-playground/blob/master/pintos-with-qemu.md
