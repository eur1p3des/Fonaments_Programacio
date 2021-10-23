#!/bin/bash

# Choose the file
echo "Choose a file you want to compile"

# Select the file to complie
read file_to_compile

# Choose the name for the compiled file
echo "Choose a name for your new compiled file"

# Select the new name
read new_file

# Compile the chosen file
g++ -Wall $file_to_compile -o $new_file
