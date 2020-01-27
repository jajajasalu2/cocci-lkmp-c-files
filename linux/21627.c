cocci_test_suite() {
	unsigned long cocci_id/* arch/unicore32/kernel/dma.c 76 */;
	void cocci_id/* arch/unicore32/kernel/dma.c 74 */;
	void (*cocci_id/* arch/unicore32/kernel/dma.c 33 */)(int, void *);
	puv3_dma_prio cocci_id/* arch/unicore32/kernel/dma.c 32 */;
	char *cocci_id/* arch/unicore32/kernel/dma.c 32 */;
	struct dma_channel cocci_id/* arch/unicore32/kernel/dma.c 30 */[MAX_DMA_CHANNELS];
	struct dma_channel {
		char *name;
		puv3_dma_prio prio;
		void (*irq_handler)(int, void *);
		void (*err_handler)(int, void *);
		void *data;
	} cocci_id/* arch/unicore32/kernel/dma.c 22 */;
	int __init cocci_id/* arch/unicore32/kernel/dma.c 148 */;
	struct dma_channel *cocci_id/* arch/unicore32/kernel/dma.c 127 */;
	irqreturn_t cocci_id/* arch/unicore32/kernel/dma.c 120 */;
	void *cocci_id/* arch/unicore32/kernel/dma.c 120 */;
	int cocci_id/* arch/unicore32/kernel/dma.c 120 */;
}
