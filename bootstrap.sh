#!/usr/bin/env bash

apt-get update
apt-get upgrade -y
apt-get install -y cmake
apt-get install -y git
apt-get install -y qemu-system
sudo echo 'export PATH=/home/git-repos/UCD-OS/src/utils:$PATH' >> /home/vagrant/.profile
source /home/vagrant/.profile