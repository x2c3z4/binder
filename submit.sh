#!/bin/bash
set -o nounset          # Treat unset variables as an error
git add .
git commit -a -m "$1"
git push origin master

