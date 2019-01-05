# interfaces(5) file used by ifup(8) and ifdown(8)

# Please note that this file is written to be used with dhcpcd
# For static IP, consult /etc/dhcpcd.conf and 'man dhcpcd.conf'

# Include files from /etc/network/interfaces.d:
source-directory /etc/network/interfaces.d

auto br0

iface br0 inet manual
	bridge_ports eth0
	bridge_stp off
	bridge_waitport 0
	bridge_fd 0
	post-up /sbin/copyMAC eth0 br0
