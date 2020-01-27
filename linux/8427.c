cocci_test_suite() {
	u32 *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 998 */;
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 938 */;
	unsigned char *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 938 */;
	unsigned int cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 938 */;
	unsigned long cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 790 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 785 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 672 */;
	const int cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 552 */;
	__le16 *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 481 */;
	struct device_node *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 377 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 358 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 358 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 342 */;
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 337 */(struct dmfe_board_info *);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 335 */(struct dmfe_board_info *,
								     int);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 330 */(struct dmfe_board_info *,
								     struct sk_buff *);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 329 */(struct net_device *,
								     struct dmfe_board_info *);
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 327 */(unsigned char *,
								    unsigned int,
								    u8);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 326 */(struct timer_list *);
	u8 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 324 */(struct dmfe_board_info *);
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 323 */(void __iomem *);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 322 */(void __iomem *,
								     u32);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 321 */(void __iomem *,
								     u8, u8,
								     u16, u32);
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 320 */(void __iomem *,
								    u8, u8,
								    u32);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 317 */(u32,
								     void __iomem *);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 316 */(struct net_device *);
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 313 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 311 */(int,
									    void *);
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 310 */(void __iomem *,
								    int);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 309 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 306 */(struct sk_buff *,
									    struct net_device *);
	int cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 305 */(struct net_device *);
	u8 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 299 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 292 */;
	unsigned char cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 288 */;
	const char cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 284 */[];
	enum dmfe_CR6_bits{CR6_RXSC=0x2, CR6_PBF=0x8, CR6_PM=0x40, CR6_PAM=0x80, CR6_FDM=0x200, CR6_TXSC=0x2000, CR6_STI=0x100000, CR6_SFT=0x200000, CR6_RXA=0x40000000, CR6_NO_PURGE=0x20000000,} cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 276 */;
	enum dmfe_offsets{DCR0=0x00, DCR1=0x08, DCR2=0x10, DCR3=0x18, DCR4=0x20, DCR5=0x28, DCR6=0x30, DCR7=0x38, DCR8=0x40, DCR9=0x48, DCR10=0x50, DCR11=0x58, DCR12=0x60, DCR13=0x68, DCR14=0x70, DCR15=0x78,} cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 269 */;
	void __exit cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2252 */;
	int __init cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2203 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2168 */;
	pm_message_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2096 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2085 */[];
	uint cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 2063 */;
	struct dmfe_board_info {
		u32 chip_id;
		u8 chip_revision;
		struct net_device *next_dev;
		struct pci_dev *pdev;
		spinlock_t lock;
		void __iomem *ioaddr;
		u32 cr0_data;
		u32 cr5_data;
		u32 cr6_data;
		u32 cr7_data;
		u32 cr15_data;
		dma_addr_t buf_pool_dma_ptr;
		dma_addr_t buf_pool_dma_start;
		dma_addr_t desc_pool_dma_ptr;
		dma_addr_t first_tx_desc_dma;
		dma_addr_t first_rx_desc_dma;
		unsigned char *buf_pool_ptr;
		unsigned char *buf_pool_start;
		unsigned char *desc_pool_ptr;
		struct tx_desc *first_tx_desc;
		struct tx_desc *tx_insert_ptr;
		struct tx_desc *tx_remove_ptr;
		struct rx_desc *first_rx_desc;
		struct rx_desc *rx_insert_ptr;
		struct rx_desc *rx_ready_ptr;
		unsigned long tx_packet_cnt;
		unsigned long tx_queue_cnt;
		unsigned long rx_avail_cnt;
		unsigned long interval_rx_cnt;
		u16 HPNA_command;
		u16 HPNA_timer;
		u16 dbug_cnt;
		u16 NIC_capability;
		u16 PHY_reg4;
		u8 HPNA_present;
		u8 chip_type;
		u8 media_mode;
		u8 op_mode;
		u8 phy_addr;
		u8 wait_reset;
		u8 dm910x_chk_mode;
		u8 first_in_callback;
		u8 wol_mode;
		struct timer_list timer;
		unsigned long tx_fifo_underrun;
		unsigned long tx_loss_carrier;
		unsigned long tx_no_carrier;
		unsigned long tx_late_collision;
		unsigned long tx_excessive_collision;
		unsigned long tx_jabber_timeout;
		unsigned long reset_count;
		unsigned long reset_cr8;
		unsigned long reset_fatal;
		unsigned long reset_TXtimeout;
		unsigned char srom[128];
	} cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 200 */;
	struct rx_desc {
		__le32 rdes0,rdes1,rdes2,rdes3;
		struct sk_buff *rx_skb_ptr;
		struct rx_desc *next_rx_desc;
	}__attribute__((aligned(32))) cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 194 */;
	__le32 *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1934 */;
	struct tx_desc {
		__le32 tdes0,tdes1,tdes2,tdes3;
		char *tx_buf_ptr;
		struct tx_desc *next_tx_desc;
	}__attribute__((aligned(32))) cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 188 */;
	const u32 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1570 */[];
	long cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 155 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1549 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1548 */;
	struct dmfe_board_info *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1547 */;
	struct net_device *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1545 */;
	void cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1545 */;
	char *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1465 */;
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1449 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1448 */;
	u16 *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1447 */;
	void __iomem *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1446 */;
	struct rx_desc cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1409 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1378 */;
	void *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1377 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1365 */;
	struct tx_desc *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1362 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1123 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1102 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/dec/tulip/dmfe.c 1079 */;
}
