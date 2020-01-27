cocci_test_suite() {
	struct mm_struct *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 97 */;
	struct syscore_ops cocci_id/* arch/powerpc/platforms/cell/spu_base.c 749 */;
	struct list_head *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 714 */;
	struct crash_spu_info cocci_id/* arch/powerpc/platforms/cell/spu_base.c 681 */[CRASH_NUM_SPUS];
	struct crash_spu_info {
		struct spu *spu;
		u32 saved_spu_runcntl_RW;
		u32 saved_spu_status_R;
		u32 saved_spu_npc_RW;
		u64 saved_mfc_sr1_RW;
		u64 saved_mfc_dar;
		u64 saved_mfc_dsisr;
	} cocci_id/* arch/powerpc/platforms/cell/spu_base.c 670 */;
	struct spu cocci_id/* arch/powerpc/platforms/cell/spu_base.c 647 */;
	char *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 645 */;
	struct device *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 644 */;
	ssize_t cocci_id/* arch/powerpc/platforms/cell/spu_base.c 644 */;
	enum spu_utilization_state cocci_id/* arch/powerpc/platforms/cell/spu_base.c 628 */;
	unsigned long long cocci_id/* arch/powerpc/platforms/cell/spu_base.c 627 */;
	const char *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 623 */[];
	int __init cocci_id/* arch/powerpc/platforms/cell/spu_base.c 561 */;
	struct attribute_group *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 493 */;
	struct device_attribute *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 480 */;
	struct bus_type cocci_id/* arch/powerpc/platforms/cell/spu_base.c 475 */;
	struct spu_priv2 __iomem *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 453 */;
	const struct {
		unsigned channel;
		unsigned count;
	} cocci_id/* arch/powerpc/platforms/cell/spu_base.c 442 */[];
	struct cbe_spu_info cocci_id/* arch/powerpc/platforms/cell/spu_base.c 36 */[MAX_NUMNODES];
	const int cocci_id/* arch/powerpc/platforms/cell/spu_base.c 350 */;
	const struct spu_priv1_ops *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 33 */;
	const struct spu_management_ops *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 30 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/cell/spu_base.c 279 */;
	void *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 256 */[];
	struct copro_slb cocci_id/* arch/powerpc/platforms/cell/spu_base.c 253 */[4];
	struct spu_lscsa *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 250 */;
	unsigned long cocci_id/* arch/powerpc/platforms/cell/spu_base.c 231 */;
	void *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 229 */;
	struct copro_slb *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 228 */;
	int cocci_id/* arch/powerpc/platforms/cell/spu_base.c 228 */;
	u64 cocci_id/* arch/powerpc/platforms/cell/spu_base.c 212 */;
	void cocci_id/* arch/powerpc/platforms/cell/spu_base.c 209 */;
	struct spu *cocci_id/* arch/powerpc/platforms/cell/spu_base.c 173 */;
	int cocci_id/* arch/powerpc/platforms/cell/spu_base.c 171 */(unsigned long ea,
								     unsigned long access,
								     unsigned long trap,
								     unsigned long dsisr);
	struct copro_slb cocci_id/* arch/powerpc/platforms/cell/spu_base.c 153 */;
}
