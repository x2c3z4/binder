#!/bin/bash
set -o nounset          # Treat unset variables as an error
make clean
git add .
git commit -a -m "$1"
git push origin master

