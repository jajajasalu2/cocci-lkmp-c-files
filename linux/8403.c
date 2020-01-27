cocci_test_suite() {
	struct ksz_desc_info {
		struct ksz_desc *ring;
		struct ksz_desc *cur;
		struct ksz_hw_desc *ring_virt;
		u32 ring_phys;
		int size;
		int alloc;
		int avail;
		int last;
		int next;
		int mask;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 999 */;
	struct ksz_desc {
		struct ksz_hw_desc *phw;
		struct ksz_sw_desc sw;
		struct ksz_dma_buf dma_buf;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 978 */;
	struct ksz_dma_buf {
		struct sk_buff *skb;
		dma_addr_t dma;
		int len;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 964 */;
	struct ksz_sw_desc {
		union desc_stat ctrl;
		union desc_buf buf;
		u32 buf_size;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 952 */;
	struct ksz_hw_desc {
		union desc_stat ctrl;
		union desc_buf buf;
		u32 addr;
		u32 next;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 939 */;
	union desc_buf {
		struct ksz_desc_rx_buf rx;
		struct ksz_desc_tx_buf tx;
		u32 data;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 926 */;
	union desc_stat {
		struct ksz_desc_rx_stat rx;
		struct ksz_desc_tx_stat tx;
		u32 data;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 920 */;
	struct ksz_desc_tx_buf {
#ifdef __BIG_ENDIAN_BITFIELD
		u32 intr:1;
		u32 first_seg:1;
		u32 last_seg:1;
		u32 csum_gen_ip:1;
		u32 csum_gen_tcp:1;
		u32 csum_gen_udp:1;
		u32 end_of_ring:1;
		u32 reserved4:1;
		u32 dest_port:4;
		u32 reserved3:9;
		u32 buf_size:11;
#else
		u32 buf_size:11;
		u32 reserved3:9;
		u32 dest_port:4;
		u32 reserved4:1;
		u32 end_of_ring:1;
		u32 csum_gen_udp:1;
		u32 csum_gen_tcp:1;
		u32 csum_gen_ip:1;
		u32 last_seg:1;
		u32 first_seg:1;
		u32 intr:1;
#endif
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 892 */;
	struct ksz_desc_rx_buf {
#ifdef __BIG_ENDIAN_BITFIELD
		u32 reserved4:6;
		u32 end_of_ring:1;
		u32 reserved3:14;
		u32 buf_size:11;
#else
		u32 buf_size:11;
		u32 reserved3:14;
		u32 end_of_ring:1;
		u32 reserved4:6;
#endif
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 878 */;
	struct ksz_desc_tx_stat {
#ifdef __BIG_ENDIAN_BITFIELD
		u32 hw_owned:1;
		u32 reserved1:31;
#else
		u32 reserved1:31;
		u32 hw_owned:1;
#endif
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 868 */;
	struct ksz_desc_rx_stat {
#ifdef __BIG_ENDIAN_BITFIELD
		u32 hw_owned:1;
		u32 first_desc:1;
		u32 last_desc:1;
		u32 csum_err_ip:1;
		u32 csum_err_tcp:1;
		u32 csum_err_udp:1;
		u32 error:1;
		u32 multicast:1;
		u32 src_port:4;
		u32 err_phy:1;
		u32 err_too_long:1;
		u32 err_runt:1;
		u32 err_crc:1;
		u32 frame_type:1;
		u32 reserved1:4;
		u32 frame_len:11;
#else
		u32 frame_len:11;
		u32 reserved1:4;
		u32 frame_type:1;
		u32 err_crc:1;
		u32 err_runt:1;
		u32 err_too_long:1;
		u32 err_phy:1;
		u32 src_port:4;
		u32 multicast:1;
		u32 error:1;
		u32 csum_err_udp:1;
		u32 csum_err_tcp:1;
		u32 csum_err_ip:1;
		u32 last_desc:1;
		u32 first_desc:1;
		u32 hw_owned:1;
#endif
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 830 */;
	enum{OID_COUNTER_UNKOWN, OID_COUNTER_FIRST, OID_COUNTER_XMIT_ERROR, OID_COUNTER_RCV_ERROR, OID_COUNTER_LAST,} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 761 */;
	enum{media_connected, media_disconnected,} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 756 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7229 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7219 */[];
	char cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7217 */[];
	pm_message_t cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7185 */;
	struct platform_info *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7141 */;
	struct dev_priv cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7060 */;
	struct ksz_switch cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 7006 */;
	struct platform_info cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6953 */;
	char cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6929 */[sizeof(version)];
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6913 */;
	u16 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6894 */[3];
	struct platform_info {
		struct dev_info dev_info;
		struct net_device *netdev[SWITCH_PORT_NUM];
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6837 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6811 */;
	int __init cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6775 */;
	char *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6732 */;
	struct dev_info *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6712 */;
	struct net_device *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6711 */;
	struct dev_priv *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6710 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6708 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6638 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6601 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6579 */;
	u64 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6521 */[TOTAL_PORT_COUNTER_NUM];
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6510 */;
	struct {
		char string[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6418 */[STATS_LEN];
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6404 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6326 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6264 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6169 */;
	struct hw_regs *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6137 */;
	int *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6136 */;
	void *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6131 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6130 */;
	struct hw_regs {
		int start;
		int end;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6097 */[];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 6078 */;
	struct ethtool_link_ksettings cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5976 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5971 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5944 */;
	u16 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5924 */[EEPROM_SIZE];
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5831 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5824 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5741 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5653 */;
	unsigned long cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5615 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5592 */;
	struct net_device_stats cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5501 */;
	u32 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5414 */;
	struct ksz_switch *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5322 */;
	u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5321 */;
	int cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5320 */;
	struct ksz_hw *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5318 */;
	void cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5318 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5233 */;
	struct ksz_desc *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5038 */;
	struct ksz_desc_info *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5036 */;
	union desc_stat cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 5033 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4964 */;
	unsigned short cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4963 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4827 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4807 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4656 */;
	u64 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4612 */;
	struct ksz_port_mib *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4610 */;
	u64 *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4605 */;
	struct ksz_hw_desc cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4510 */;
	struct ksz_dma_buf *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4431 */;
	ulong cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4402 */;
	struct ksz_desc cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4364 */;
	void (*cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4330 */)(struct timer_list *);
	struct ksz_timer_info *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4329 */;
	u16 *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4024 */;
	u32 *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4023 */;
	u8 *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 4021 */;
	struct ksz_hw_desc *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3830 */;
	const u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3636 */[];
	u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3614 */[42];
	const u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3613 */[6];
	const u8 *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3611 */;
	u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3562 */[64];
	struct pci_dev *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3509 */;
	struct dev_info cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3508 */;
	struct ksz_port_info *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3256 */;
	u16 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3188 */;
	struct ksz_port *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 3188 */;
	struct ksz_mac_table *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 2874 */;
	enum{STP_STATE_DISABLED=0, STP_STATE_LISTENING, STP_STATE_LEARNING, STP_STATE_FORWARDING, STP_STATE_BLOCKED, STP_STATE_SIMPLE,} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 2753 */;
	struct ksz_desc **cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1606 */;
	uint *cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1555 */;
	uint cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1491 */;
	u8 cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1485 */[];
	struct dev_priv {
		struct dev_info *adapter;
		struct ksz_port port;
		struct ksz_timer_info monitor_timer_info;
		struct semaphore proc_sem;
		int id;
		struct mii_if_info mii_if;
		u32 advertising;
		u32 msg_enable;
		int media_state;
		int multicast;
		int promiscuous;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1460 */;
	struct dev_info {
		struct net_device *dev;
		struct pci_dev *pdev;
		struct ksz_hw hw;
		struct ksz_shared_mem desc_pool;
		spinlock_t hwlock;
		struct mutex lock;
		int (*dev_rcv)(struct dev_info *);
		struct sk_buff *last_skb;
		int skb_index;
		int skb_len;
		struct work_struct mib_read;
		struct ksz_timer_info mib_timer_info;
		struct ksz_counter_info counter[TOTAL_PORT_NUM];
		int mtu;
		int opened;
		struct tasklet_struct rx_tasklet;
		struct tasklet_struct tx_tasklet;
		int wol_enable;
		int wol_support;
		unsigned long pme_wait;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1415 */;
	struct ksz_counter_info {
		wait_queue_head_t counter;
		unsigned long time;
		int read;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1385 */;
	struct ksz_shared_mem {
		dma_addr_t dma_addr;
		uint alloc_size;
		uint phys;
		u8 *alloc_virt;
		u8 *virt;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1371 */;
	struct ksz_timer_info {
		struct timer_list timer;
		int cnt;
		int max;
		int period;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1356 */;
	struct ksz_port {
		u8 duplex;
		u8 speed;
		u8 force_link;
		u8 flow_ctrl;
		int first_port;
		int mib_port_cnt;
		int port_cnt;
		u64 counter[OID_COUNTER_LAST];
		struct ksz_hw *hw;
		struct ksz_port_info *linked;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1334 */;
	enum{PHY_NO_FLOW_CTRL, PHY_FLOW_CTRL, PHY_TX_ONLY, PHY_RX_ONLY,} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1307 */;
	struct ksz_hw {
		void __iomem *io;
		struct ksz_switch *ksz_switch;
		struct ksz_port_info port_info[SWITCH_PORT_NUM];
		struct ksz_port_mib port_mib[TOTAL_PORT_NUM];
		int dev_count;
		int dst_ports;
		int id;
		int mib_cnt;
		int mib_port_cnt;
		u32 tx_cfg;
		u32 rx_cfg;
		u32 intr_mask;
		u32 intr_set;
		uint intr_blocked;
		struct ksz_desc_info rx_desc_info;
		struct ksz_desc_info tx_desc_info;
		int tx_int_cnt;
		int tx_int_mask;
		int tx_size;
		u8 perm_addr[ETH_ALEN];
		u8 override_addr[ETH_ALEN];
		u8 address[ADDITIONAL_ENTRIES][ETH_ALEN];
		u8 addr_list_size;
		u8 mac_override;
		u8 promiscuous;
		u8 all_multi;
		u8 multi_list[MAX_MULTICAST_LIST][ETH_ALEN];
		u8 multi_bits[HW_MULTICAST_SIZE];
		u8 multi_list_size;
		u8 enabled;
		u8 rx_stop;
		u8 reserved2[1];
		uint features;
		uint overrides;
		void *parent;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1261 */;
	struct ksz_port_info {
		uint state;
		uint tx_rate;
		u8 duplex;
		u8 advertised;
		u8 partner;
		u8 port_id;
		void *pdev;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1200 */;
	struct ksz_switch {
		struct ksz_mac_table mac_table[STATIC_MAC_TABLE_ENTRIES];
		struct ksz_vlan_table vlan_table[VLAN_TABLE_ENTRIES];
		struct ksz_port_cfg port_cfg[TOTAL_PORT_NUM];
		u8 diffserv[DIFFSERV_ENTRIES];
		u8 p_802_1p[PRIO_802_1P_ENTRIES];
		u8 br_addr[ETH_ALEN];
		u8 other_addr[ETH_ALEN];
		u8 broad_per;
		u8 member;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1173 */;
	struct ksz_port_cfg {
		u16 vid;
		u8 member;
		u8 port_prio;
		u32 rx_rate[PRIO_QUEUES];
		u32 tx_rate[PRIO_QUEUES];
		int stp_state;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1150 */;
	struct ksz_port_mib {
		u8 cnt_ptr;
		u8 link_down;
		u8 state;
		u8 mib_start;
		u64 counter[TOTAL_PORT_COUNTER_NUM];
		u32 dropped[2];
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1131 */;
	struct ksz_vlan_table {
		u16 vid;
		u8 fid;
		u8 member;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1054 */;
	struct ksz_mac_table {
		u8 mac_addr[ETH_ALEN];
		u16 vid;
		u8 fid;
		u8 ports;
		u8 override:1;
		u8 use_fid:1;
		u8 valid:1;
	} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1036 */;
	enum{TABLE_STATIC_MAC=0, TABLE_VLAN, TABLE_DYNAMIC_MAC, TABLE_MIB,} cocci_id/* drivers/net/ethernet/micrel/ksz884x.c 1016 */;
}
