ifconfig | grep -w ether | sed 's/ether//' | cut -d ' ' -f 2  
