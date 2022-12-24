ifconfig | grep ether -w | sed 's/	ether//g' | sed 's/ //g'
