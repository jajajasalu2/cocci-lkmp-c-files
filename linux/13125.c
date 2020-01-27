cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/fpga/zynq-fpga.c 652 */;
	const struct of_device_id cocci_id/* drivers/fpga/zynq-fpga.c 644 */[];
	struct resource *cocci_id/* drivers/fpga/zynq-fpga.c 558 */;
	struct device *cocci_id/* drivers/fpga/zynq-fpga.c 555 */;
	struct platform_device *cocci_id/* drivers/fpga/zynq-fpga.c 553 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/zynq-fpga.c 545 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/zynq-fpga.c 524 */;
	struct fpga_manager *cocci_id/* drivers/fpga/zynq-fpga.c 524 */;
	struct fpga_image_info *cocci_id/* drivers/fpga/zynq-fpga.c 486 */;
	struct scatterlist *cocci_id/* drivers/fpga/zynq-fpga.c 392 */;
	unsigned long cocci_id/* drivers/fpga/zynq-fpga.c 390 */;
	const char *cocci_id/* drivers/fpga/zynq-fpga.c 387 */;
	struct sg_table *cocci_id/* drivers/fpga/zynq-fpga.c 384 */;
	bool cocci_id/* drivers/fpga/zynq-fpga.c 242 */;
	const u8 *cocci_id/* drivers/fpga/zynq-fpga.c 242 */;
	size_t cocci_id/* drivers/fpga/zynq-fpga.c 242 */;
	u32 cocci_id/* drivers/fpga/zynq-fpga.c 215 */;
	struct zynq_fpga_priv *cocci_id/* drivers/fpga/zynq-fpga.c 214 */;
	irqreturn_t cocci_id/* drivers/fpga/zynq-fpga.c 212 */;
	void *cocci_id/* drivers/fpga/zynq-fpga.c 212 */;
	int cocci_id/* drivers/fpga/zynq-fpga.c 212 */;
	void cocci_id/* drivers/fpga/zynq-fpga.c 154 */;
	const struct zynq_fpga_priv *cocci_id/* drivers/fpga/zynq-fpga.c 143 */;
	struct zynq_fpga_priv {
		int irq;
		struct clk *clk;
		void __iomem *io_base;
		struct regmap *slcr;
		spinlock_t dma_lock;
		unsigned int dma_elm;
		unsigned int dma_nelms;
		struct scatterlist *cur_sg;
		struct completion dma_done;
	} cocci_id/* drivers/fpga/zynq-fpga.c 122 */;
}
