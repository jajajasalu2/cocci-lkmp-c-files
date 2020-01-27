cocci_test_suite() {
	struct priv1_cache {
		u64 masks[3];
		u64 sr1;
		u64 tclass_id;
	} cocci_id/* arch/powerpc/platforms/ps3/spu.c 88 */;
	enum spe_ex_state{SPE_EX_STATE_UNEXECUTABLE=0, SPE_EX_STATE_EXECUTABLE=2, SPE_EX_STATE_EXECUTED=3,} cocci_id/* arch/powerpc/platforms/ps3/spu.c 75 */;
	const struct spu_priv1_ops cocci_id/* arch/powerpc/platforms/ps3/spu.c 592 */;
	struct spu_priv1 cocci_id/* arch/powerpc/platforms/ps3/spu.c 544 */;
	const u64 cocci_id/* arch/powerpc/platforms/ps3/spu.c 536 */;
	const struct spu_management_ops cocci_id/* arch/powerpc/platforms/ps3/spu.c 451 */;
	struct spe_shadow {
		u8 padding_0140[0x0140];
		u64 int_status_class0_RW;
		u64 int_status_class1_RW;
		u64 int_status_class2_RW;
		u8 padding_0158[0x0610 - 0x0158];
		u64 mfc_dsisr_RW;
		u8 padding_0618[0x0620 - 0x0618];
		u64 mfc_dar_RW;
		u8 padding_0628[0x0800 - 0x0628];
		u64 mfc_dsipr_R;
		u8 padding_0808[0x0810 - 0x0808];
		u64 mfc_lscrr_R;
		u8 padding_0818[0x0c00 - 0x0818];
		u64 mfc_cer_R;
		u8 padding_0c08[0x0f00 - 0x0c08];
		u64 spe_execution_status;
		u8 padding_0f08[0x1000 - 0x0f08];
	} cocci_id/* arch/powerpc/platforms/ps3/spu.c 45 */;
	struct spu_context *cocci_id/* arch/powerpc/platforms/ps3/spu.c 446 */;
	enum ps3_spu_resource_type cocci_id/* arch/powerpc/platforms/ps3/spu.c 398 */;
	int (*cocci_id/* arch/powerpc/platforms/ps3/spu.c 381 */)(void *data);
	enum spe_type{SPE_TYPE_LOGICAL=0,} cocci_id/* arch/powerpc/platforms/ps3/spu.c 35 */;
	struct spu_pdata cocci_id/* arch/powerpc/platforms/ps3/spu.c 339 */;
	void *cocci_id/* arch/powerpc/platforms/ps3/spu.c 333 */;
	struct spu_priv2 cocci_id/* arch/powerpc/platforms/ps3/spu.c 219 */;
	struct spu_problem cocci_id/* arch/powerpc/platforms/ps3/spu.c 211 */;
	struct spe_shadow cocci_id/* arch/powerpc/platforms/ps3/spu.c 196 */;
	struct table {
		char *name;
		unsigned long addr;
		unsigned long size;
	} cocci_id/* arch/powerpc/platforms/ps3/spu.c 192 */;
	u8 __iomem *cocci_id/* arch/powerpc/platforms/ps3/spu.c 179 */;
	u64 cocci_id/* arch/powerpc/platforms/ps3/spu.c 153 */;
	struct spu *cocci_id/* arch/powerpc/platforms/ps3/spu.c 150 */;
	int __init cocci_id/* arch/powerpc/platforms/ps3/spu.c 150 */;
	const char *cocci_id/* arch/powerpc/platforms/ps3/spu.c 125 */;
	int cocci_id/* arch/powerpc/platforms/ps3/spu.c 125 */;
	unsigned long cocci_id/* arch/powerpc/platforms/ps3/spu.c 123 */;
	unsigned int cocci_id/* arch/powerpc/platforms/ps3/spu.c 123 */;
	void cocci_id/* arch/powerpc/platforms/ps3/spu.c 123 */;
	struct spu_pdata *cocci_id/* arch/powerpc/platforms/ps3/spu.c 116 */;
	struct spu_pdata {
		u64 spe_id;
		u64 resource_id;
		u64 priv2_addr;
		u64 shadow_addr;
		struct spe_shadow __iomem *shadow;
		struct priv1_cache cache;
	} cocci_id/* arch/powerpc/platforms/ps3/spu.c 107 */;
}
