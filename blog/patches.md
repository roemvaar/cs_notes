# Patches

Patch workflow:

1. Pull Linux kernel sources

2. Create a branch to work on using:

```git checkout -b <your_branch>```

3. Make corresponding change to the source files.

4. Make sure you address checkpatch errors and warnings.

5. Once checkpatch is happy, test your changes.

6. After your changes work as expected, commit your changes.

Commit files:

```git commit -a``` # if want to include all files

```git commit <file_name>``` # if only want to include file_name

Include valuable message at your commit, check [How to Write Commit Message](https://cbea.ms/git-commit/)
for more info.

Now, run the commit and add a commit message. 

7. After committing the change, generate the patch running the following command:

```git format-patch -1 <commit ID>```

8. Send patch to corresponding subsystem maintainer and email lists using
git send-email.

```get_maintainer.pl``` script tells you whom to send the patch to.

```git format-patch -1 <commit ID> --to=laurent.pinchart@ideasonboard.com --to=mchehab@kernel.org --cc=linux-media@vger.kernel.org --cc=linux-kernel@vger.kernel.org```

```git send-email <patch_file>```


![patches](../img/patches.png)

## References

* Linux Foundation - LFD103
