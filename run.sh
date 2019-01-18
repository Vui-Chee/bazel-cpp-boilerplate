#! /bin/zsh

echo "Build & Run ["$0"]"

(bazel build :$1 > /dev/null <&1) && bazel-bin/$1
