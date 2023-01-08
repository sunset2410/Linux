sudo apt-add-repository ppa:mosquitto-dev/mosquitto-ppa
sudo apt-get update
sudo apt-get install mosquitto
sudo cd cJSON
sudo make
sudo make install
sudo ldconfig
sudo cd ../mosquitto
sudo make
sudo make install
sudo ldconfig