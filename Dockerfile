FROM ubuntu:22.04
RUN apt-get update \
  && apt-get install -y \
    build-essential \
    g++ \
    mingw-w64
COPY ./main.cpp /usr/src/main/
WORKDIR /usr/src/main

ENTRYPOINT [ "x86_64-w64-mingw32-g++", "-m64", "main.cpp", "-o", "../build/main.exe", "-fopenmp"]