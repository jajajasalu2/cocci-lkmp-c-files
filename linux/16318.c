cocci_test_suite() {
	void (*cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 84 */)(struct imgu_mmu *mmu);
	struct imgu_mmu cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 68 */;
	struct imgu_mmu_info *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 501 */;
	struct imgu_mmu {
		struct device *dev;
		void __iomem *base;
		spinlock_t lock;
		void *dummy_page;
		u32 dummy_page_pteval;
		u32 *dummy_l2pt;
		u32 dummy_l2pt_pteval;
		u32 **l2pts;
		u32 *l1pt;
		struct imgu_mmu_info geometry;
	} cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 48 */;
	void *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 445 */;
	struct device *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 425 */;
	void __iomem *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 425 */;
	size_t cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 336 */;
	struct scatterlist *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 298 */;
	unsigned int cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 298 */;
	u32 *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 213 */;
	u32 cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 211 */;
	phys_addr_t cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 209 */;
	struct imgu_mmu *cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 208 */;
	unsigned long cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 208 */;
	int cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 208 */;
	void cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 154 */;
	unsigned long int cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 133 */;
	bool cocci_id/* drivers/staging/media/ipu3/ipu3-mmu.c 101 */;
}
