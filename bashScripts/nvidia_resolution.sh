#!/bin/bash/

###################################################################
#nvidia video card stuck at 640x480 Screen Resolution Ubuntu 20.04#
###################################################################

sudo apt-add-repository ppa:graphics-drivers/ppa

sudo update-grub

sudo apt update && sudo apt dist-upgrade
