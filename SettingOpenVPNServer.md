install openvpn  
```shell
apt-get update | apt-get install openvpn openssl -y
```
create CA  
```shell
#move openssl setting
cp /etc/ssl/openssl.cnf /usr/share/easy-rsa
#setting config
#backup
cp vars vars.bk
#change config
vim vars
#change something like this
#export KEY_COUNTRY="TW"
#export KEY_PROVINCE="TW"
#export KEY_CITY="Taipie"
#export KEY_ORG="Test"
#export KEY_EMAIL="test"
#export KEY_OU="test"
```
change to root
```shell
sudo su
cd /usr/share/easy-rsa
source vars
./clean-all
```
# if error edit vars
```shell
#change this
export KEY_CONFIG="$EASY_RSA/whichopensslcnf $EASY_RSA"
#to
export KEY_CONFIG="$EASY_RSA/openssl-1.0.0.cnf"
```
```shell
./build-key-server server
```
