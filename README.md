# ubuntu install
## Backup MBR
- backup HDDs MBRs
`# dd if=/dev/sda of=mbr_sda.bkp bs=512 count=1`
## Software installation
1. **install script:**
	execute install script
	```shell
	sudo apt-get update;
	sudo apt-get upgrade;
	sudo apt-get install curl nmap arp-scan docker.io tor openssh-server bro python-pip tree git youtube-dl wine-stable winetricks unace unrar \
                     zip unzip p7zip-full p7zip-rar sharutils rar uudeview mpack arj cabextract file-roller \
                     gparted meld baobab regexxer freeplane  shutter  anki  sqlitebrowser remmina keepassx pyrenamer  bless ghex git-cola \
                     vlc cheese  ubuntu*wallpapers* xubuntu*wallpapers*  chromium-browser ubuntu-restricted-extras \
                     gimp gimp-data gimp-plugin-registry gimp-data-extras encfs gedit-plugins gedit-source-code-browser-plugin \
                     python3-pip quiterss lynx python3-dev nemo libreoffice-impress gnome-terminal python-requests python3-requests gnome-system-monitor parcellite

	#interactive
	sudo apt-get install ttf-mscorefonts-installer wireshark encfs 
	
	#java
	sudo add-apt-repository ppa:webupd8team/java
	sudo apt-get update
	sudo apt-get install oracle-java8-installer
	```
1. **fix wifi dongle problem:**
	 edit  /etc/NetworkManager/NetworkManager.conf
		[device]
		wifi.scan-rand-mac-address=no
1. **homestruct and links:**
	1. links:
		1. Downloads
		1. Documents
		1. Pictures
		1. SLAVE_workspace, workspace
		1. VirtualBox VMs, vms,  vmresha
		1. repos
	1. mkdir:
		1. apps
		1. iso,  pdfs, vms etc.. in Downloads
1. **kutils:**
1. **namlat or rss-stuff:**
1. **ghosty-git:**
	[install ghosty-git](https://github.com/xaled/ghosty-git/blob/master/INSTALL.md "install ghosty-git")
1. **judo:**
	[install judo](# "install judo")
1. **autossh:**
	[install autossh](# "install autossh")
1. **Other apps:**
	1. VirtualBox
			sudo dpkg -i "virtualbox-5.2_5.2.4-119785~Ubuntu~zesty_amd64.deb"
		install  extension pack and create hostonly network.
	1. PyCharm (+ change keymap to gnome default File>Settings>Keymap)
	1. Splunk
			 sudo  useradd splunk
		 copy splunk dir and splunks ( splunk_base, run_splunk.sh)
	1. Remarkable (MD editor)

## Xubuntu Settings
1. **prefered applications:**
	![prefered apps](images/Preferred%20Applications_002.png)
	`sudo apt-get remove mousepad`
1. **regional settings:**
	Language Support > Regional Formats > English (Iremand) > Applu System-Wide
1. **workspaces:**
	workspaces settings: number of workspaces 4
	workspaces switchers: number of rows 2
![workspaces_tweaks](images/Window%20Manager%20Tweaks_003.png)
![workspaces_windows_manager](images/Window%20Manager_004.png)
1. **panel and launchers:**
	[panels.md](panels.md)
1. **clock settings:**
	tooltip format: %A %d %B %Y
	panel 0 clock format:%R
	panel 1 clock format: %a %d %b %R
1. **Hotkeys:**
	1. super+D, super:
		keep Ctrl+Alt+D and Ctrl+Esc
	1. arabic layout + hotkey (Super + Space instead of Alt + Shift):
![Keyboard_005.png](images/Keyboard_005.png)
1. **wallpapers and avatar:**
	?
1. **terminal:**
	Edit > profile preferences > colors > white on black
1. **bookmarks:**
	1. SSH locations
	1. judo_downloads
	1. Storage
## Restore
1. **Firefox profiles:**
1. **Apps:**
1. **Vms, iso, dockers:**
1. **Templates, launchers:**
	- invert color launcher
	https://github.com/xaled/ubuntu-templates.git
1. **OLD, BACKUP:**
1. **judo profiles:**
1. **dockers, startup, crons:**
1. **Desktop**
1.  quiterss
1. clean backup

## Host specific
### Nexspirited
### Inspirited
### OptiplexSpirited
### Oraspirited
### mOraspirited
