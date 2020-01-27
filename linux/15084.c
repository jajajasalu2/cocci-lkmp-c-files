cocci_test_suite() {
	int __init cocci_id/* drivers/clk/sifive/fu540-prci.c 623 */;
	struct platform_driver cocci_id/* drivers/clk/sifive/fu540-prci.c 615 */;
	const struct of_device_id cocci_id/* drivers/clk/sifive/fu540-prci.c 609 */[];
	struct resource *cocci_id/* drivers/clk/sifive/fu540-prci.c 585 */;
	struct platform_device *cocci_id/* drivers/clk/sifive/fu540-prci.c 582 */;
	struct __prci_clock *cocci_id/* drivers/clk/sifive/fu540-prci.c 522 */;
	struct clk_init_data cocci_id/* drivers/clk/sifive/fu540-prci.c 521 */;
	struct device *cocci_id/* drivers/clk/sifive/fu540-prci.c 519 */;
	int cocci_id/* drivers/clk/sifive/fu540-prci.c 519 */;
	struct __prci_clock cocci_id/* drivers/clk/sifive/fu540-prci.c 484 */[];
	struct __prci_wrpll_data cocci_id/* drivers/clk/sifive/fu540-prci.c 466 */;
	const struct clk_ops cocci_id/* drivers/clk/sifive/fu540-prci.c 458 */;
	u8 cocci_id/* drivers/clk/sifive/fu540-prci.c 449 */;
	struct clk_hw *cocci_id/* drivers/clk/sifive/fu540-prci.c 443 */;
	unsigned long cocci_id/* drivers/clk/sifive/fu540-prci.c 443 */;
	struct wrpll_cfg cocci_id/* drivers/clk/sifive/fu540-prci.c 396 */;
	unsigned long *cocci_id/* drivers/clk/sifive/fu540-prci.c 392 */;
	long cocci_id/* drivers/clk/sifive/fu540-prci.c 390 */;
	u32 cocci_id/* drivers/clk/sifive/fu540-prci.c 365 */;
	struct __prci_data *cocci_id/* drivers/clk/sifive/fu540-prci.c 363 */;
	void cocci_id/* drivers/clk/sifive/fu540-prci.c 363 */;
	struct __prci_wrpll_data *cocci_id/* drivers/clk/sifive/fu540-prci.c 304 */;
	const struct wrpll_cfg *cocci_id/* drivers/clk/sifive/fu540-prci.c 276 */;
	struct wrpll_cfg *cocci_id/* drivers/clk/sifive/fu540-prci.c 234 */;
	struct __prci_clock cocci_id/* drivers/clk/sifive/fu540-prci.c 189 */;
	struct __prci_clock {
		const char *name;
		const char *parent_name;
		const struct clk_ops *ops;
		struct clk_hw hw;
		struct __prci_wrpll_data *pwd;
		struct __prci_data *pd;
	} cocci_id/* drivers/clk/sifive/fu540-prci.c 180 */;
	struct __prci_wrpll_data {
		struct wrpll_cfg c;
		void (*enable_bypass)(struct __prci_data *pd);
		void (*disable_bypass)(struct __prci_data *pd);
		u8 cfg0_offs;
	} cocci_id/* drivers/clk/sifive/fu540-prci.c 161 */;
	struct __prci_data {
		void __iomem *va;
		struct clk_hw_onecell_data hw_clks;
	} cocci_id/* drivers/clk/sifive/fu540-prci.c 145 */;
}
