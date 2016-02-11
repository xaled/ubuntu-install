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


#install judo
bash oldjudo/install.sh

#home sturcture
bash homestruct.sh




#other devs eclipse jee, eclipse c/c++, netbeans php, pycharm, android studio
echo "install eclipse, pycharm & android studio..."
cp -R dw/eclipse-jee ~/apps/
cp -R dw/eclipse-cpp ~/apps/
cp -R dw/pycharm ~/apps/
cp -R dw/android-studio ~/apps/
echo "installing netbeans php..."
./dw/netbeans-php.sh
#TODO: create launchers

#install burp & sqlmap
echo "install burp & sqlmap & other security related..."
cp dw/burp.jar apps/
git clone "https://github.com/sqlmapproject/sqlmap.git" ~/apps/sqlmap
git clone "https://github.com/fuzzdb-project/fuzzdb" ~/apps/fuzzdb
#TODO: create launchers



#install Virutalbox
echo "installing virtualbox..."
sudo dbkg -i dw/virtualbox.deb
VBoxManage extpack dw/virtualbox.vbox-extpack



#docker script
bash docker.sh
