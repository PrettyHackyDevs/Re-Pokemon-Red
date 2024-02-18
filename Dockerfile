FROM ubuntu:latest

RUN apt-get upgrade && apt-get update

# Fetch latest version of CMake
RUN apt-get install software-properties-common -y
RUN apt-get install lsb-release -y
RUN apt-get install ca-certificates -y
RUN apt clean all
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tee /etc/apt/trusted.gpg.d/kitware.gpg >/dev/null
RUN apt-add-repository "deb https://apt.kitware.com/ubuntu/ $(lsb_release -cs) main"
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 1A127079A92F09ED
RUN apt-get update
RUN apt install kitware-archive-keyring
RUN rm /etc/apt/trusted.gpg.d/kitware.gpg
RUN apt-get install cmake -y

# Install project dependencies
RUN apt-get install libboost-all-dev -y
RUN apt-get install liballegro5-dev -y
RUN apt-get install libjsoncpp-dev -y
RUN apt-get install g++ -y
RUN apt-get install pkgconf -y
RUN apt-get install libgtest-dev -y
RUN apt-get install libspdlog-dev -y

WORKDIR /pokemon_game