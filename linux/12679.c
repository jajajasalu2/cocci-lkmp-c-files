cocci_test_suite() {
	struct kobj_uevent_env *cocci_id/* drivers/bus/mips_cdmm.c 68 */;
	int __init cocci_id/* drivers/bus/mips_cdmm.c 667 */;
	long cocci_id/* drivers/bus/mips_cdmm.c 609 */;
	struct device_driver *cocci_id/* drivers/bus/mips_cdmm.c 60 */;
	struct device *cocci_id/* drivers/bus/mips_cdmm.c 60 */;
	unsigned int *cocci_id/* drivers/bus/mips_cdmm.c 583 */;
	int cocci_id/* drivers/bus/mips_cdmm.c 504 */;
	struct mips_cdmm_device *cocci_id/* drivers/bus/mips_cdmm.c 502 */;
	unsigned int cocci_id/* drivers/bus/mips_cdmm.c 501 */;
	u32 cocci_id/* drivers/bus/mips_cdmm.c 500 */;
	void __iomem *cocci_id/* drivers/bus/mips_cdmm.c 499 */;
	struct mips_cdmm_bus *cocci_id/* drivers/bus/mips_cdmm.c 497 */;
	void cocci_id/* drivers/bus/mips_cdmm.c 497 */;
	const struct mips_cdmm_device_id *cocci_id/* drivers/bus/mips_cdmm.c 45 */;
	struct mips_cdmm_driver cocci_id/* drivers/bus/mips_cdmm.c 38 */;
	phys_addr_t __weak cocci_id/* drivers/bus/mips_cdmm.c 341 */;
	unsigned long cocci_id/* drivers/bus/mips_cdmm.c 325 */;
	phys_addr_t cocci_id/* drivers/bus/mips_cdmm.c 323 */;
	atomic_t cocci_id/* drivers/bus/mips_cdmm.c 273 */;
	struct mips_cdmm_bus cocci_id/* drivers/bus/mips_cdmm.c 271 */;
	struct mips_cdmm_bus {
		phys_addr_t phys;
		void __iomem *regs;
		unsigned int drbs;
		unsigned int drbs_reserved;
		bool discovered;
		bool offline;
	} cocci_id/* drivers/bus/mips_cdmm.c 262 */;
	struct mips_cdmm_driver *cocci_id/* drivers/bus/mips_cdmm.c 221 */;
	int (*cocci_id/* drivers/bus/mips_cdmm.c 173 */)(struct mips_cdmm_device *);
	struct mips_cdmm_work_dev *cocci_id/* drivers/bus/mips_cdmm.c 172 */;
	void *cocci_id/* drivers/bus/mips_cdmm.c 170 */;
	void (*cocci_id/* drivers/bus/mips_cdmm.c 157 */)(struct mips_cdmm_device *);
	struct mips_cdmm_work_dev {
		void *fn;
		struct mips_cdmm_device *dev;
	} cocci_id/* drivers/bus/mips_cdmm.c 142 */;
	struct bus_type cocci_id/* drivers/bus/mips_cdmm.c 119 */;
	struct attribute *cocci_id/* drivers/bus/mips_cdmm.c 109 */[];
	unsigned long long cocci_id/* drivers/bus/mips_cdmm.c 105 */;
	__typeof__(struct mips_cdmm_bus *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
