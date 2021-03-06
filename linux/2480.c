cocci_test_suite() {
	struct dmaengine_desc_callback cocci_id/* drivers/dma/qcom/bam_dma.c 988 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/qcom/bam_dma.c 956 */;
	void cocci_id/* drivers/dma/qcom/bam_dma.c 955 */;
	size_t cocci_id/* drivers/dma/qcom/bam_dma.c 914 */;
	struct dma_tx_state *cocci_id/* drivers/dma/qcom/bam_dma.c 908 */;
	dma_cookie_t cocci_id/* drivers/dma/qcom/bam_dma.c 907 */;
	enum dma_status cocci_id/* drivers/dma/qcom/bam_dma.c 907 */;
	irqreturn_t cocci_id/* drivers/dma/qcom/bam_dma.c 865 */;
	void *cocci_id/* drivers/dma/qcom/bam_dma.c 865 */;
	enum bam_reg{BAM_CTRL, BAM_REVISION, BAM_NUM_PIPES, BAM_DESC_CNT_TRSHLD, BAM_IRQ_SRCS, BAM_IRQ_SRCS_MSK, BAM_IRQ_SRCS_UNMASKED, BAM_IRQ_STTS, BAM_IRQ_CLR, BAM_IRQ_EN, BAM_CNFG_BITS, BAM_IRQ_SRCS_EE, BAM_IRQ_SRCS_MSK_EE, BAM_P_CTRL, BAM_P_RST, BAM_P_HALT, BAM_P_IRQ_STTS, BAM_P_IRQ_CLR, BAM_P_IRQ_EN, BAM_P_EVNT_DEST_ADDR, BAM_P_EVNT_REG, BAM_P_SW_OFSTS, BAM_P_DATA_FIFO_ADDR, BAM_P_DESC_FIFO_ADDR, BAM_P_EVNT_GEN_TRSHLD, BAM_P_FIFO_SIZES,} cocci_id/* drivers/dma/qcom/bam_dma.c 80 */;
	struct bam_async_desc {
		struct virt_dma_desc vd;
		u32 num_desc;
		u32 xfer_len;
		u16 flags;
		struct bam_desc_hw *curr_desc;
		struct list_head desc_node;
		enum dma_transfer_direction dir;
		size_t length;
		struct bam_desc_hw desc[0];
	} cocci_id/* drivers/dma/qcom/bam_dma.c 62 */;
	struct bam_desc_hw *cocci_id/* drivers/dma/qcom/bam_dma.c 616 */;
	struct scatterlist *cocci_id/* drivers/dma/qcom/bam_dma.c 607 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/qcom/bam_dma.c 606 */;
	struct dma_slave_config *cocci_id/* drivers/dma/qcom/bam_dma.c 583 */;
	struct bam_chan *cocci_id/* drivers/dma/qcom/bam_dma.c 501 */;
	struct dma_chan *cocci_id/* drivers/dma/qcom/bam_dma.c 499 */;
	int cocci_id/* drivers/dma/qcom/bam_dma.c 499 */;
	struct bam_desc_hw {
		__le32 addr;
		__le16 size;
		__le16 flags;
	} cocci_id/* drivers/dma/qcom/bam_dma.c 48 */;
	struct bam_desc_hw cocci_id/* drivers/dma/qcom/bam_dma.c 462 */;
	const struct reg_offset_data cocci_id/* drivers/dma/qcom/bam_dma.c 411 */;
	enum bam_reg cocci_id/* drivers/dma/qcom/bam_dma.c 409 */;
	u32 cocci_id/* drivers/dma/qcom/bam_dma.c 408 */;
	struct bam_device *cocci_id/* drivers/dma/qcom/bam_dma.c 408 */;
	void __iomem *cocci_id/* drivers/dma/qcom/bam_dma.c 408 */;
	struct bam_device {
		void __iomem *regs;
		struct device *dev;
		struct dma_device common;
		struct device_dma_parameters dma_parms;
		struct bam_chan *channels;
		u32 num_channels;
		u32 num_ees;
		u32 ee;
		bool controlled_remotely;
		const struct reg_offset_data *layout;
		struct clk *bamclk;
		int irq;
		struct tasklet_struct task;
	} cocci_id/* drivers/dma/qcom/bam_dma.c 380 */;
	struct bam_chan cocci_id/* drivers/dma/qcom/bam_dma.c 377 */;
	struct bam_chan {
		struct virt_dma_chan vc;
		struct bam_device *bdev;
		u32 id;
		struct dma_slave_config slave;
		struct bam_desc_hw *fifo_virt;
		dma_addr_t fifo_phys;
		unsigned short head;
		unsigned short tail;
		unsigned int initialized;
		unsigned int paused;
		unsigned int reconfigure;
		struct list_head desc_list;
		struct list_head node;
	} cocci_id/* drivers/dma/qcom/bam_dma.c 347 */;
	struct platform_driver cocci_id/* drivers/dma/qcom/bam_dma.c 1476 */;
	struct device *cocci_id/* drivers/dma/qcom/bam_dma.c 1455 */;
	int __maybe_unused cocci_id/* drivers/dma/qcom/bam_dma.c 1455 */;
	unsigned long cocci_id/* drivers/dma/qcom/bam_dma.c 1296 */;
	struct resource *cocci_id/* drivers/dma/qcom/bam_dma.c 1231 */;
	const struct of_device_id *cocci_id/* drivers/dma/qcom/bam_dma.c 1230 */;
	struct platform_device *cocci_id/* drivers/dma/qcom/bam_dma.c 1227 */;
	const struct of_device_id cocci_id/* drivers/dma/qcom/bam_dma.c 1218 */[];
	const struct reg_offset_data cocci_id/* drivers/dma/qcom/bam_dma.c 114 */[];
	unsigned int cocci_id/* drivers/dma/qcom/bam_dma.c 1135 */;
	struct bam_device cocci_id/* drivers/dma/qcom/bam_dma.c 1134 */;
	struct of_dma *cocci_id/* drivers/dma/qcom/bam_dma.c 1131 */;
	struct of_phandle_args *cocci_id/* drivers/dma/qcom/bam_dma.c 1130 */;
	struct bam_async_desc cocci_id/* drivers/dma/qcom/bam_dma.c 1125 */;
	struct bam_async_desc *cocci_id/* drivers/dma/qcom/bam_dma.c 1124 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/qcom/bam_dma.c 1122 */;
	struct reg_offset_data {
		u32 base_offset;
		unsigned int pipe_mult,evnt_mult,ee_mult;
	} cocci_id/* drivers/dma/qcom/bam_dma.c 109 */;
}
