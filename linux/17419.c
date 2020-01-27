cocci_test_suite() {
	struct bcom_bd *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 65 */;
	size_t cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 64 */;
	struct platform_driver cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 572 */;
	struct mpc52xx_lpbfifo cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 57 */;
	const struct of_device_id cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 566 */[];
	struct resource cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 474 */;
	struct platform_device *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 472 */;
	unsigned long cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 458 */;
	struct mpc52xx_lpbfifo_request *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 456 */;
	void cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 456 */;
	struct mpc52xx_lpbfifo {
		struct device *dev;
		phys_addr_t regs_phys;
		void __iomem *regs;
		int irq;
		spinlock_t lock;
		struct bcom_task *bcom_tx_task;
		struct bcom_task *bcom_rx_task;
		struct bcom_task *bcom_cur_task;
		struct mpc52xx_lpbfifo_request *req;
		int dma_irqs_enabled;
	} cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 40 */;
	u8 *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 356 */;
	u32 cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 329 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 325 */;
	void *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 325 */;
	int cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 325 */;
	u32 *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 224 */;
	void __iomem *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_lpbfifo.c 223 */;
}
