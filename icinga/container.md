#install icinga in docker container

follow the setp at
https://www.icinga.com/docs/icingaweb2/latest/doc/02-Installation/  
to make dockerfile
remember icinga use hostname so if you create new container you need to reomve the old object in icinga object,api  
run in bash
```bash
rm /etc/icinga2/confd.api-users.conf
rm /var/lib/icinga2/certs/"hostname".* #need to check this 
icinga2 api setup
service icinga2 restart
```
setting php timezone at /etc/php/7.0/apache2/php.ini  
time.zont=Asia/Taipei

if everything is fine,then install icingaweb2 follow  
https://www.icinga.com/docs/icingaweb2/latest/doc/02-Installation/#installing-requirements  
make sure you have enable icinga command by
```bash
icinga2 feature enable command
service icinga2 restart
```
if mysql show No directory, logging in with HOME=/ try
```bash
chown -R mysql:mysql /var/lib/mysql /var/run/mysqld
```
there ars some default commadn in here
```bash
/usr/share/icinga2/include/command-plugins.conf
```
