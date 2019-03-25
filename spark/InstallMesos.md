# get binary or git
```sh
#tar.gz
wget http://www.apache.org/dist/mesos/1.7.0/mesos-1.7.0.tar.gz
tar -zxf mesos-1.7.0.tar.gz
#git
git clone https://gitbox.apache.org/repos/asf/mesos.git
```
# install in ubuntu or debian
## install packages
```sh
# Update the packages.
$ sudo apt-get update

# Install a few utility tools.
$ sudo apt-get install -y tar wget git

# Install the latest OpenJDK.
$ sudo apt-get install -y openjdk-7-jdk

# Install autotools (Only necessary if building from git repository).
$ sudo apt-get install -y autoconf libtool

# Install other Mesos dependencies.
$ sudo apt-get -y install build-essential python-dev python-six python-virtualenv libcurl4-nss-dev libsasl2-dev libsasl2-modules maven libapr1-dev libsvn-dev
```
## build
```sh
cd mesos-1.7.0
mkdir build
../configure
make
#check
make check
#install
make install
```


## https://mesos.apache.org/documentation/latest/building/
