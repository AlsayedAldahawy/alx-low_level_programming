#!/usr/bin/env bash
# Script: copy_files.sh
# Description: Copies specific files from a repository to a destination directory
# Author: AlsayedAldahawy

# Note: This script is not an official task of the project.
# It was created to help copy multiple files for personal use.

# Set repository path and destination path
REPO_PATH="$HOME/ALX/alx-low_level_programming/*/"
DEST_PATH="$HOME/ALX/alx-low_level_programming/0x09-static_libraries"

# Initialize counters for found and not found files
FND_FILS=0
NFD_FILS=0

# List of file names to search for
FILES_NAMES=(
    0-isupper.c
    0-memset.c
    0-strcat.c
    1-isdigit.c
    1-memcpy.c
    1-strncat.c
    100-atoi.c
    2-strchr.c
    2-strlen.c
    2-strncpy.c
    3-islower.c
    3-puts.c
    3-strcmp.c
    3-strspn.c
    4-isalpha.c
    4-strpbrk.c
    5-strstr.c
    6-abs.c
    9-strcpy.c
    _putchar.c
    notexitfile.c
)

# Iterate through subdirectories in the repository
for DIRC in $REPO_PATH; do
    # Check if all files have been found
    if [ ${#FILES_NAMES[@]} -eq 0 ]; then
        break
    fi

    # Search for matching files in the current subdirectory
    for file in "$DIRC"*.c; do
        for name in "${!FILES_NAMES[@]}"; do
            # Compare the current file name with the list of desired file names
            if [[ "${FILES_NAMES[$name]}" == "$(basename "$file")" ]]; then
                echo "$(basename "$file") file found"  # Print a message indicating the file was found
                ((FND_FILS += 1))
                cp "$file" "$DEST_PATH"  # Copy the file to the destination path
                unset "FILES_NAMES[$name]"  # Remove the file name from the list
                break
            fi
        done
    done
done

# Display files not found
for filename in "${FILES_NAMES[@]}"; do
    echo -e "\e[31m$filename file not found\e[0m"  # Print the count in Red
    ((NFD_FILS += 1))
done

# Summary
echo
echo "------------Summary------------"
echo -e "\e[36m$FND_FILS files found and successfuly copied to Destination\e[0m"  # Print the count in cyan
echo -e "\e[31m$NFD_FILS files not found\e[0m"  # Print the count in Red

exit 0
