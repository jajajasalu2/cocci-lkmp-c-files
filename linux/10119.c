cocci_test_suite() {
	int cocci_id/* drivers/net/bonding/bond_alb.c 99 */;
	struct alb_walk_data cocci_id/* drivers/net/bonding/bond_alb.c 986 */;
	u8 cocci_id/* drivers/net/bonding/bond_alb.c 982 */[];
	void cocci_id/* drivers/net/bonding/bond_alb.c 98 */;
	struct bond_vlan_tag *cocci_id/* drivers/net/bonding/bond_alb.c 952 */;
	u8 *cocci_id/* drivers/net/bonding/bond_alb.c 951 */;
	struct alb_walk_data *cocci_id/* drivers/net/bonding/bond_alb.c 947 */;
	struct alb_walk_data {
		struct bonding *bond;
		struct slave *slave;
		u8 *mac_addr;
		bool strict_match;
	} cocci_id/* drivers/net/bonding/bond_alb.c 938 */;
	struct sk_buff *cocci_id/* drivers/net/bonding/bond_alb.c 909 */;
	struct learning_pkt cocci_id/* drivers/net/bonding/bond_alb.c 908 */;
	u16 cocci_id/* drivers/net/bonding/bond_alb.c 906 */;
	__be16 cocci_id/* drivers/net/bonding/bond_alb.c 906 */;
	struct rlb_client_info cocci_id/* drivers/net/bonding/bond_alb.c 748 */;
	u8 cocci_id/* drivers/net/bonding/bond_alb.c 66 */;
	const u8 *cocci_id/* drivers/net/bonding/bond_alb.c 66 */;
	void cocci_id/* drivers/net/bonding/bond_alb.c 63 */(struct bonding *bond,
							     u32 ip_src_hash,
							     u32 ip_dst_hash);
	void cocci_id/* drivers/net/bonding/bond_alb.c 62 */(struct bonding *bond,
							     u32 index);
	void cocci_id/* drivers/net/bonding/bond_alb.c 61 */(struct bonding *bond,
							     struct arp_pkt *arp);
	void cocci_id/* drivers/net/bonding/bond_alb.c 59 */(struct slave *slave,
							     u8 mac_addr[],
							     bool strict_match);
	struct rlb_client_info *cocci_id/* drivers/net/bonding/bond_alb.c 561 */;
	const struct sk_buff *cocci_id/* drivers/net/bonding/bond_alb.c 53 */;
	struct arp_pkt *cocci_id/* drivers/net/bonding/bond_alb.c 53 */;
	__be32 cocci_id/* drivers/net/bonding/bond_alb.c 523 */;
	struct arp_pkt {
		__be16 hw_addr_space;
		__be16 prot_addr_space;
		u8 hw_addr_len;
		u8 prot_addr_len;
		__be16 op_code;
		u8 mac_src[ETH_ALEN];
		__be32 ip_src;
		u8 mac_dst[ETH_ALEN];
		__be32 ip_dst;
	} cocci_id/* drivers/net/bonding/bond_alb.c 40 */;
	struct learning_pkt {
		u8 mac_dst[ETH_ALEN];
		u8 mac_src[ETH_ALEN];
		__be16 type;
		u8 padding[ETH_ZLEN - ETH_HLEN];
	} cocci_id/* drivers/net/bonding/bond_alb.c 33 */;
	bool cocci_id/* drivers/net/bonding/bond_alb.c 315 */;
	struct list_head *cocci_id/* drivers/net/bonding/bond_alb.c 314 */;
	struct alb_bond_info *cocci_id/* drivers/net/bonding/bond_alb.c 312 */;
	struct slave *cocci_id/* drivers/net/bonding/bond_alb.c 310 */;
	struct bonding *cocci_id/* drivers/net/bonding/bond_alb.c 310 */;
	const int cocci_id/* drivers/net/bonding/bond_alb.c 30 */;
	const u8 cocci_id/* drivers/net/bonding/bond_alb.c 27 */[ETH_ALEN + 2];
	struct tlb_slave_info *cocci_id/* drivers/net/bonding/bond_alb.c 208 */;
	struct tlb_client_info *cocci_id/* drivers/net/bonding/bond_alb.c 199 */;
	u32 cocci_id/* drivers/net/bonding/bond_alb.c 195 */;
	unsigned short cocci_id/* drivers/net/bonding/bond_alb.c 1786 */;
	struct sockaddr_storage *cocci_id/* drivers/net/bonding/bond_alb.c 1744 */;
	long long cocci_id/* drivers/net/bonding/bond_alb.c 165 */;
	char cocci_id/* drivers/net/bonding/bond_alb.c 1633 */;
	struct bonding cocci_id/* drivers/net/bonding/bond_alb.c 1490 */;
	struct work_struct *cocci_id/* drivers/net/bonding/bond_alb.c 1488 */;
	struct bond_up_slave *cocci_id/* drivers/net/bonding/bond_alb.c 1474 */;
	char *cocci_id/* drivers/net/bonding/bond_alb.c 1401 */;
	const struct iphdr *cocci_id/* drivers/net/bonding/bond_alb.c 1393 */;
	struct ipv6hdr *cocci_id/* drivers/net/bonding/bond_alb.c 1386 */;
	const __be32 cocci_id/* drivers/net/bonding/bond_alb.c 1381 */;
	struct ethhdr *cocci_id/* drivers/net/bonding/bond_alb.c 1378 */;
	netdev_tx_t cocci_id/* drivers/net/bonding/bond_alb.c 1375 */;
	struct tlb_client_info cocci_id/* drivers/net/bonding/bond_alb.c 132 */;
	struct sockaddr *cocci_id/* drivers/net/bonding/bond_alb.c 1260 */;
	char cocci_id/* drivers/net/bonding/bond_alb.c 1226 */[MAX_ADDR_LEN];
	struct sockaddr_storage cocci_id/* drivers/net/bonding/bond_alb.c 1225 */;
	void *cocci_id/* drivers/net/bonding/bond_alb.c 1221 */;
	u8 cocci_id/* drivers/net/bonding/bond_alb.c 1033 */[MAX_ADDR_LEN];
	struct net_device *cocci_id/* drivers/net/bonding/bond_alb.c 1007 */;
	unsigned int cocci_id/* drivers/net/bonding/bond_alb.c 1005 */;
}
