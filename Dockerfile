FROM gcc:latest
WORKDIR /usr/src/myapp
COPY myapp.cpp .
RUN gcc -o myapp myapp.cpp -lstdc++
CMD ["./myapp"]