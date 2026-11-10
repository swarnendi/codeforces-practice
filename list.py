import os
import pyperclip

dir_contents = os.listdir()

new_list = ""

for files in dir_contents:
    if '.git' not in files:
        new_list += files + "\n"

pyperclip.copy(new_list)
