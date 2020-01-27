cocci_test_suite() {
	phys_addr_t cocci_id/* drivers/remoteproc/stm32_rproc.c 81 */;
	u64 *cocci_id/* drivers/remoteproc/stm32_rproc.c 81 */;
	struct platform_driver cocci_id/* drivers/remoteproc/stm32_rproc.c 713 */;
	int __maybe_unused cocci_id/* drivers/remoteproc/stm32_rproc.c 699 */;
	struct stm32_rproc {
		struct reset_control *rst;
		struct stm32_syscon hold_boot;
		struct stm32_syscon pdds;
		int wdg_irq;
		u32 nb_rmems;
		struct stm32_rproc_mem *rmems;
		struct stm32_mbox mb[MBOX_NB_MBX];
		struct workqueue_struct *workqueue;
		bool secured_soc;
	} cocci_id/* drivers/remoteproc/stm32_rproc.c 69 */;
	struct stm32_mbox {
		const unsigned char name[10];
		struct mbox_chan *chan;
		struct mbox_client client;
		struct work_struct vq_work;
		int vq_id;
	} cocci_id/* drivers/remoteproc/stm32_rproc.c 61 */;
	struct stm32_rproc_mem_ranges {
		u32 dev_addr;
		u32 bus_addr;
		u32 size;
	} cocci_id/* drivers/remoteproc/stm32_rproc.c 55 */;
	struct stm32_syscon cocci_id/* drivers/remoteproc/stm32_rproc.c 546 */;
	struct platform_device *cocci_id/* drivers/remoteproc/stm32_rproc.c 540 */;
	struct stm32_syscon *cocci_id/* drivers/remoteproc/stm32_rproc.c 519 */;
	const char *cocci_id/* drivers/remoteproc/stm32_rproc.c 518 */;
	struct device_node *cocci_id/* drivers/remoteproc/stm32_rproc.c 518 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/stm32_rproc.c 512 */[];
	struct rproc_ops cocci_id/* drivers/remoteproc/stm32_rproc.c 501 */;
	void *cocci_id/* drivers/remoteproc/stm32_rproc.c 493 */;
	long cocci_id/* drivers/remoteproc/stm32_rproc.c 493 */;
	struct stm32_rproc_mem {
		char name[20];
		void __iomem *cpu_addr;
		phys_addr_t bus_addr;
		u32 dev_addr;
		size_t size;
	} cocci_id/* drivers/remoteproc/stm32_rproc.c 47 */;
	struct stm32_syscon {
		struct regmap *map;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/remoteproc/stm32_rproc.c 41 */;
	bool cocci_id/* drivers/remoteproc/stm32_rproc.c 397 */;
	struct rproc_dump_segment *cocci_id/* drivers/remoteproc/stm32_rproc.c 396 */;
	struct rproc_debug_trace *cocci_id/* drivers/remoteproc/stm32_rproc.c 395 */;
	struct rproc *cocci_id/* drivers/remoteproc/stm32_rproc.c 393 */;
	void cocci_id/* drivers/remoteproc/stm32_rproc.c 393 */;
	struct arm_smccc_res cocci_id/* drivers/remoteproc/stm32_rproc.c 373 */;
	const struct stm32_mbox cocci_id/* drivers/remoteproc/stm32_rproc.c 301 */[MBOX_NB_MBX];
	unsigned int cocci_id/* drivers/remoteproc/stm32_rproc.c 292 */;
	struct stm32_rproc *cocci_id/* drivers/remoteproc/stm32_rproc.c 291 */;
	struct stm32_mbox cocci_id/* drivers/remoteproc/stm32_rproc.c 283 */;
	struct stm32_mbox *cocci_id/* drivers/remoteproc/stm32_rproc.c 283 */;
	struct mbox_client *cocci_id/* drivers/remoteproc/stm32_rproc.c 280 */;
	struct work_struct *cocci_id/* drivers/remoteproc/stm32_rproc.c 271 */;
	irqreturn_t cocci_id/* drivers/remoteproc/stm32_rproc.c 262 */;
	dma_addr_t cocci_id/* drivers/remoteproc/stm32_rproc.c 235 */;
	u64 cocci_id/* drivers/remoteproc/stm32_rproc.c 213 */;
	struct reserved_mem *cocci_id/* drivers/remoteproc/stm32_rproc.c 212 */;
	struct of_phandle_iterator cocci_id/* drivers/remoteproc/stm32_rproc.c 210 */;
	const struct firmware *cocci_id/* drivers/remoteproc/stm32_rproc.c 198 */;
	int cocci_id/* drivers/remoteproc/stm32_rproc.c 197 */;
	const unsigned char *cocci_id/* drivers/remoteproc/stm32_rproc.c 183 */;
	u32 *cocci_id/* drivers/remoteproc/stm32_rproc.c 159 */;
	u32 cocci_id/* drivers/remoteproc/stm32_rproc.c 156 */;
	struct stm32_rproc_mem_ranges cocci_id/* drivers/remoteproc/stm32_rproc.c 156 */;
	struct stm32_rproc_mem_ranges *cocci_id/* drivers/remoteproc/stm32_rproc.c 136 */;
	struct stm32_rproc_mem *cocci_id/* drivers/remoteproc/stm32_rproc.c 135 */;
	struct device *cocci_id/* drivers/remoteproc/stm32_rproc.c 104 */;
	struct rproc_mem_entry *cocci_id/* drivers/remoteproc/stm32_rproc.c 102 */;
}
