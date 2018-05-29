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
#change co
vim vars
#change something like this
#export KEY_COUNTRY="TW"
#export KEY_PROVINCE="TW"
#export KEY_CITY="Taipie"
#export KEY_ORG="Test"
#export KEY_EMAIL="test"
#export KEY_OU="test"
```
