#! /bin/bash

#sudo apt-get install git-core
#sudo apt-get update
#sudo apt-get upgrade

mkdir -p ${HOME}/lib
git clone git://git.drogon.net/wiringPi ${HOME}/lib/wiringPi
cd ${HOME}/lib/wiringPi
git pull origin master
./build
