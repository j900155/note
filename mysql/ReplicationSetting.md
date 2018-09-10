#Master
setting /etc/my.cnf add
```shell
server-id=1
binlog_format=ROW
log-bin=mysql-bin
```
In master mysql use
```shell
show master status \G;
```
get File Postion

#Slave
setting /etc/my.cnf add
```shell
server-id=3
binlog_format=ROW
log-bin=mysql-bin
```
In slave mysql use
```shell
CHANGE MASTER TO MASTER_HOST="host ip" ,MASTER_USER="user" ,MASTER_PASSWORD=”password", MASTER_LOG_FILE="mysql-bin.xxx",MASTER_LOG_POS=Postion;
show slave status \G;
```

#clean bin log
```shell
reset master;
```


