cocci_test_suite() {
	struct ccf_private {
		const struct ccf_info *info;
		struct device *dev;
		void __iomem *regs;
		struct ccf_err_regs __iomem *err_regs;
		bool t1040;
	} cocci_id/* drivers/memory/fsl-corenet-cf.c 92 */;
	struct ccf_err_regs {
		u32 errdet;
		u32 errdis;
		u32 errinten;
		u32 cecar;
		u32 cecaddrh;
		u32 cecaddrl;
		u32 cecar2;
	} cocci_id/* drivers/memory/fsl-corenet-cf.c 62 */;
	const struct of_device_id cocci_id/* drivers/memory/fsl-corenet-cf.c 49 */[];
	const struct ccf_info cocci_id/* drivers/memory/fsl-corenet-cf.c 29 */;
	struct platform_driver cocci_id/* drivers/memory/fsl-corenet-cf.c 266 */;
	struct ccf_info {
		enum ccf_version version;
		int err_reg_offs;
		bool has_brr;
	} cocci_id/* drivers/memory/fsl-corenet-cf.c 23 */;
	enum ccf_version{CCF1, CCF2,} cocci_id/* drivers/memory/fsl-corenet-cf.c 18 */;
	const struct of_device_id *cocci_id/* drivers/memory/fsl-corenet-cf.c 176 */;
	struct resource *cocci_id/* drivers/memory/fsl-corenet-cf.c 175 */;
	struct platform_device *cocci_id/* drivers/memory/fsl-corenet-cf.c 172 */;
	bool cocci_id/* drivers/memory/fsl-corenet-cf.c 108 */;
	u64 cocci_id/* drivers/memory/fsl-corenet-cf.c 106 */;
	u32 cocci_id/* drivers/memory/fsl-corenet-cf.c 105 */;
	struct ccf_private *cocci_id/* drivers/memory/fsl-corenet-cf.c 102 */;
	irqreturn_t cocci_id/* drivers/memory/fsl-corenet-cf.c 100 */;
	void *cocci_id/* drivers/memory/fsl-corenet-cf.c 100 */;
	int cocci_id/* drivers/memory/fsl-corenet-cf.c 100 */;
}
