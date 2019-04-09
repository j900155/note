# galera
## setting port 
* mariadb port 3306
* galera port 4567
* IST port 4568
* SST port 4444
## setting config
/etc/mysql/my.cnf 
```
[mysqld]
binlog_format=ROW
default-storage-engine=innodb
innodb_autoinc_lock_mode=2
[galera]
wsrep_provider=/usr/lib/libgalera_smm.so
wsrep_provider_options="gcache.size=300M; gcache.page_size=300M"
wsrep_cluster_name="example_cluster"
wsrep_cluster_address="gcomm://IP.node1,IP.node2,IP.node3"
wsrep_sst_method=rsync
wsrep_on=ON #set galera work
```

## start cluster
### first node
```shell
galera_new_cluster
```
### other node
```shell
service mysql start
```

 
ref <https://mariadb.com/kb/en/library/what-is-mariadb-galera-cluster/>  
ref <https://mariadb.com/kb/en/library/getting-started-with-mariadb-galera-cluster/>  
