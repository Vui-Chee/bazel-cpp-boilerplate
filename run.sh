#! /bin/zsh

echo "Build & Run ["$0"]"

(bazel build :$1 2> log.txt) && bazel-bin/$1
