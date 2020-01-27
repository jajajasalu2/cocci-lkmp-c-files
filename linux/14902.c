cocci_test_suite() {
	struct xgene_dev_parameters cocci_id/* drivers/clk/clk-xgene.c 672 */;
	struct resource cocci_id/* drivers/clk/clk-xgene.c 670 */;
	struct clk *cocci_id/* drivers/clk/clk-xgene.c 669 */;
	const char *cocci_id/* drivers/clk/clk-xgene.c 668 */;
	struct device_node *cocci_id/* drivers/clk/clk-xgene.c 666 */;
	void __init cocci_id/* drivers/clk/clk-xgene.c 666 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-xgene.c 631 */;
	spinlock_t *cocci_id/* drivers/clk/clk-xgene.c 627 */;
	struct xgene_dev_parameters *cocci_id/* drivers/clk/clk-xgene.c 627 */;
	struct device *cocci_id/* drivers/clk/clk-xgene.c 625 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-xgene.c 616 */;
	struct xgene_clk_pll *cocci_id/* drivers/clk/clk-xgene.c 60 */;
	struct xgene_clk_pll cocci_id/* drivers/clk/clk-xgene.c 56 */;
	u32 cocci_id/* drivers/clk/clk-xgene.c 488 */;
	unsigned long cocci_id/* drivers/clk/clk-xgene.c 487 */;
	struct xgene_clk *cocci_id/* drivers/clk/clk-xgene.c 486 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-xgene.c 484 */;
	void cocci_id/* drivers/clk/clk-xgene.c 484 */;
	struct xgene_clk_pll {
		struct clk_hw hw;
		void __iomem *reg;
		spinlock_t *lock;
		u32 pll_offset;
		enum xgene_pll_type type;
		int version;
	} cocci_id/* drivers/clk/clk-xgene.c 47 */;
	int cocci_id/* drivers/clk/clk-xgene.c 444 */;
	struct xgene_clk cocci_id/* drivers/clk/clk-xgene.c 442 */;
	struct xgene_clk {
		struct clk_hw hw;
		spinlock_t *lock;
		struct xgene_dev_parameters param;
	} cocci_id/* drivers/clk/clk-xgene.c 436 */;
	struct xgene_dev_parameters {
		void __iomem *csr_reg;
		u32 reg_clk_offset;
		u32 reg_clk_mask;
		u32 reg_csr_offset;
		u32 reg_csr_mask;
		void __iomem *divider_reg;
		u32 reg_divider_offset;
		u32 reg_divider_shift;
		u32 reg_divider_width;
	} cocci_id/* drivers/clk/clk-xgene.c 424 */;
	enum xgene_pll_type{PLL_TYPE_PCP=0, PLL_TYPE_SOC=1,} cocci_id/* drivers/clk/clk-xgene.c 42 */;
	u8 cocci_id/* drivers/clk/clk-xgene.c 343 */;
	void __iomem *cocci_id/* drivers/clk/clk-xgene.c 31 */;
	unsigned long *cocci_id/* drivers/clk/clk-xgene.c 275 */;
	long cocci_id/* drivers/clk/clk-xgene.c 274 */;
	u64 cocci_id/* drivers/clk/clk-xgene.c 242 */;
	struct xgene_clk_pmd *cocci_id/* drivers/clk/clk-xgene.c 240 */;
	struct xgene_clk_pmd cocci_id/* drivers/clk/clk-xgene.c 231 */;
	struct xgene_clk_pmd {
		struct clk_hw hw;
		void __iomem *reg;
		u8 shift;
		u32 mask;
		u64 denom;
		u32 flags;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/clk-xgene.c 221 */;
	enum xgene_pll_type cocci_id/* drivers/clk/clk-xgene.c 169 */;
}
