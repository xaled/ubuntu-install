#!/bin/bash


sudo apt-get update
sudo apt-get upgrade

#install outils
sudo apt-get install curl nmap arp-scan encfs docker.io tor openssh-server bum python-pip tree git youtube-dl wine winetricks -s
sudo apt-get install unace unrar zip unzip p7zip-full p7zip-rar sharutils rar uudeview mpack arj cabextract file-roller -s

#install outils-gui
sudo apt-get install gparted meld regexxr freemind wireshark shutter minbar anki zim sqlite3-viewer remmina keepassx pyrenamer -s

#install addons 
sudo apt-get install vlc ttf-mscorefonts-installer avidemux cheese ubuntu-wallpapers* gnome-session-flashback chromium-browser ubuntu-restricted-extras unity-tweak-tool gnome-tweak-tool -s

sudo apt-get install gimp gimp-data gimp-plugin-registry gimp-data-extras -s




#install jdk
sudo add-apt-repository ppa:webupd8team/java
sudo apt-get update
sudo apt-get install oracle-java8-installer -s





#install dev
sudo apt-get install bless atom git-cola -s
#other devs eclipse jee, eclipse c/c++, netbeans php, pycharm, android studio

#install burp

#install Virutalbox
#wget http://download.virtualbox.org/virtualbox/5.0.14/virtualbox-5.0_5.0.14-105127~Ubuntu~wily_i386.deb
#sudo dpkg -i virtualbox-5.0_5.0.14-105127~Ubuntu~wily_i386.deb

#install judo
bash oldjudo/install.sh
