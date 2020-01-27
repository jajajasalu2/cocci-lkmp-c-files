cocci_test_suite() {
	int cocci_id/* drivers/memory/mtk-smi.c 89 */;
	struct mtk_smi_larb {
		struct mtk_smi smi;
		void __iomem *base;
		struct device *smi_common_dev;
		const struct mtk_smi_larb_gen *larb_gen;
		int larbid;
		u32 *mmu;
	} cocci_id/* drivers/memory/mtk-smi.c 80 */;
	struct mtk_smi {
		struct device *dev;
		struct clk *clk_apb,*clk_smi;
		struct clk *clk_gals0,*clk_gals1;
		struct clk *clk_async;
		union {
			void __iomem *smi_ao_base;
			void __iomem *base;
		};
		const struct mtk_smi_common_plat *plat;
	} cocci_id/* drivers/memory/mtk-smi.c 68 */;
	struct mtk_smi_larb_gen {
		int port_in_larb[MTK_LARB_NR_MAX + 1];
		void (*config_port)(struct device *);
		unsigned int larb_direct_to_common_mask;
		bool has_gals;
	} cocci_id/* drivers/memory/mtk-smi.c 61 */;
	struct mtk_smi_common_plat {
		enum mtk_smi_gen gen;
		bool has_gals;
		u32 bus_sel;
	} cocci_id/* drivers/memory/mtk-smi.c 55 */;
	int __init cocci_id/* drivers/memory/mtk-smi.c 526 */;
	struct platform_driver cocci_id/* drivers/memory/mtk-smi.c 516 */;
	enum mtk_smi_gen{MTK_SMI_GEN1, MTK_SMI_GEN2,} cocci_id/* drivers/memory/mtk-smi.c 50 */;
	u32 cocci_id/* drivers/memory/mtk-smi.c 488 */;
	int __maybe_unused cocci_id/* drivers/memory/mtk-smi.c 485 */;
	struct resource *cocci_id/* drivers/memory/mtk-smi.c 422 */;
	struct mtk_smi *cocci_id/* drivers/memory/mtk-smi.c 421 */;
	struct device *cocci_id/* drivers/memory/mtk-smi.c 420 */;
	struct platform_device *cocci_id/* drivers/memory/mtk-smi.c 418 */;
	const struct of_device_id cocci_id/* drivers/memory/mtk-smi.c 398 */[];
	const struct mtk_smi_common_plat cocci_id/* drivers/memory/mtk-smi.c 383 */;
	struct device_node *cocci_id/* drivers/memory/mtk-smi.c 274 */;
	const struct mtk_smi_larb_gen cocci_id/* drivers/memory/mtk-smi.c 229 */;
	const struct component_ops cocci_id/* drivers/memory/mtk-smi.c 219 */;
	const struct mtk_smi_larb_gen *cocci_id/* drivers/memory/mtk-smi.c 185 */;
	unsigned long *cocci_id/* drivers/memory/mtk-smi.c 168 */;
	unsigned int cocci_id/* drivers/memory/mtk-smi.c 147 */;
	struct mtk_smi_larb_iommu *cocci_id/* drivers/memory/mtk-smi.c 146 */;
	struct mtk_smi_larb *cocci_id/* drivers/memory/mtk-smi.c 145 */;
	void *cocci_id/* drivers/memory/mtk-smi.c 143 */;
	const struct mtk_smi *cocci_id/* drivers/memory/mtk-smi.c 120 */;
	void cocci_id/* drivers/memory/mtk-smi.c 120 */;
}
