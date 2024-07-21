load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "bazel_skylib",
    sha256 = "9f38886a40548c6e96c106b752f242130ee11aaa068a56ba7e56f4511f33e4f2",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.6.1/bazel-skylib-1.6.1.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.6.1/bazel-skylib-1.6.1.tar.gz",
    ],
)
load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")
bazel_skylib_workspace()

## Update the SHA and VERSION to the lastest version available here:
## https://github.com/bazelbuild/rules_python/releases.
#SHA="84aec9e21cc56fbc7f1335035a71c850d1b9b5cc6ff497306f84cced9a769841"
#VERSION="0.23.1"
#http_archive(
#    name = "rules_python",
#    sha256 = SHA,
#    strip_prefix = "rules_python-{}".format(VERSION),
#    url = "https://github.com/bazelbuild/rules_python/releases/download/{}/rules_python-{}.tar.gz".format(VERSION,VERSION),
#)
#load("@rules_python//python:repositories.bzl", "py_repositories")
#py_repositories()
http_archive(
    name = "rules_python",
    sha256 = "15f84594af9da06750ceb878abbf129241421e3abbd6e36893041188db67f2fb",
    strip_prefix = "rules_python-0.7.0",
    url = "https://github.com/bazelbuild/rules_python/archive/refs/tags/0.7.0.tar.gz",
)
#load("@rules_python//python:pip.bzl", "pip_install")

#http_archive(
#  name = "pybind11",
#  urls = [
#    "https://github.com/pybind/pybind11/archive/v2.6.0.tar.gz"
#  ],
#  sha256 = "90b705137b69ee3b5fc655eaca66d0dc9862ea1759226f7ccd3098425ae69571",
#  strip_prefix = "pybind11-2.6.0",
#  build_file = "//:pybind11.BUILD"
#)

## https://github.com/pybind/pybind11_bazel
#http_archive(
#  name = "pybind11_bazel",
#  strip_prefix = "pybind11_bazel-2.12.0",
#  urls = ["https://github.com/pybind/pybind11_bazel/archive/v2.12.0.zip"],
#)
## We still require the pybind library.
#http_archive(
#  name = "pybind11",
#  build_file = "@pybind11_bazel//:pybind11-BUILD.bazel",
#  strip_prefix = "pybind11-2.12.0",
#  urls = ["https://github.com/pybind/pybind11/archive/v2.12.0.zip"],
#)

# Python pybind11 dependencies.
http_archive(
  name = "pybind11_bazel",
  strip_prefix = "pybind11_bazel-34206c29f891dbd5f6f5face7b91664c2ff7185c",
  urls = ["https://github.com/pybind/pybind11_bazel/archive/34206c29f891dbd5f6f5face7b91664c2ff7185c.zip"],
  sha256 = "8d0b776ea5b67891f8585989d54aa34869fc12f14bf33f1dc7459458dd222e95",
)

http_archive(
  name = "pybind11",
  build_file = "@pybind11_bazel//:pybind11.BUILD",
  strip_prefix = "pybind11-a54eab92d265337996b8e4b4149d9176c2d428a6",
  urls = ["https://github.com/pybind/pybind11/archive/a54eab92d265337996b8e4b4149d9176c2d428a6.tar.gz"],
  sha256 = "c9375b7453bef1ba0106849c83881e6b6882d892c9fae5b2572a2192100ffb8a",
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")
python_configure(name = "local_config_python")
