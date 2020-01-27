cocci_test_suite() {
	unsigned long cocci_id/* drivers/spi/spi-topcliff-pch.c 925 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-topcliff-pch.c 918 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-topcliff-pch.c 917 */;
	int *cocci_id/* drivers/spi/spi-topcliff-pch.c 911 */;
	unsigned int cocci_id/* drivers/spi/spi-topcliff-pch.c 848 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-topcliff-pch.c 843 */;
	struct pch_dma_slave *cocci_id/* drivers/spi/spi-topcliff-pch.c 830 */;
	bool cocci_id/* drivers/spi/spi-topcliff-pch.c 828 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-topcliff-pch.c 828 */;
	void *cocci_id/* drivers/spi/spi-topcliff-pch.c 819 */;
	void cocci_id/* drivers/spi/spi-topcliff-pch.c 819 */;
	const u16 *cocci_id/* drivers/spi/spi-topcliff-pch.c 743 */;
	const u8 *cocci_id/* drivers/spi/spi-topcliff-pch.c 742 */;
	u16 *cocci_id/* drivers/spi/spi-topcliff-pch.c 720 */;
	u8 *cocci_id/* drivers/spi/spi-topcliff-pch.c 719 */;
	struct spi_message *cocci_id/* drivers/spi/spi-topcliff-pch.c 633 */;
	struct spi_device *cocci_id/* drivers/spi/spi-topcliff-pch.c 523 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-topcliff-pch.c 454 */;
	void __iomem *cocci_id/* drivers/spi/spi-topcliff-pch.c 335 */;
	u32 cocci_id/* drivers/spi/spi-topcliff-pch.c 334 */;
	irqreturn_t cocci_id/* drivers/spi/spi-topcliff-pch.c 332 */;
	struct spi_master *cocci_id/* drivers/spi/spi-topcliff-pch.c 252 */;
	const struct pci_device_id cocci_id/* drivers/spi/spi-topcliff-pch.c 204 */[];
	struct pch_pd_dev_save {
		int num;
		struct platform_device *pd_save[PCH_SPI_MAX_DEV];
		struct pch_spi_board_data *board_dat;
	} cocci_id/* drivers/spi/spi-topcliff-pch.c 198 */;
	struct pch_spi_board_data {
		struct pci_dev *pdev;
		u8 suspend_sts;
		int num;
	} cocci_id/* drivers/spi/spi-topcliff-pch.c 192 */;
	void __exit cocci_id/* drivers/spi/spi-topcliff-pch.c 1711 */;
	int __init cocci_id/* drivers/spi/spi-topcliff-pch.c 1694 */;
	struct pci_driver cocci_id/* drivers/spi/spi-topcliff-pch.c 1685 */;
	struct pch_spi_data {
		void __iomem *io_remap_addr;
		unsigned long io_base_addr;
		struct spi_master *master;
		struct work_struct work;
		wait_queue_head_t wait;
		u8 transfer_complete;
		u8 bcurrent_msg_processing;
		spinlock_t lock;
		struct list_head queue;
		u8 status;
		u32 bpw_len;
		u8 transfer_active;
		u32 tx_index;
		u32 rx_index;
		u16 *pkt_tx_buff;
		u16 *pkt_rx_buff;
		u8 n_curnt_chip;
		struct spi_device *current_chip;
		struct spi_message *current_msg;
		struct spi_transfer *cur_trans;
		struct pch_spi_board_data *board_dat;
		struct platform_device *plat_dev;
		int ch;
		struct pch_spi_dma_ctrl dma;
		int use_dma;
		u8 irq_reg_sts;
		int save_total_len;
	} cocci_id/* drivers/spi/spi-topcliff-pch.c 156 */;
	struct pch_pd_dev_save *cocci_id/* drivers/spi/spi-topcliff-pch.c 1544 */;
	const struct pci_device_id *cocci_id/* drivers/spi/spi-topcliff-pch.c 1538 */;
	struct pci_dev *cocci_id/* drivers/spi/spi-topcliff-pch.c 1538 */;
	struct platform_driver cocci_id/* drivers/spi/spi-topcliff-pch.c 1528 */;
	u8 cocci_id/* drivers/spi/spi-topcliff-pch.c 1458 */;
	pm_message_t cocci_id/* drivers/spi/spi-topcliff-pch.c 1456 */;
	struct pch_spi_data cocci_id/* drivers/spi/spi-topcliff-pch.c 1322 */;
	struct platform_device *cocci_id/* drivers/spi/spi-topcliff-pch.c 1312 */;
	struct pch_spi_dma_ctrl *cocci_id/* drivers/spi/spi-topcliff-pch.c 1292 */;
	struct pch_spi_data *cocci_id/* drivers/spi/spi-topcliff-pch.c 1290 */;
	struct pch_spi_board_data *cocci_id/* drivers/spi/spi-topcliff-pch.c 1289 */;
	int cocci_id/* drivers/spi/spi-topcliff-pch.c 1289 */;
	char *cocci_id/* drivers/spi/spi-topcliff-pch.c 1199 */;
	struct spi_transfer cocci_id/* drivers/spi/spi-topcliff-pch.c 1179 */;
	struct spi_message cocci_id/* drivers/spi/spi-topcliff-pch.c 1155 */;
	struct work_struct *cocci_id/* drivers/spi/spi-topcliff-pch.c 1119 */;
	struct pch_spi_dma_ctrl {
		struct dma_async_tx_descriptor *desc_tx;
		struct dma_async_tx_descriptor *desc_rx;
		struct pch_dma_slave param_tx;
		struct pch_dma_slave param_rx;
		struct dma_chan *chan_tx;
		struct dma_chan *chan_rx;
		struct scatterlist *sg_tx_p;
		struct scatterlist *sg_rx_p;
		struct scatterlist sg_tx;
		struct scatterlist sg_rx;
		int nent;
		void *tx_buf_virt;
		void *rx_buf_virt;
		dma_addr_t tx_buf_dma;
		dma_addr_t rx_buf_dma;
	} cocci_id/* drivers/spi/spi-topcliff-pch.c 105 */;
}