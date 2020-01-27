cocci_test_suite() {
	struct macio_chip *cocci_id/* drivers/macintosh/rack-meter.c 98 */;
	struct kernel_cpustat *cocci_id/* drivers/macintosh/rack-meter.c 84 */;
	u64 cocci_id/* drivers/macintosh/rack-meter.c 82 */;
	unsigned int cocci_id/* drivers/macintosh/rack-meter.c 82 */;
	void __exit cocci_id/* drivers/macintosh/rack-meter.c 607 */;
	int __init cocci_id/* drivers/macintosh/rack-meter.c 600 */;
	struct macio_driver cocci_id/* drivers/macintosh/rack-meter.c 588 */;
	const struct of_device_id cocci_id/* drivers/macintosh/rack-meter.c 582 */[];
	struct rackmeter {
		struct macio_dev *mdev;
		unsigned int irq;
		struct device_node *i2s;
		u8 *ubuf;
		struct dbdma_regs __iomem *dma_regs;
		void __iomem *i2s_regs;
		dma_addr_t dma_buf_p;
		struct rackmeter_dma *dma_buf_v;
		int stale_irq;
		struct rackmeter_cpu cpu[2];
		int paused;
		struct mutex sem;
	} cocci_id/* drivers/macintosh/rack-meter.c 58 */;
	unsigned long cocci_id/* drivers/macintosh/rack-meter.c 513 */;
	struct rackmeter_cpu {
		struct delayed_work sniffer;
		struct rackmeter *rm;
		u64 prev_wall;
		u64 prev_idle;
		int zero;
	}____cacheline_aligned cocci_id/* drivers/macintosh/rack-meter.c 50 */;
	struct rackmeter_dma cocci_id/* drivers/macintosh/rack-meter.c 454 */;
	u8 *cocci_id/* drivers/macintosh/rack-meter.c 445 */;
	struct rackmeter_dma {
		struct dbdma_cmd cmd[4]____cacheline_aligned;
		u32 mark ____cacheline_aligned;
		u32 buf1[SAMPLE_COUNT]____cacheline_aligned;
		u32 buf2[SAMPLE_COUNT]____cacheline_aligned;
	}____cacheline_aligned cocci_id/* drivers/macintosh/rack-meter.c 43 */;
	struct resource cocci_id/* drivers/macintosh/rack-meter.c 372 */;
	struct device_node *cocci_id/* drivers/macintosh/rack-meter.c 370 */;
	const struct of_device_id *cocci_id/* drivers/macintosh/rack-meter.c 368 */;
	struct macio_dev *cocci_id/* drivers/macintosh/rack-meter.c 367 */;
	u32 *cocci_id/* drivers/macintosh/rack-meter.c 329 */;
	irqreturn_t cocci_id/* drivers/macintosh/rack-meter.c 324 */;
	void *cocci_id/* drivers/macintosh/rack-meter.c 324 */;
	int cocci_id/* drivers/macintosh/rack-meter.c 314 */;
	u32 cocci_id/* drivers/macintosh/rack-meter.c 312 */;
	struct rackmeter *cocci_id/* drivers/macintosh/rack-meter.c 312 */;
	u8 cocci_id/* drivers/macintosh/rack-meter.c 240 */;
	struct rackmeter_cpu cocci_id/* drivers/macintosh/rack-meter.c 216 */;
	struct rackmeter_cpu *cocci_id/* drivers/macintosh/rack-meter.c 215 */;
	struct work_struct *cocci_id/* drivers/macintosh/rack-meter.c 213 */;
	struct dbdma_cmd cocci_id/* drivers/macintosh/rack-meter.c 183 */;
	struct dbdma_cmd *cocci_id/* drivers/macintosh/rack-meter.c 170 */;
	struct rackmeter_dma *cocci_id/* drivers/macintosh/rack-meter.c 147 */;
	void cocci_id/* drivers/macintosh/rack-meter.c 145 */;
}
