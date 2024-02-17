# Docker

In this project we will use docker to compile, test and run our game. It would be quite helpful to quickly check a [guide like on Docker](https://phoenixnap.com/kb/docker-image-vs-container). In this `Readme`, we explain the different steps we take to run our code inside a Docker container.

### Quick overview
1. Building Docker image with the project dependencies
2. Development mode: Opening a shell inside the container.
3. Test mode

### Details

1. We build an image that contains all the necessary dependencies to compile the application. This image only needs to be created once as long as the dependencies do not change (very rarely). **This step does not compile the game**.
    - Linux and MacOS:
    
    ```$ bash ./Docker/unix/build_docker_image.sh```

    - Windows:
    
    ```$ .\Docker\windows\build_docker_image.bat```
   
    At this point we have created an Docker image based on `Ubuntu-latest`. You can double check by executing `$ docker images` and hopefully find that a container called `pokemon-image`.

2. From the root directory of our project run `$ docker run -it -v .:/pokemon_game "pokemon-image"`. This will run the docker image `"pokemon-image"` with the source code included as a [mounted volume](https://docs.docker.com/storage/volumes/). Inside this docker image you can manually compile the project as usual with: `mkdir build; cd build; cmake ..; make;`. Note: While you are developing, you can keep this shell open. Since your local machine files are synched with the docker's image thanks to `-v .:/pokemon_game`. The most comfortable workflow should be: `Write changes locally, Run make in the docker image, run the program, repeat`

3. Test mode: TBD
