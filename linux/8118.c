cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 862 */;
	u8 cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 720 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 715 */;
	struct pci_dev *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 714 */;
	u32 cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 580 */;
	struct net_device *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 578 */;
	struct pciefd_board *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 576 */;
	int cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 576 */;
	struct pucan_tx_msg *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 561 */;
	struct pciefd_tx_link *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 514 */;
	unsigned long cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 508 */;
	struct pciefd_page *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 507 */;
	struct pciefd_can *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 506 */;
	int *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 504 */;
	u16 cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 503 */;
	struct peak_canfd_priv *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 503 */;
	void *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 503 */;
	u32 *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 458 */;
	struct pciefd_tx_link cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 373 */;
	struct pciefd_rx_dma *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 318 */;
	irqreturn_t cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 315 */;
	__le32 *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 306 */;
	void cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 303 */;
	const u32 cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 243 */;
	const struct pciefd_can *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 227 */;
	const struct pciefd_board *cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 214 */;
	const struct pci_device_id cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 201 */[];
	struct pciefd_board {
		void __iomem *reg_base;
		struct pci_dev *pci_dev;
		int can_count;
		spinlock_t cmd_lock;
		struct pciefd_can *can[0];
	} cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 192 */;
	struct pciefd_can {
		struct peak_canfd_priv ucan;
		void __iomem *reg_base;
		struct pciefd_board *board;
		struct pucan_command pucan_cmd;
		dma_addr_t rx_dma_laddr;
		void *rx_dma_vaddr;
		dma_addr_t tx_dma_laddr;
		void *tx_dma_vaddr;
		struct pciefd_page tx_pages[PCIEFD_TX_PAGE_COUNT];
		u16 tx_pages_free;
		u16 tx_page_index;
		spinlock_t tx_lock;
		u32 irq_status;
		u32 irq_tag;
	} cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 170 */;
	struct pciefd_board cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 169 */;
	struct pciefd_page {
		void *vbase;
		dma_addr_t lbase;
		u32 offset;
		u32 size;
	} cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 161 */;
	struct pciefd_tx_link {
		__le16 size;
		__le16 type;
		__le32 laddr_lo;
		__le32 laddr_hi;
	}__packed __aligned(4) cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 153 */;
	struct pciefd_rx_dma {
		__le32 irq_status;
		__le32 sys_time_low;
		__le32 sys_time_high;
		struct pucan_rx_msg msg[0];
	}__packed __aligned(4) cocci_id/* drivers/net/can/peak_canfd/peak_pciefd_main.c 145 */;
}
