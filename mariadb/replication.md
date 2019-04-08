# setting
## configuring the master
### add config to setting file
default setting file path /etc/mysql/my.cnf
```
[mariadb]
log-bin
serber_id=1
log-basename=master1
```
### add replication account in master
``` sql
CREATE USER 'replication_user'@'%' IDENTIFIED BY 'bigs3cret';
GRANT REPLICATION SLAVE ON *.* TO 'replication_user'@'%';
```
### show master status
check File, Postion value
```sql
SHOW MASTER STATUS;
```

## configuring the slave
### add config to setting file
default setting file path /etc/mysql/my.cnf
```
[mariadb]
log-bin
serber_id=2 #need bigger then 1
log-basename=master1
```
setting in slave mysql
```
CHANGE MASTER "connectionNmae" TO
  MASTER_HOST='master.domain.com',
  MASTER_USER='replication_user',
  MASTER_PASSWORD='bigs3cret',
  MASTER_PORT=3306,
  MASTER_LOG_FILE='mariadb-bin.000096',
  MASTER_LOG_POS=568,
  MASTER_CONNECT_RETRY=10,
  MASTER_USE_GTID = slave_pos;
```

# TODO
need to test for multi master replication  
	replicate_do_db #select db  
	replicate-rewrite-db # change db name  setting in my.cnf?  
ref <https://mariadb.com/kb/en/library/setting-up-replication/>
