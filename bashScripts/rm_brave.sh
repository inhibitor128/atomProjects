#!/bin/bash
echo "remove brave browser"
read -p "Press enter to continue"
sudo apt remove brave-browser

echo "purge brave browser"
read -p "Press enter to continue"
sudo apt purge brave-browser

echo "remove brave repository"
read -p "Press enter to continue"
sudo rm /etc/apt/sources.list.d/brave-browser-release.list

echo "remove brave .config dir"
read -p "Press enter to continue"
rm -rf ~/.config/BraveSoftware/Brave-Browser/

echo "brave removed"
