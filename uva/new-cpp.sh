#!/bin/bash
mkdir -p "$1"

touch "$1/main.cpp"
touch "$1/readme.md"

echo "Created $1/"
