## Collaborating
Collaborating on an open source project using the "fork and branch" workflow involves the following steps:

1. **Fork the Repository:** Start by navigating to the repository on the platform where it is hosted (e.g., GitHub) and click on the "Fork" button. This creates a copy of the repository under your GitHub account. Use this link below:

      - Fork this repo: <a href="https://github.com/ALX-SE-Algorithmia/Demo-Project/fork">Fork this repository</a>

2. **Clone the Forked Repository:** Once you have forked the repository, clone it to your local machine using the `git clone` command. This creates a local copy of the repository that you can work with.
   ```
   git clone <your-forked-repo-url>
   ```

3. **Add the Original Repository as a Remote:** To keep your forked repository in sync with the original repository, you need to add the original repository as a remote. Navigate to the cloned repository on your local machine using the `cd` command, and then add the remote using the `git remote` command:
   ```
   cd <cloned-repo-folder>
   git remote add upstream <original-repo-url>
   ```

4. **Create a New Branch:** Before making any changes, create a new branch in your local repository. This helps keep your changes isolated and organized. Use the `git branch` command followed by the branch name to create a new branch:
   ```
   git branch <branch-name>
   ```

5. **Switch to the New Branch:** Switch to the newly created branch using the `git checkout` command:
   ```
   git checkout <branch-name>
   ```

6. **Make Changes and Commit:** Make the necessary changes to the codebase in your local repository. Once you have made the desired changes, stage the changes using `git add` and commit them using `git commit`:
   ```
   git add .
   git commit -m "Descriptive commit message"
   ```

7. **Push Changes to Your Fork:** Push the changes from your local branch to your forked repository on the remote server:
   ```
   git push origin <branch-name>
   ```

8. **Create a Pull Request:** Go to your forked repository on the hosting platform (e.g., GitHub), switch to the branch you just pushed, and click on the "New Pull Request" button. This will allow you to submit your changes to the original repository for review.

9. **Syncing with the Original Repository:** Periodically, you may want to sync your forked repository with the changes made in the original repository. To do this, fetch the changes from the original repository using the remote you added earlier and then merge those changes into your local branch:
   ```
   git fetch upstream
   git merge upstream/main  # or upstream/master for older conventions
   ```

   This will update your local branch with the latest changes from the original repository.

By following these steps, you can effectively collaborate on an open source project by forking the repository, creating a new branch, making changes, and submitting pull requests. It allows you to work on the project independently while keeping your changes separate from the original repository until they are reviewed and merged.


<!-- Dohou Daniel: Added this -->
Check these out for more clarification:
a. <a href="https://github.com/dohoudaniel/Dohou-Daniel-Demo-Project.git">A Forked Repo</a>
b. <a href="https://github.com/dohoudaniel/Dohou-Daniel-Demo-Project/blob/dohoudaniel/Steps-Used.md">Steps Used In Creating That Forked Repo</a>
