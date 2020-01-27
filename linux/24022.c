cocci_test_suite() {
	char *cocci_id/* net/ipv4/ipconfig.c 996 */;
	struct udphdr cocci_id/* net/ipv4/ipconfig.c 978 */;
	struct iphdr cocci_id/* net/ipv4/ipconfig.c 977 */;
	int cocci_id/* net/ipv4/ipconfig.c 963 */;
	struct ic_device *cocci_id/* net/ipv4/ipconfig.c 962 */;
	struct iphdr *cocci_id/* net/ipv4/ipconfig.c 961 */;
	struct bootp_pkt *cocci_id/* net/ipv4/ipconfig.c 960 */;
	struct sk_buff *cocci_id/* net/ipv4/ipconfig.c 958 */;
	struct packet_type *cocci_id/* net/ipv4/ipconfig.c 958 */;
	struct net_device *cocci_id/* net/ipv4/ipconfig.c 958 */;
	int __init cocci_id/* net/ipv4/ipconfig.c 958 */;
	__be16 cocci_id/* net/ipv4/ipconfig.c 894 */;
	unsigned char *cocci_id/* net/ipv4/ipconfig.c 823 */;
	struct bootp_pkt cocci_id/* net/ipv4/ipconfig.c 806 */;
	unsigned long cocci_id/* net/ipv4/ipconfig.c 796 */;
	void __init cocci_id/* net/ipv4/ipconfig.c 787 */;
	void cocci_id/* net/ipv4/ipconfig.c 787 */;
	u8 *cocci_id/* net/ipv4/ipconfig.c 733 */;
	const u8 cocci_id/* net/ipv4/ipconfig.c 683 */[];
	u8 cocci_id/* net/ipv4/ipconfig.c 655 */;
	void __init cocci_id/* net/ipv4/ipconfig.c 652 */;
	const u8 cocci_id/* net/ipv4/ipconfig.c 648 */[4];
	struct packet_type cocci_id/* net/ipv4/ipconfig.c 639 */;
	int cocci_id/* net/ipv4/ipconfig.c 637 */(struct sk_buff *skb,
						  struct net_device *dev,
						  struct packet_type *pt,
						  struct net_device *orig_dev);
	struct bootp_pkt {
		struct iphdr iph;
		struct udphdr udph;
		u8 op;
		u8 htype;
		u8 hlen;
		u8 hops;
		__be32 xid;
		__be16 secs;
		__be16 flags;
		__be32 client_ip;
		__be32 your_ip;
		__be32 server_ip;
		__be32 relay_ip;
		u8 hw_addr[16];
		u8 serv_name[64];
		u8 boot_file[128];
		u8 exten[312];
	} cocci_id/* net/ipv4/ipconfig.c 603 */;
	struct arphdr cocci_id/* net/ipv4/ipconfig.c 490 */;
	struct arphdr *cocci_id/* net/ipv4/ipconfig.c 477 */;
	int __init cocci_id/* net/ipv4/ipconfig.c 474 */;
	struct rtentry cocci_id/* net/ipv4/ipconfig.c 388 */;
	struct sockaddr_in *cocci_id/* net/ipv4/ipconfig.c 346 */;
	void *cocci_id/* net/ipv4/ipconfig.c 346 */;
	struct ifreq cocci_id/* net/ipv4/ipconfig.c 345 */;
	struct ic_device cocci_id/* net/ipv4/ipconfig.c 248 */;
	unsigned short cocci_id/* net/ipv4/ipconfig.c 215 */;
	bool __init cocci_id/* net/ipv4/ipconfig.c 201 */;
	struct ic_device {
		struct ic_device *next;
		struct net_device *dev;
		unsigned short flags;
		short able;
		__be32 xid;
	} cocci_id/* net/ipv4/ipconfig.c 190 */;
	ssize_t cocci_id/* net/ipv4/ipconfig.c 1797 */;
	volatile int cocci_id/* net/ipv4/ipconfig.c 179 */;
	char cocci_id/* net/ipv4/ipconfig.c 169 */[IFNAMSIZ]__initdata;
	u8 cocci_id/* net/ipv4/ipconfig.c 162 */[64];
	__be32 cocci_id/* net/ipv4/ipconfig.c 161 */[CONF_NTP_SERVERS_MAX];
	__be32 cocci_id/* net/ipv4/ipconfig.c 160 */[CONF_NAMESERVERS_MAX];
	char cocci_id/* net/ipv4/ipconfig.c 150 */[253]__initdata;
	u8 cocci_id/* net/ipv4/ipconfig.c 144 */[256];
	__be32 cocci_id/* net/ipv4/ipconfig.c 138 */;
	__be32 __init cocci_id/* net/ipv4/ipconfig.c 1376 */;
	struct seq_file *cocci_id/* net/ipv4/ipconfig.c 1358 */;
	const struct file_operations *cocci_id/* net/ipv4/ipconfig.c 1337 */;
	const char *cocci_id/* net/ipv4/ipconfig.c 1336 */;
	struct proc_dir_entry *cocci_id/* net/ipv4/ipconfig.c 1297 */;
	unsigned int cocci_id/* net/ipv4/ipconfig.c 104 */;
}