cocci_test_suite() {
	dma_addr_t cocci_id/* arch/arm/plat-omap/dma.c 999 */;
	struct dma_link_info *cocci_id/* arch/arm/plat-omap/dma.c 93 */;
	char cocci_id/* arch/arm/plat-omap/dma.c 807 */[MAX_LOGICAL_DMA_CH_COUNT];
	struct dma_link_info {
		int *linked_dmach_q;
		int no_of_lchs_linked;
		int q_count;
		int q_tail;
		int q_head;
		int chain_state;
		int chain_mode;
	} cocci_id/* arch/arm/plat-omap/dma.c 80 */;
	unsigned char cocci_id/* arch/arm/plat-omap/dma.c 757 */;
	struct omap_dma_global_context_registers {
		u32 dma_irqenable_l0;
		u32 dma_irqenable_l1;
		u32 dma_ocp_sysconfig;
		u32 dma_gcr;
	} cocci_id/* arch/arm/plat-omap/dma.c 73 */;
	int cocci_id/* arch/arm/plat-omap/dma.c 68 */(int lch,
						      unsigned char read_prio,
						      unsigned char write_prio);
	struct omap_dma_dev_attr *cocci_id/* arch/arm/plat-omap/dma.c 66 */;
	int *cocci_id/* arch/arm/plat-omap/dma.c 605 */;
	void (*cocci_id/* arch/arm/plat-omap/dma.c 604 */)(int lch,
							   u16 ch_status,
							   void *data);
	const char *cocci_id/* arch/arm/plat-omap/dma.c 603 */;
	unsigned long cocci_id/* arch/arm/plat-omap/dma.c 588 */;
	enum{DMA_CHAIN_STARTED, DMA_CHAIN_NOTSTARTED,} cocci_id/* arch/arm/plat-omap/dma.c 57 */;
	u32 cocci_id/* arch/arm/plat-omap/dma.c 546 */;
	int cocci_id/* arch/arm/plat-omap/dma.c 544 */;
	void cocci_id/* arch/arm/plat-omap/dma.c 544 */;
	enum{DMA_CH_ALLOC_DONE, DMA_CH_PARAMS_SET_DONE, DMA_CH_STARTED, DMA_CH_QUEUED, DMA_CH_NOTSTARTED, DMA_CH_PAUSED, DMA_CH_LINK_ENABLED,} cocci_id/* arch/arm/plat-omap/dma.c 53 */;
	u16 cocci_id/* arch/arm/plat-omap/dma.c 516 */;
	unsigned int cocci_id/* arch/arm/plat-omap/dma.c 449 */;
	enum omap_dma_burst_mode cocci_id/* arch/arm/plat-omap/dma.c 447 */;
	struct omap_dma_channel_params *cocci_id/* arch/arm/plat-omap/dma.c 335 */;
	enum omap_dma_channel_mode cocci_id/* arch/arm/plat-omap/dma.c 294 */;
	enum omap_dma_write_mode cocci_id/* arch/arm/plat-omap/dma.c 281 */;
	char *cocci_id/* arch/arm/plat-omap/dma.c 1450 */;
	int __init cocci_id/* arch/arm/plat-omap/dma.c 1450 */;
	void __exit cocci_id/* arch/arm/plat-omap/dma.c 1437 */;
	struct platform_driver cocci_id/* arch/arm/plat-omap/dma.c 1423 */;
	void cocci_id/* arch/arm/plat-omap/dma.c 136 */(int lch);
	struct omap_dma_lch *cocci_id/* arch/arm/plat-omap/dma.c 134 */;
	spinlock_t cocci_id/* arch/arm/plat-omap/dma.c 133 */;
	char cocci_id/* arch/arm/plat-omap/dma.c 1288 */[4];
	struct platform_device *cocci_id/* arch/arm/plat-omap/dma.c 1284 */;
	struct omap_system_dma_plat_info *cocci_id/* arch/arm/plat-omap/dma.c 1278 */;
	struct irqaction cocci_id/* arch/arm/plat-omap/dma.c 1231 */;
	irqreturn_t cocci_id/* arch/arm/plat-omap/dma.c 1116 */;
	void *cocci_id/* arch/arm/plat-omap/dma.c 1116 */;
}
