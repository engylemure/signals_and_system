wget "ftp://ftp.alsa-project.org/pub/lib/alsa-lib-1.1.6.tar.bz2"
tar xvjf alsa-lib-1.1.6.tar.bz2
rm -rf alsa-lib-1.1.6.tar.bz2
mv alsa-lib-1.1.6 ./alsa
cd alsa/
./configure && make
make install
./gitcompile