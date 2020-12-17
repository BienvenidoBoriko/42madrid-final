ifconfig -a | grep "ether " | awk '/ether/ {print $2}'
