ifconfig -a | grep 'ether ' | awk 'NR {print $2}'
