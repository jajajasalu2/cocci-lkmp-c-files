cocci_test_suite() {
	struct gdma_dma_desc {
		struct virt_dma_desc vdesc;
		enum dma_transfer_direction direction;
		bool cyclic;
		u32 residue;
		unsigned int num_sgs;
		struct gdma_dma_sg sg[];
	} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 96 */;
	struct platform_driver cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 904 */;
	struct gdma_dma_sg {
		dma_addr_t src_addr;
		dma_addr_t dst_addr;
		u32 len;
	} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 90 */;
	enum gdma_dma_transfer_size{GDMA_TRANSFER_SIZE_4BYTE=0, GDMA_TRANSFER_SIZE_8BYTE=1, GDMA_TRANSFER_SIZE_16BYTE=2, GDMA_TRANSFER_SIZE_32BYTE=3, GDMA_TRANSFER_SIZE_64BYTE=4,} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 82 */;
	struct gdma_data *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 802 */;
	void __iomem *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 801 */;
	struct dma_device *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 797 */;
	const struct of_device_id *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 794 */;
	struct platform_device *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 792 */;
	const struct of_device_id cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 786 */[];
	struct gdma_data cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 772 */;
	struct gdma_dma_desc cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 701 */;
	struct virt_dma_desc *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 699 */;
	struct dma_tx_state *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 657 */;
	dma_cookie_t cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 656 */;
	enum dma_status cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 655 */;
	enum dma_transfer_direction cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 606 */;
	dma_addr_t cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 605 */;
	size_t cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 605 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 604 */;
	struct scatterlist *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 514 */;
	unsigned int cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 467 */;
	u32 cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 466 */;
	irqreturn_t cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 463 */;
	void *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 463 */;
	int cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 433 */;
	unsigned long cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 432 */;
	struct gdma_dma_desc *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 431 */;
	void cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 428 */;
	struct gdma_dma_sg *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 274 */;
	struct dma_slave_config *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 182 */;
	struct dma_chan *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 181 */;
	enum gdma_dma_transfer_size cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 167 */;
	uint32_t cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 155 */;
	struct gdma_dmaengine_chan cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 147 */;
	struct gdma_dma_dev cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 141 */;
	struct gdma_dmaengine_chan *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 139 */;
	struct gdma_dma_dev *cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 138 */;
	struct gdma_data {
		int chancnt;
		u32 done_int_reg;
		void (*init)(struct gdma_dma_dev *dma_dev);
		int (*start_transfer)(struct gdma_dmaengine_chan *chan);
	} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 131 */;
	struct gdma_dma_dev {
		struct dma_device ddev;
		struct device_dma_parameters dma_parms;
		struct gdma_data *data;
		void __iomem *base;
		struct tasklet_struct task;
		volatile unsigned long chan_issued;
		atomic_t cnt;
		struct gdma_dmaengine_chan chan[];
	} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 119 */;
	struct gdma_dmaengine_chan {
		struct virt_dma_chan vchan;
		unsigned int id;
		unsigned int slave_id;
		dma_addr_t fifo_addr;
		enum gdma_dma_transfer_size burst_size;
		struct gdma_dma_desc *desc;
		unsigned int next_sg;
	} cocci_id/* drivers/staging/ralink-gdma/ralink-gdma.c 107 */;
}
