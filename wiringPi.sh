sudo apt-get install git-core
sudo apt-get update
sudo apt-get upgrade
mkdir -p ~/lib
git clone git://git.drogon.net/wiringPi ~/lib/wiringPi
cd wiringPi
git pull origin
cd wiringPi
./build
