cocci_test_suite() {
	struct kvaser_pciefd_can cocci_id/* drivers/net/can/kvaser_pciefd.c 929 */;
	const struct net_device_ops cocci_id/* drivers/net/can/kvaser_pciefd.c 913 */;
	struct kvaser_pciefd_can *cocci_id/* drivers/net/can/kvaser_pciefd.c 906 */;
	struct timer_list *cocci_id/* drivers/net/can/kvaser_pciefd.c 904 */;
	void cocci_id/* drivers/net/can/kvaser_pciefd.c 904 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/kvaser_pciefd.c 895 */;
	const struct net_device *cocci_id/* drivers/net/can/kvaser_pciefd.c 894 */;
	enum can_mode cocci_id/* drivers/net/can/kvaser_pciefd.c 877 */;
	struct can_bittiming *cocci_id/* drivers/net/can/kvaser_pciefd.c 824 */;
	u32 *cocci_id/* drivers/net/can/kvaser_pciefd.c 791 */;
	struct kvaser_pciefd_tx_packet cocci_id/* drivers/net/can/kvaser_pciefd.c 767 */;
	netdev_tx_t cocci_id/* drivers/net/can/kvaser_pciefd.c 762 */;
	struct kvaser_pciefd_tx_packet *cocci_id/* drivers/net/can/kvaser_pciefd.c 723 */;
	unsigned long cocci_id/* drivers/net/can/kvaser_pciefd.c 599 */;
	u32 cocci_id/* drivers/net/can/kvaser_pciefd.c 598 */;
	int cocci_id/* drivers/net/can/kvaser_pciefd.c 596 */;
	struct kvaser_pciefd_cfg_param *cocci_id/* drivers/net/can/kvaser_pciefd.c 429 */;
	u8 cocci_id/* drivers/net/can/kvaser_pciefd.c 392 */;
	u8 cocci_id/* drivers/net/can/kvaser_pciefd.c 390 */[];
	u8 *cocci_id/* drivers/net/can/kvaser_pciefd.c 388 */;
	struct kvaser_pciefd_cfg_img *cocci_id/* drivers/net/can/kvaser_pciefd.c 384 */;
	struct kvaser_pciefd *cocci_id/* drivers/net/can/kvaser_pciefd.c 383 */;
	const u8 *cocci_id/* drivers/net/can/kvaser_pciefd.c 335 */;
	struct pci_device_id cocci_id/* drivers/net/can/kvaser_pciefd.c 313 */[];
	struct kvaser_pciefd_cfg_img {
		__le32 version;
		__le32 magic;
		__le32 crc;
		struct kvaser_pciefd_cfg_param params[KVASER_PCIEFD_CFG_MAX_PARAMS];
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 306 */;
	struct kvaser_pciefd_cfg_param {
		__le32 magic;
		__le32 nr;
		__le32 len;
		u8 data[KVASER_PCIEFD_CFG_PARAM_MAX_SZ];
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 299 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/kvaser_pciefd.c 287 */;
	struct kvaser_pciefd_tx_packet {
		u32 header[2];
		u8 data[64];
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 282 */;
	struct kvaser_pciefd_rx_packet {
		u32 header[2];
		u64 timestamp;
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 277 */;
	struct kvaser_pciefd {
		struct pci_dev *pci;
		void __iomem *reg_base;
		struct kvaser_pciefd_can *can[KVASER_PCIEFD_MAX_CAN_CHANNELS];
		void *dma_data[KVASER_PCIEFD_DMA_COUNT];
		u8 nr_channels;
		u32 bus_freq;
		u32 freq;
		u32 freq_to_ticks_div;
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 266 */;
	struct kvaser_pciefd_can {
		struct can_priv can;
		struct kvaser_pciefd *kv_pcie;
		void __iomem *reg_base;
		struct can_berr_counter bec;
		u8 cmd_seq;
		int err_rep_cnt;
		int echo_idx;
		spinlock_t lock;
		spinlock_t echo_lock;
		struct timer_list bec_poll_timer;
		struct completion start_comp,flush_comp;
	} cocci_id/* drivers/net/can/kvaser_pciefd.c 252 */;
	struct kvaser_pciefd cocci_id/* drivers/net/can/kvaser_pciefd.c 250 */;
	struct pci_driver cocci_id/* drivers/net/can/kvaser_pciefd.c 1904 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/kvaser_pciefd.c 1775 */;
	struct pci_dev *cocci_id/* drivers/net/can/kvaser_pciefd.c 1774 */;
	irqreturn_t cocci_id/* drivers/net/can/kvaser_pciefd.c 1728 */;
	void *cocci_id/* drivers/net/can/kvaser_pciefd.c 1728 */;
	struct kvaser_pciefd_rx_packet cocci_id/* drivers/net/can/kvaser_pciefd.c 1575 */;
	__le64 cocci_id/* drivers/net/can/kvaser_pciefd.c 1574 */;
	int *cocci_id/* drivers/net/can/kvaser_pciefd.c 1570 */;
	struct net_device_stats *cocci_id/* drivers/net/can/kvaser_pciefd.c 1543 */;
	bool cocci_id/* drivers/net/can/kvaser_pciefd.c 1514 */;
	struct kvaser_pciefd_rx_packet *cocci_id/* drivers/net/can/kvaser_pciefd.c 1511 */;
	struct can_berr_counter cocci_id/* drivers/net/can/kvaser_pciefd.c 1331 */;
	enum can_state *cocci_id/* drivers/net/can/kvaser_pciefd.c 1222 */;
	struct net_device *cocci_id/* drivers/net/can/kvaser_pciefd.c 1205 */;
	enum can_state cocci_id/* drivers/net/can/kvaser_pciefd.c 1198 */;
	struct can_frame *cocci_id/* drivers/net/can/kvaser_pciefd.c 1197 */;
	struct can_frame **cocci_id/* drivers/net/can/kvaser_pciefd.c 1166 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/can/kvaser_pciefd.c 1144 */;
	struct can_priv *cocci_id/* drivers/net/can/kvaser_pciefd.c 1142 */;
	struct canfd_frame *cocci_id/* drivers/net/can/kvaser_pciefd.c 1141 */;
	struct sk_buff *cocci_id/* drivers/net/can/kvaser_pciefd.c 1140 */;
	__le32 *cocci_id/* drivers/net/can/kvaser_pciefd.c 1138 */;
	unsigned int cocci_id/* drivers/net/can/kvaser_pciefd.c 1053 */;
	dma_addr_t cocci_id/* drivers/net/can/kvaser_pciefd.c 1048 */[KVASER_PCIEFD_DMA_COUNT];
	dma_addr_t cocci_id/* drivers/net/can/kvaser_pciefd.c 1029 */;
}
