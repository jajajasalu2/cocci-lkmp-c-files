cocci_test_suite() {
	struct arphdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 98 */;
	struct vlan_ethhdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 97 */;
	struct ethhdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 96 */;
	struct nic *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 94 */;
	struct sk_buff *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 92 */;
	struct nic cocci_id/* drivers/staging/gdm724x/gdm_lte.c 871 */;
	char cocci_id/* drivers/staging/gdm724x/gdm_lte.c 860 */[16];
	struct device *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 856 */;
	u8 *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 822 */;
	void cocci_id/* drivers/staging/gdm724x/gdm_lte.c 822 */;
	u8 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 820 */[ETH_ALEN];
	const struct net_device_ops cocci_id/* drivers/staging/gdm724x/gdm_lte.c 812 */;
	struct hci_connect_ind *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 776 */;
	struct pdn_table cocci_id/* drivers/staging/gdm724x/gdm_lte.c 726 */;
	struct hci_pdn_table_ind *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 722 */;
	struct sdu *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 677 */;
	struct multi_sdu *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 676 */;
	struct ifmap *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 62 */;
	struct dhcp_packet cocci_id/* drivers/staging/gdm724x/gdm_lte.c 616 */;
	struct udphdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 615 */;
	struct iphdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 614 */;
	struct dhcp_packet {
		u8 op;
		u8 htype;
		u8 hlen;
		u8 hops;
		u32 xid;
		u16 secs;
		u16 flags;
#define BROADCAST_FLAG 0x8000
		u32 ciaddr;
		u32 yiaddr;
		u32 siaddr_nip;
		u32 gateway_nip;
		u8 chaddr[16];
		u8 sname[64];
		u8 file[128];
		u32 cookie;
	}__packed cocci_id/* drivers/staging/gdm724x/gdm_lte.c 581 */;
	char cocci_id/* drivers/staging/gdm724x/gdm_lte.c 571 */;
	struct net_device *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 56 */;
	u8 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 552 */;
	u32 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 550 */;
	int cocci_id/* drivers/staging/gdm724x/gdm_lte.c 550 */;
	u16 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 519 */;
	struct hci_packet *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 505 */;
	struct phy_dev *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 504 */;
	char *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 502 */;
	struct net_device_stats *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 495 */;
	struct device_type cocci_id/* drivers/staging/gdm724x/gdm_lte.c 46 */;
	struct vlan_ethhdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 438 */;
	struct {
		int ref_cnt;
		struct sock *sock;
	} cocci_id/* drivers/staging/gdm724x/gdm_lte.c 41 */;
	netdev_tx_t cocci_id/* drivers/staging/gdm724x/gdm_lte.c 401 */;
	struct udphdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 372 */;
	struct iphdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 340 */;
	s32 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 335 */;
	u16 *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 303 */;
	u8 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 266 */[16];
	u8 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 264 */[sizeof(struct icmp6hdr) + sizeof(struct neighbour_advertisement)];
	struct icmp6hdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 232 */;
	struct icmp6hdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 231 */;
	struct ipv6hdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 230 */;
	struct ipv6hdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 229 */;
	struct neighbour_solicitation *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 228 */;
	struct neighbour_solicitation {
		u8 target_address[16];
	} cocci_id/* drivers/staging/gdm724x/gdm_lte.c 225 */;
	struct neighbour_advertisement cocci_id/* drivers/staging/gdm724x/gdm_lte.c 224 */;
	struct neighbour_advertisement {
		u8 target_address[16];
		u8 type;
		u8 length;
		u8 link_layer_address[6];
	} cocci_id/* drivers/staging/gdm724x/gdm_lte.c 218 */;
	union {
		struct {
			u8 ph_src[16];
			u8 ph_dst[16];
			u32 ph_len;
			u8 ph_zero[3];
			u8 ph_nxt;
		} ph __packed;
		u16 pa[20];
	} cocci_id/* drivers/staging/gdm724x/gdm_lte.c 180 */;
	__wsum cocci_id/* drivers/staging/gdm724x/gdm_lte.c 176 */;
	unsigned short *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 175 */;
	__sum16 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 173 */;
	struct arpdata cocci_id/* drivers/staging/gdm724x/gdm_lte.c 161 */;
	struct arphdr cocci_id/* drivers/staging/gdm724x/gdm_lte.c 130 */;
	struct ethhdr *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 117 */;
	void *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 109 */;
	u8 cocci_id/* drivers/staging/gdm724x/gdm_lte.c 108 */[60];
	struct arpdata *cocci_id/* drivers/staging/gdm724x/gdm_lte.c 106 */;
	struct arpdata {
		u8 ar_sha[ETH_ALEN];
		u8 ar_sip[4];
		u8 ar_tha[ETH_ALEN];
		u8 ar_tip[4];
	} cocci_id/* drivers/staging/gdm724x/gdm_lte.c 100 */;
}
