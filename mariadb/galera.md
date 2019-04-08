# galera
## setting port 
* mariadb port 3306
* galera port 4567
* IST port 4568
* SST port 4444
## setting config
```
[mysqld]
binlog_format=ROW
default-storage-engine=innodb
innodb_autoinc_lock_mode=2

wsrep_provider=/usr/lib/libgalera_smm.so
wsrep_provider_options="gcache.size=300M; gcache.page_size=300M"
wsrep_cluster_name="example_cluster"
wsrep_cluster_address="gcomm://IP.node1,IP.node2,IP.node3"
wsrep_sst_method=rsync
```

## start cluster
### first node
```ssh
galera_new_cluster
```
### other node
#TODO
galera setting in /etc/mysql/conf.d/galera.cnf ?

 
ref <https://mariadb.com/kb/en/library/what-is-mariadb-galera-cluster/>  
ref <https://mariadb.com/kb/en/library/getting-started-with-mariadb-galera-cluster/>  
