cocci_test_suite() {
	int cocci_id/* drivers/clk/mvebu/clk-corediv.c 89 */;
	const struct clk_corediv_desc cocci_id/* drivers/clk/mvebu/clk-corediv.c 73 */[];
	struct clk_onecell_data cocci_id/* drivers/clk/mvebu/clk-corediv.c 62 */;
	struct clk_corediv {
		struct clk_hw hw;
		void __iomem *reg;
		const struct clk_corediv_desc *desc;
		const struct clk_corediv_soc_desc *soc_desc;
		spinlock_t lock;
	} cocci_id/* drivers/clk/mvebu/clk-corediv.c 54 */;
	struct clk_corediv_soc_desc {
		const struct clk_corediv_desc *descs;
		unsigned int ndescs;
		const struct clk_ops ops;
		u32 ratio_reload;
		u32 enable_bit_offset;
		u32 ratio_offset;
	} cocci_id/* drivers/clk/mvebu/clk-corediv.c 40 */;
	struct device_node *cocci_id/* drivers/clk/mvebu/clk-corediv.c 311 */;
	void __init cocci_id/* drivers/clk/mvebu/clk-corediv.c 311 */;
	struct clk_corediv_desc {
		unsigned int mask;
		unsigned int offset;
		unsigned int fieldbit;
	} cocci_id/* drivers/clk/mvebu/clk-corediv.c 28 */;
	struct clk_corediv cocci_id/* drivers/clk/mvebu/clk-corediv.c 276 */;
	struct clk *cocci_id/* drivers/clk/mvebu/clk-corediv.c 271 */;
	const char *cocci_id/* drivers/clk/mvebu/clk-corediv.c 258 */;
	void __iomem *cocci_id/* drivers/clk/mvebu/clk-corediv.c 257 */;
	struct clk **cocci_id/* drivers/clk/mvebu/clk-corediv.c 256 */;
	struct clk_init_data cocci_id/* drivers/clk/mvebu/clk-corediv.c 254 */;
	void __init cocci_id/* drivers/clk/mvebu/clk-corediv.c 250 */;
	const struct clk_corediv_soc_desc cocci_id/* drivers/clk/mvebu/clk-corediv.c 194 */;
	unsigned long *cocci_id/* drivers/clk/mvebu/clk-corediv.c 139 */;
	long cocci_id/* drivers/clk/mvebu/clk-corediv.c 138 */;
	u32 cocci_id/* drivers/clk/mvebu/clk-corediv.c 114 */;
	unsigned long cocci_id/* drivers/clk/mvebu/clk-corediv.c 113 */;
	const struct clk_corediv_desc *cocci_id/* drivers/clk/mvebu/clk-corediv.c 112 */;
	const struct clk_corediv_soc_desc *cocci_id/* drivers/clk/mvebu/clk-corediv.c 111 */;
	struct clk_corediv *cocci_id/* drivers/clk/mvebu/clk-corediv.c 110 */;
	struct clk_hw *cocci_id/* drivers/clk/mvebu/clk-corediv.c 108 */;
	void cocci_id/* drivers/clk/mvebu/clk-corediv.c 108 */;
}
