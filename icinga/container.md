#install icinga in docker container

flower the setp at
https://www.icinga.com/docs/icingaweb2/latest/doc/02-Installation/  
to make dockerfile
remember icinga use hostname so if you create new container you need to reomve the old object in icinga object,api  
run in bash
```bash
rm /etc/icinga2/confd.api-users.conf
icinga2 api setup
service icinga2 restart
```

