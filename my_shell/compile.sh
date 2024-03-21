#/bin/bash
#!/bin/bash

# Check if no arguments are provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <source_file.c> [<source_file2.c> ...]"
    exit 1
fi

# Compile each provided C file
for file in "$@"; do
    # Check if the file exists
    if [ ! -f "$file" ]; then
        echo "Error: File '$file' not found."
        continue
    fi

    # Extract file name without extension
    filename=$(basename "$file" .c)

    # Compile the file
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 "$file" -o "$filename"

    # Check if compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compilation successful: $filename"
    else
        echo "Compilation failed: $filename"
    fi
done
