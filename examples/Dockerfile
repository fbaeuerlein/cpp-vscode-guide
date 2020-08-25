FROM ubuntu:20.04

# tzdata confirmation override
ENV DEBIAN_FRONTEND=noninteractive 

RUN apt-get update && apt-get -y upgrade

# we need git to run as dev container
RUN apt-get -y install git 

# install compiler and build stuff
RUN apt-get -y install build-essential cmake clang-tidy clang 

# install documentation stuff
RUN apt-get -y install doxygen mscgen graphviz 