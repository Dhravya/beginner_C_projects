import os
import time
# This is just to make my life easier. I don't want to delete the exe files every time I run the program.

while True:
    files = os.listdir("C:/Users/dhrav/Documents/C Programs")
    for file in files:
        if file.endswith(".exe"):
            print(f"Detected exe: {file}")
            time.sleep(10)
            os.remove(f"C:/Users/dhrav/Documents/C Programs/{file}")
    time.sleep(10)