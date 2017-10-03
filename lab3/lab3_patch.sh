echo "checking we are in the right directory..."
if [ -d "zedboard" -a -d "ecelinux" ] 
then
	echo "making backup for zedboard..."
	cp -r zedboard zedboard.bk
	echo "removing old files..."
	rm -f zedboard/digitrec.cpp
	rm -f zedboard/digitrec.h
	rm -f zedboard/digitrec_test.cpp
	echo "creating symbolic links..."
	ln -s ../ecelinux/digitrec.cpp zedboard/digitrec.cpp
	ln -s ../ecelinux/digitrec.h zedboard/digitrec.h
	ln -s ../ecelinux/digitrec_test.cpp zedboard/digitrec_test.cpp
else
	echo "wrong directory!"
fi

