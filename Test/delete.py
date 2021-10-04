import os

directory='D:\CompetitiveProgramming\Kickstart'

files_in_directory = os.listdir(directory)
filtered_files = [file for file in files_in_directory if file.endswith(".exe")]


for file in filtered_files:
    print(file)
    path_to_file=os.path.join(directory,file)    
    os.remove(path_to_file)