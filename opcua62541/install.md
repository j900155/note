# Install 
git clone from https://github.com/open62541/open62541 
  
# Build and Install 
``` bash
git submodule update --init --recursive
mkdir build && cd build
cmake -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=RelWithDebInfo -DUA_NAMESPACE_ZERO=FULL ..
make
sudo make install
```

Instal Path 
/usr/local/lib/ for share lib 
/usr/local/share/open62541 for tools 
/usr/local/includeopen62541 for include lib 

