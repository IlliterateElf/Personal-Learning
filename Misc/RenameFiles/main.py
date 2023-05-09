from os import walk
import os

# base path
mypath = r"C:\Users\cmillen1\RenameFiles\Source"

# get list of all files in all directories from base path
for (dirpath, dirnames, filenames) in walk(mypath):
    for filename in filenames:
        try:
            filename.index('UTC).') >= 0
            old_name = filename
            cut_start = old_name.index(' (')
            cut_end = old_name.index(').') + 1
            new_name =  old_name[0:cut_start] + old_name[cut_end:]
            try:
                os.rename(dirpath + chr(92) + old_name, dirpath + chr(92) + new_name)
            except FileExistsError as e:
                os.remove(e.filename2)
                os.rename(dirpath + chr(92) + old_name, dirpath + chr(92) + new_name)
        except ValueError:
            continue
exit()

# # Section 1
# # This section doesn't seem to work. The file directories especially it has trouble with.
# # It seems to be a better option, for now, to use the latter section for getting the
# # files and this section to rename those files.
# import glob
# import os

# path = r"C:\Users\cmillen1\RenameFiles\Source" + chr(92)
# # search text files starting with the word "sales"
# pattern = path + "*(*UTC).*"

# # List of the files that match the pattern
# result = glob.glob(pattern)

# # Iterating the list with the count
# for file_name in result:
#     old_name = file_name
#     start_cut = old_name.index(' (')
#     end_cut = old_name.index(').') + 1
#     new_name = path + old_name[0:start_cut] + old_name[end_cut:]
#     os.rename(old_name, new_name)

# -----------------------------------
# Section 2
# This section does great work at getting me a list of files in an OS friendly format.
# It's probably best to use the code above for renaming, combined with the code here
# for getting the names of files, in order to rename the files to a format I want.
#
# However, this means that I need a new method to parse through each of the file names.
# Perhaps, checking if each file name matches the criteria, and if it does, renaming
# the file, then moving on to the next file.

# from os import walk

# # base path
# mypath = r"D:\FileHistory\clara\DESKTOP-JAEHHPT\Data\C\Users\clara\Pictures\z_Test"
# f = [] # list of files

# # get list of all files in all directories from base path
# for (dirpath, dirnames, filenames) in walk(mypath):
#     f.extend(filenames)

# # for item in f:
# #     print(item)
