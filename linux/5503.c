cocci_test_suite() {
	struct buf_desc {
		u32 bd_ctrl;
		u32 bd_status;
		u32 bd_addr;
		u32 bd_nextp;
	} cocci_id/* drivers/spi/spi-pic32-sqi.c 97 */;
	struct platform_driver cocci_id/* drivers/spi/spi-pic32-sqi.c 702 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-pic32-sqi.c 696 */[];
	struct platform_device *cocci_id/* drivers/spi/spi-pic32-sqi.c 569 */;
	unsigned long cocci_id/* drivers/spi/spi-pic32-sqi.c 509 */;
	struct buf_desc cocci_id/* drivers/spi/spi-pic32-sqi.c 502 */;
	struct ring_desc cocci_id/* drivers/spi/spi-pic32-sqi.c 397 */;
	struct ring_desc *cocci_id/* drivers/spi/spi-pic32-sqi.c 343 */;
	struct spi_message *cocci_id/* drivers/spi/spi-pic32-sqi.c 340 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-pic32-sqi.c 333 */;
	struct spi_device *cocci_id/* drivers/spi/spi-pic32-sqi.c 332 */;
	bool cocci_id/* drivers/spi/spi-pic32-sqi.c 331 */;
	struct spi_master *cocci_id/* drivers/spi/spi-pic32-sqi.c 331 */;
	struct buf_desc *cocci_id/* drivers/spi/spi-pic32-sqi.c 264 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-pic32-sqi.c 262 */;
	irqreturn_t cocci_id/* drivers/spi/spi-pic32-sqi.c 199 */;
	void *cocci_id/* drivers/spi/spi-pic32-sqi.c 199 */;
	int cocci_id/* drivers/spi/spi-pic32-sqi.c 199 */;
	struct pic32_sqi *cocci_id/* drivers/spi/spi-pic32-sqi.c 193 */;
	u32 cocci_id/* drivers/spi/spi-pic32-sqi.c 160 */;
	void __iomem *cocci_id/* drivers/spi/spi-pic32-sqi.c 160 */;
	void cocci_id/* drivers/spi/spi-pic32-sqi.c 160 */;
	struct pic32_sqi {
		void __iomem *regs;
		struct clk *sys_clk;
		struct clk *base_clk;
		struct spi_master *master;
		int irq;
		struct completion xfer_done;
		struct ring_desc *ring;
		void *bd;
		dma_addr_t bd_dma;
		struct list_head bd_list_free;
		struct list_head bd_list_used;
		struct spi_device *cur_spi;
		u32 cur_speed;
		u8 cur_mode;
	} cocci_id/* drivers/spi/spi-pic32-sqi.c 138 */;
	struct ring_desc {
		struct list_head list;
		struct buf_desc *bd;
		dma_addr_t bd_dma;
		u32 xfer_len;
	} cocci_id/* drivers/spi/spi-pic32-sqi.c 127 */;
}
