cocci_test_suite() {
	dma_addr_t *cocci_id/* drivers/uio/uio_dmem_genirq.c 59 */;
	void *cocci_id/* drivers/uio/uio_dmem_genirq.c 54 */;
	struct uio_mem *cocci_id/* drivers/uio/uio_dmem_genirq.c 46 */;
	struct inode *cocci_id/* drivers/uio/uio_dmem_genirq.c 43 */;
	struct platform_driver cocci_id/* drivers/uio/uio_dmem_genirq.c 331 */;
	const struct of_device_id cocci_id/* drivers/uio/uio_dmem_genirq.c 325 */[];
	const struct dev_pm_ops cocci_id/* drivers/uio/uio_dmem_genirq.c 319 */;
	struct uio_dmem_genirq_platdata {
		struct uio_info *uioinfo;
		spinlock_t lock;
		unsigned long flags;
		struct platform_device *pdev;
		unsigned int dmem_region_start;
		unsigned int num_dmem_regions;
		void *dmem_region_vaddr[MAX_UIO_MAPS];
		struct mutex alloc_lock;
		unsigned int refcnt;
	} cocci_id/* drivers/uio/uio_dmem_genirq.c 31 */;
	struct device *cocci_id/* drivers/uio/uio_dmem_genirq.c 302 */;
	struct resource *cocci_id/* drivers/uio/uio_dmem_genirq.c 204 */;
	struct uio_dmem_genirq_pdata *cocci_id/* drivers/uio/uio_dmem_genirq.c 146 */;
	struct platform_device *cocci_id/* drivers/uio/uio_dmem_genirq.c 144 */;
	unsigned long cocci_id/* drivers/uio/uio_dmem_genirq.c 122 */;
	s32 cocci_id/* drivers/uio/uio_dmem_genirq.c 119 */;
	struct uio_dmem_genirq_platdata *cocci_id/* drivers/uio/uio_dmem_genirq.c 107 */;
	irqreturn_t cocci_id/* drivers/uio/uio_dmem_genirq.c 105 */;
	struct uio_info *cocci_id/* drivers/uio/uio_dmem_genirq.c 105 */;
	int cocci_id/* drivers/uio/uio_dmem_genirq.c 105 */;
}
