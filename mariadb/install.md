# install

## using script to install
``` shell
curl -sS https://downloads.mariadb.com/MariaDB/mariadb_repo_setup | sudo bash
```
### set version
``` shell
curl -sS https://downloads.mariadb.com/MariaDB/mariadb_repo_setup |
    sudo bash -s -- --mariadb-server-version="mariadb-10.3"
```

## using add-apt-repository
for ubuntu or debian
``` shell
sudo apt-get install software-properties-common
sudo add-apt-repository 'deb [arch=amd64,arm64,ppc64el] http://sfo1.mirrors.digitalocean.com/mariadb/repo/10.3/ubuntu bionic main'
sudo apt-get update
```
add apt key
``` shell
sudo apt-key adv --recv-keys --keyserver hkp://keyserver.ubuntu.com:80 0xcbcb082a1bb943db
```
install mariadb
``` shell
sudo apt-get install mariadb-server mariadb-client
```
# note
need to set bind-address in /etc/mysql/my.cnf

#using docker
https://hub.docker.com/_/mariadb 

ref <https://mariadb.com/kb/en/library/installing-mariadb-deb-files/>


