cocci_test_suite() {
	struct jmb38x_ms cocci_id/* drivers/memstick/host/jmb38x_ms.c 947 */;
	const struct pci_device_id *cocci_id/* drivers/memstick/host/jmb38x_ms.c 916 */;
	struct jmb38x_ms_host cocci_id/* drivers/memstick/host/jmb38x_ms.c 868 */;
	struct jmb38x_ms *cocci_id/* drivers/memstick/host/jmb38x_ms.c 863 */;
	int cocci_id/* drivers/memstick/host/jmb38x_ms.c 863 */;
	struct pci_dev *cocci_id/* drivers/memstick/host/jmb38x_ms.c 847 */;
	pm_message_t cocci_id/* drivers/memstick/host/jmb38x_ms.c 798 */;
	unsigned char cocci_id/* drivers/memstick/host/jmb38x_ms.c 768 */;
	enum memstick_param cocci_id/* drivers/memstick/host/jmb38x_ms.c 674 */;
	struct jmb38x_ms {
		struct pci_dev *pdev;
		int host_cnt;
		struct memstick_host *hosts[];
	} cocci_id/* drivers/memstick/host/jmb38x_ms.c 66 */;
	unsigned long cocci_id/* drivers/memstick/host/jmb38x_ms.c 595 */;
	struct memstick_host *cocci_id/* drivers/memstick/host/jmb38x_ms.c 594 */;
	struct jmb38x_ms_host *cocci_id/* drivers/memstick/host/jmb38x_ms.c 593 */;
	struct timer_list *cocci_id/* drivers/memstick/host/jmb38x_ms.c 591 */;
	void cocci_id/* drivers/memstick/host/jmb38x_ms.c 591 */;
	irqreturn_t cocci_id/* drivers/memstick/host/jmb38x_ms.c 516 */;
	void *cocci_id/* drivers/memstick/host/jmb38x_ms.c 516 */;
	struct jmb38x_ms_host {
		struct jmb38x_ms *chip;
		void __iomem *addr;
		spinlock_t lock;
		struct tasklet_struct notify;
		int id;
		char host_id[32];
		int irq;
		unsigned int block_pos;
		unsigned long timeout_jiffies;
		struct timer_list timer;
		struct memstick_host *msh;
		struct memstick_request *req;
		unsigned char cmd_flags;
		unsigned char io_pos;
		unsigned char ifmode;
		unsigned int io_word[2];
	} cocci_id/* drivers/memstick/host/jmb38x_ms.c 47 */;
	unsigned int cocci_id/* drivers/memstick/host/jmb38x_ms.c 469 */;
	struct page *cocci_id/* drivers/memstick/host/jmb38x_ms.c 305 */;
	enum{DMA_ADDRESS=0x00, BLOCK=0x04, DMA_CONTROL=0x08, TPC_P0=0x0c, TPC_P1=0x10, TPC=0x14, HOST_CONTROL=0x18, DATA=0x1c, STATUS=0x20, INT_STATUS=0x24, INT_STATUS_ENABLE=0x28, INT_SIGNAL_ENABLE=0x2c, TIMER=0x30, TIMER_CONTROL=0x34, PAD_OUTPUT_ENABLE=0x38, PAD_PU_PD=0x3c, CLOCK_DELAY=0x40, ADMA_ADDRESS=0x44, CLOCK_CONTROL=0x48, LED_CONTROL=0x4c, VERSION=0x50,} cocci_id/* drivers/memstick/host/jmb38x_ms.c 23 */;
	bool cocci_id/* drivers/memstick/host/jmb38x_ms.c 20 */;
	unsigned int *cocci_id/* drivers/memstick/host/jmb38x_ms.c 172 */;
	unsigned char *cocci_id/* drivers/memstick/host/jmb38x_ms.c 155 */;
	enum{CMD_READY=0x01, FIFO_READY=0x02, REG_DATA=0x04, DMA_DATA=0x08,} cocci_id/* drivers/memstick/host/jmb38x_ms.c 147 */;
	struct pci_driver cocci_id/* drivers/memstick/host/jmb38x_ms.c 1033 */;
	struct pci_device_id cocci_id/* drivers/memstick/host/jmb38x_ms.c 1026 */[];
}