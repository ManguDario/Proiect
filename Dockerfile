FROM gcc:latest
WORKDIR /usr/src/cod
COPY cod.c .
RUN gcc -o cod cod.c -lstdc++
CMD ["./cod"]