cocci_test_suite() {
	void (*cocci_id/* drivers/scsi/mac53c94.c 70 */)(struct scsi_cmnd *);
	void cocci_id/* drivers/scsi/mac53c94.c 67 */(struct fsc_state *,
						      struct scsi_cmnd *);
	void cocci_id/* drivers/scsi/mac53c94.c 66 */(struct fsc_state *,
						      int result);
	irqreturn_t cocci_id/* drivers/scsi/mac53c94.c 65 */(int, void *);
	void cocci_id/* drivers/scsi/mac53c94.c 64 */(int, void *);
	void cocci_id/* drivers/scsi/mac53c94.c 62 */(struct fsc_state *);
	void __exit cocci_id/* drivers/scsi/mac53c94.c 562 */;
	int __init cocci_id/* drivers/scsi/mac53c94.c 557 */;
	struct macio_driver cocci_id/* drivers/scsi/mac53c94.c 545 */;
	struct of_device_id cocci_id/* drivers/scsi/mac53c94.c 536 */[];
	struct dbdma_cmd *cocci_id/* drivers/scsi/mac53c94.c 477 */;
	struct dbdma_cmd cocci_id/* drivers/scsi/mac53c94.c 469 */;
	int *cocci_id/* drivers/scsi/mac53c94.c 462 */;
	struct fsc_state {
		struct mac53c94_regs __iomem *regs;
		int intr;
		struct dbdma_regs __iomem *dma;
		int dmaintr;
		int clk_freq;
		struct Scsi_Host *host;
		struct scsi_cmnd *request_q;
		struct scsi_cmnd *request_qtail;
		struct scsi_cmnd *current_req;
		enum fsc_phase phase;
		struct dbdma_cmd *dma_cmds;
		void *dma_cmd_space;
		struct pci_dev *pdev;
		dma_addr_t dma_addr;
		struct macio_dev *mdev;
	} cocci_id/* drivers/scsi/mac53c94.c 44 */;
	struct fsc_state cocci_id/* drivers/scsi/mac53c94.c 432 */;
	const unsigned char *cocci_id/* drivers/scsi/mac53c94.c 417 */;
	struct pci_dev *cocci_id/* drivers/scsi/mac53c94.c 413 */;
	struct device_node *cocci_id/* drivers/scsi/mac53c94.c 412 */;
	const struct of_device_id *cocci_id/* drivers/scsi/mac53c94.c 410 */;
	struct macio_dev *cocci_id/* drivers/scsi/mac53c94.c 410 */;
	struct scsi_host_template cocci_id/* drivers/scsi/mac53c94.c 399 */;
	u32 cocci_id/* drivers/scsi/mac53c94.c 368 */;
	dma_addr_t cocci_id/* drivers/scsi/mac53c94.c 367 */;
	struct scatterlist *cocci_id/* drivers/scsi/mac53c94.c 365 */;
	enum fsc_phase{idle, selecting, dataing, completing, busfreeing,} cocci_id/* drivers/scsi/mac53c94.c 36 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/mac53c94.c 347 */;
	struct fsc_state *cocci_id/* drivers/scsi/mac53c94.c 345 */;
	int cocci_id/* drivers/scsi/mac53c94.c 345 */;
	void cocci_id/* drivers/scsi/mac53c94.c 345 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/mac53c94.c 186 */;
	unsigned long cocci_id/* drivers/scsi/mac53c94.c 185 */;
	irqreturn_t cocci_id/* drivers/scsi/mac53c94.c 183 */;
	void *cocci_id/* drivers/scsi/mac53c94.c 183 */;
	struct dbdma_regs __iomem *cocci_id/* drivers/scsi/mac53c94.c 129 */;
	struct mac53c94_regs __iomem *cocci_id/* drivers/scsi/mac53c94.c 128 */;
}
