# Docker

Our development philosophy with Docker is the following.

1. We build an image that contains all the necessary dependencies to compile the application. This image only needs to be created once as long as the dependencies do not change (very rarely). **This step does not compile the game**.
    - Linux and MacOS:
    
    ```$ bash ./Docker/unix/build_docker_image.sh```

    - Windows:
    
    ```$ .\Docker\windows\build_docker_image.bat```
   
    The image that contains the `Ubuntu-latest` environment for our application is created at this point. You can double check by running the command `$ docker images`. 

2. ```docker run -it "pokemon-image"```

3. Next question you should be asking yourself is: What about the source code and the compilation? The folder `Re-Pokemon-Red/Testing` will contain a script for each test that will do `docker run ...`

    Step two will be much more frequent during the development process since it will be called each time we want to test our new code.
4. 
