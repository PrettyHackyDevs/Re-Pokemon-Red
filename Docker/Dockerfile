FROM ubuntu:22.04

RUN apt-get update
RUN apt-get install liballegro5-dev -y
RUN apt-get install libjsoncpp-dev -y

COPY ../. /Re-Pokemon-Red
WORKDIR /Re-Pokemon-Red

RUN mkdir -p build
WORKDIR /Re-Pokemon-Red/build
RUN cmake ..
RUN make