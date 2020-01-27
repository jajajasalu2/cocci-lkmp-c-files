cocci_test_suite() {
	struct axi_dmac_desc {
		struct virt_dma_desc vdesc;
		bool cyclic;
		bool have_partial_xfer;
		unsigned int num_submitted;
		unsigned int num_completed;
		unsigned int num_sgs;
		struct axi_dmac_sg sg[];
	} cocci_id/* drivers/dma/dma-axi-dmac.c 97 */;
	struct platform_driver cocci_id/* drivers/dma/dma-axi-dmac.c 957 */;
	const struct of_device_id cocci_id/* drivers/dma/dma-axi-dmac.c 951 */[];
	struct axi_dmac_sg {
		dma_addr_t src_addr;
		dma_addr_t dest_addr;
		unsigned int x_len;
		unsigned int y_len;
		unsigned int dest_stride;
		unsigned int src_stride;
		unsigned int id;
		unsigned int partial_len;
		bool schedule_when_free;
	} cocci_id/* drivers/dma/dma-axi-dmac.c 85 */;
	struct resource *cocci_id/* drivers/dma/dma-axi-dmac.c 832 */;
	struct dma_device *cocci_id/* drivers/dma/dma-axi-dmac.c 830 */;
	struct platform_device *cocci_id/* drivers/dma/dma-axi-dmac.c 827 */;
	struct device_node *cocci_id/* drivers/dma/dma-axi-dmac.c 725 */;
	const struct regmap_config cocci_id/* drivers/dma/dma-axi-dmac.c 711 */;
	struct device *cocci_id/* drivers/dma/dma-axi-dmac.c 682 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/dma-axi-dmac.c 677 */;
	struct dma_chan *cocci_id/* drivers/dma/dma-axi-dmac.c 672 */;
	struct dma_interleaved_template *cocci_id/* drivers/dma/dma-axi-dmac.c 602 */;
	size_t cocci_id/* drivers/dma/dma-axi-dmac.c 568 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/dma-axi-dmac.c 567 */;
	struct scatterlist *cocci_id/* drivers/dma/dma-axi-dmac.c 527 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/dma-axi-dmac.c 484 */;
	unsigned int cocci_id/* drivers/dma/dma-axi-dmac.c 466 */;
	unsigned long cocci_id/* drivers/dma/dma-axi-dmac.c 456 */;
	irqreturn_t cocci_id/* drivers/dma/dma-axi-dmac.c 398 */;
	void *cocci_id/* drivers/dma/dma-axi-dmac.c 398 */;
	struct axi_dmac_sg *cocci_id/* drivers/dma/dma-axi-dmac.c 332 */;
	struct dmaengine_result *cocci_id/* drivers/dma/dma-axi-dmac.c 330 */;
	void cocci_id/* drivers/dma/dma-axi-dmac.c 327 */;
	u32 cocci_id/* drivers/dma/dma-axi-dmac.c 286 */;
	struct axi_dmac *cocci_id/* drivers/dma/dma-axi-dmac.c 283 */;
	struct axi_dmac_desc cocci_id/* drivers/dma/dma-axi-dmac.c 269 */;
	struct axi_dmac_desc *cocci_id/* drivers/dma/dma-axi-dmac.c 266 */;
	struct axi_dmac_chan *cocci_id/* drivers/dma/dma-axi-dmac.c 266 */;
	dma_addr_t cocci_id/* drivers/dma/dma-axi-dmac.c 187 */;
	bool cocci_id/* drivers/dma/dma-axi-dmac.c 187 */;
	int cocci_id/* drivers/dma/dma-axi-dmac.c 173 */;
	struct axi_dmac_chan cocci_id/* drivers/dma/dma-axi-dmac.c 149 */;
	struct axi_dmac cocci_id/* drivers/dma/dma-axi-dmac.c 143 */;
	struct axi_dmac {
		void __iomem *base;
		int irq;
		struct clk *clk;
		struct dma_device dma_dev;
		struct axi_dmac_chan chan;
		struct device_dma_parameters dma_parms;
	} cocci_id/* drivers/dma/dma-axi-dmac.c 129 */;
	struct axi_dmac_chan {
		struct virt_dma_chan vchan;
		struct axi_dmac_desc *next_desc;
		struct list_head active_descs;
		enum dma_transfer_direction direction;
		unsigned int src_width;
		unsigned int dest_width;
		unsigned int src_type;
		unsigned int dest_type;
		unsigned int max_length;
		unsigned int address_align_mask;
		unsigned int length_align_mask;
		bool hw_partial_xfer;
		bool hw_cyclic;
		bool hw_2d;
	} cocci_id/* drivers/dma/dma-axi-dmac.c 108 */;
}
