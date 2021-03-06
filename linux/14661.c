cocci_test_suite() {
	void cocci_id/* drivers/clk/keystone/sci-clk.c 95 */;
	struct platform_driver cocci_id/* drivers/clk/keystone/sci-clk.c 692 */;
	const struct ti_sci_handle *cocci_id/* drivers/clk/keystone/sci-clk.c 639 */;
	struct device_node *cocci_id/* drivers/clk/keystone/sci-clk.c 637 */;
	struct device *cocci_id/* drivers/clk/keystone/sci-clk.c 636 */;
	struct platform_device *cocci_id/* drivers/clk/keystone/sci-clk.c 634 */;
	struct sci_clk {
		struct clk_hw hw;
		u16 dev_id;
		u32 clk_id;
		u32 num_parents;
		struct sci_clk_provider *provider;
		u8 flags;
		struct list_head node;
	} cocci_id/* drivers/clk/keystone/sci-clk.c 58 */;
	const char *const *cocci_id/* drivers/clk/keystone/sci-clk.c 515 */;
	const char *const cocci_id/* drivers/clk/keystone/sci-clk.c 512 */[];
	struct list_head cocci_id/* drivers/clk/keystone/sci-clk.c 507 */;
	struct of_phandle_args cocci_id/* drivers/clk/keystone/sci-clk.c 506 */;
	struct sci_clk cocci_id/* drivers/clk/keystone/sci-clk.c 494 */;
	struct sci_clk *cocci_id/* drivers/clk/keystone/sci-clk.c 494 */;
	struct list_head *cocci_id/* drivers/clk/keystone/sci-clk.c 491 */;
	void *cocci_id/* drivers/clk/keystone/sci-clk.c 491 */;
	const struct of_device_id cocci_id/* drivers/clk/keystone/sci-clk.c 405 */[];
	struct sci_clk_provider {
		const struct ti_sci_handle *sci;
		const struct ti_sci_clk_ops *ops;
		struct device *dev;
		struct sci_clk **clocks;
		int num_clocks;
	} cocci_id/* drivers/clk/keystone/sci-clk.c 40 */;
	struct of_phandle_args *cocci_id/* drivers/clk/keystone/sci-clk.c 370 */;
	struct sci_clk **cocci_id/* drivers/clk/keystone/sci-clk.c 350 */;
	const struct sci_clk *cocci_id/* drivers/clk/keystone/sci-clk.c 349 */;
	const void *cocci_id/* drivers/clk/keystone/sci-clk.c 347 */;
	int cocci_id/* drivers/clk/keystone/sci-clk.c 347 */;
	char **cocci_id/* drivers/clk/keystone/sci-clk.c 284 */;
	char *cocci_id/* drivers/clk/keystone/sci-clk.c 283 */;
	struct clk_init_data cocci_id/* drivers/clk/keystone/sci-clk.c 282 */;
	struct sci_clk_provider *cocci_id/* drivers/clk/keystone/sci-clk.c 279 */;
	const struct clk_ops cocci_id/* drivers/clk/keystone/sci-clk.c 257 */;
	u32 cocci_id/* drivers/clk/keystone/sci-clk.c 224 */;
	u8 cocci_id/* drivers/clk/keystone/sci-clk.c 221 */;
	u64 cocci_id/* drivers/clk/keystone/sci-clk.c 176 */;
	struct clk_rate_request *cocci_id/* drivers/clk/keystone/sci-clk.c 172 */;
	struct clk_hw *cocci_id/* drivers/clk/keystone/sci-clk.c 171 */;
	unsigned long cocci_id/* drivers/clk/keystone/sci-clk.c 142 */;
	bool cocci_id/* drivers/clk/keystone/sci-clk.c 118 */;
}
