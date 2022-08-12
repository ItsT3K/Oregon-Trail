# OT Git repo install script
# Install directory is /usr/local/bin this can be changed to /usr/bin or /opt 
# if so desired. 
echo "Compiling Source..."
g++ oregon.cpp -o oregon
read -p "Would you like to install the game? Y/n" choice
case "$choice" in
	y|Y ) echo "Installing" && sudo cp oregon /usr/local/bin/oregon && echo "Type oregon to run";;
	n|N ) echo "Ok! Type ./oregon to run";;
	* ) echo "Invalid";;
esac
