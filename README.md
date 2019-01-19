# bazel-cpp-boilerplate

### Requirement
Go [here](https://bazel.build/) to install Bazel which will be used to compile cpp code.

### How to use?

Write your function in your-code.cc.

Specify tests in run-test.cc by defining `test<T, T>` where T is your desired type.
For example, if `test<int, string>`, then each test would be declared as
`test(123, "your string")` inside **tests** variable.

Change `#! /bin/[your shell]` in run.sh.

Afterwards, to build and run your code, type `[your shell] run.sh run-test`.
