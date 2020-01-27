cocci_test_suite() {
	flexcop_ibi_register cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 77 */;
	struct flexcop_pci {
		struct pci_dev *pdev;
#define FC_PCI_INIT 0x01
#define FC_PCI_DMA_INIT 0x02
		int init_state;
		void __iomem *io_mem;
		u32 irq;
#define FC_DEFAULT_DMA1_BUFSIZE (1280 * 188)
#define FC_DEFAULT_DMA2_BUFSIZE (10 * 188)
				struct flexcop_dma dma[2];
		int active_dma1_addr;
		u32 last_dma1_cur_pos;
		int count;
		int count_prev;
		int stream_problem;
		spinlock_t irq_lock;
		unsigned long last_irq;
		struct delayed_work irq_check_work;
		struct flexcop_device *fc_dev;
	} cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 45 */;
	struct pci_driver cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 426 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 419 */[];
	int cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 35 */;
	const struct pci_device_id *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 341 */;
	struct pci_dev *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 340 */;
	struct flexcop_pci *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 281 */;
	void cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 281 */;
	unsigned long long cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 191 */;
	u32 cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 187 */;
	dma_addr_t cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 185 */;
	flexcop_ibi_value cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 151 */;
	unsigned long cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 150 */;
	irqreturn_t cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 146 */;
	void *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 146 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 116 */;
	struct flexcop_device *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 109 */;
	struct flexcop_pci cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 108 */;
	struct work_struct *cocci_id/* drivers/media/pci/b2c2/flexcop-pci.c 105 */;
}
