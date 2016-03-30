#!/usr/bin/env bash

apt-get update
apt-get upgrade -y
apt-get install -y cmake
apt-get install -y git
apt-get install -y qemu-system
apt-get install -y tree
cd /home/git-repos/UCD-OS/src/utils
make
cd /home/git-repos/UCD-OS/src/threads
make
sudo echo 'export PATH=/home/git-repos/UCD-OS/src/utils:$PATH' >> /home/vagrant/.profile
sudo echo 'cd /home/git-repos/UCD-OS/src' >> /home/vagrant/.profile
source /home/vagrant/.profile