import os

script_dir = os.getcwd()
all_items = os.listdir(script_dir)

count_del = 0

for item in all_items:
    full_path = os.path.join(script_dir, item)
    
    if os.path.isfile(full_path):
        if not item.lower().endswith(".cpp"):
            os.remove(full_path)  
            count_del += 1

print(f"Deleted {count_del} executables.")
