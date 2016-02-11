#!/bin/bash

docker run -it -v /home/xaled/Downloads/torDw:/home/user/Downloads -v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=unix$DISPLAY -v /dev/snd:/dev/snd --privileged  jess/tor-browser


