cocci_test_suite() {
	struct tegra_bpmp_message cocci_id/* drivers/clk/tegra/clk-bpmp.c 63 */;
	struct mrq_clk_request cocci_id/* drivers/clk/tegra/clk-bpmp.c 62 */;
	const struct tegra_bpmp_clk_message *cocci_id/* drivers/clk/tegra/clk-bpmp.c 60 */;
	void *cocci_id/* drivers/clk/tegra/clk-bpmp.c 581 */;
	struct of_phandle_args *cocci_id/* drivers/clk/tegra/clk-bpmp.c 580 */;
	const char **cocci_id/* drivers/clk/tegra/clk-bpmp.c 472 */;
	struct clk_init_data cocci_id/* drivers/clk/tegra/clk-bpmp.c 471 */;
	unsigned int cocci_id/* drivers/clk/tegra/clk-bpmp.c 453 */;
	const struct tegra_bpmp_clk_info *cocci_id/* drivers/clk/tegra/clk-bpmp.c 451 */;
	struct tegra_bpmp_clk_message {
		unsigned int cmd;
		unsigned int id;
		struct {
			const void *data;
			size_t size;
		} tx;
		struct {
			void *data;
			size_t size;
			int ret;
		} rx;
	} cocci_id/* drivers/clk/tegra/clk-bpmp.c 43 */;
	struct tegra_bpmp_clk cocci_id/* drivers/clk/tegra/clk-bpmp.c 40 */;
	struct tegra_bpmp_clk_info **cocci_id/* drivers/clk/tegra/clk-bpmp.c 399 */;
	char cocci_id/* drivers/clk/tegra/clk-bpmp.c 365 */[64];
	struct seq_buf cocci_id/* drivers/clk/tegra/clk-bpmp.c 363 */;
	const char *cocci_id/* drivers/clk/tegra/clk-bpmp.c 359 */;
	void cocci_id/* drivers/clk/tegra/clk-bpmp.c 358 */;
	struct tegra_bpmp_clk_message cocci_id/* drivers/clk/tegra/clk-bpmp.c 333 */;
	struct cmd_clk_get_all_info_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 332 */;
	struct tegra_bpmp_clk_info *cocci_id/* drivers/clk/tegra/clk-bpmp.c 330 */;
	struct tegra_bpmp *cocci_id/* drivers/clk/tegra/clk-bpmp.c 329 */;
	int cocci_id/* drivers/clk/tegra/clk-bpmp.c 329 */;
	struct cmd_clk_get_max_clk_id_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 310 */;
	struct tegra_bpmp_clk {
		struct clk_hw hw;
		struct tegra_bpmp *bpmp;
		unsigned int id;
		unsigned int num_parents;
		unsigned int *parents;
	} cocci_id/* drivers/clk/tegra/clk-bpmp.c 28 */;
	const struct clk_ops cocci_id/* drivers/clk/tegra/clk-bpmp.c 272 */;
	struct cmd_clk_set_rate_request cocci_id/* drivers/clk/tegra/clk-bpmp.c 255 */;
	struct cmd_clk_set_rate_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 254 */;
	struct cmd_clk_get_parent_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 225 */;
	struct tegra_bpmp_clk *cocci_id/* drivers/clk/tegra/clk-bpmp.c 224 */;
	u8 cocci_id/* drivers/clk/tegra/clk-bpmp.c 222 */;
	struct clk_hw *cocci_id/* drivers/clk/tegra/clk-bpmp.c 222 */;
	struct tegra_bpmp_clk_info {
		unsigned int id;
		char name[MRQ_CLK_NAME_MAXLEN];
		unsigned int parents[MRQ_CLK_MAX_PARENTS];
		unsigned int num_parents;
		unsigned long flags;
	} cocci_id/* drivers/clk/tegra/clk-bpmp.c 20 */;
	struct cmd_clk_set_parent_request cocci_id/* drivers/clk/tegra/clk-bpmp.c 198 */;
	struct cmd_clk_set_parent_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 197 */;
	struct cmd_clk_round_rate_request cocci_id/* drivers/clk/tegra/clk-bpmp.c 172 */;
	struct cmd_clk_round_rate_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 171 */;
	unsigned long *cocci_id/* drivers/clk/tegra/clk-bpmp.c 168 */;
	long cocci_id/* drivers/clk/tegra/clk-bpmp.c 167 */;
	struct cmd_clk_get_rate_request cocci_id/* drivers/clk/tegra/clk-bpmp.c 148 */;
	struct cmd_clk_get_rate_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 147 */;
	unsigned long cocci_id/* drivers/clk/tegra/clk-bpmp.c 143 */;
	struct cmd_clk_is_enabled_response cocci_id/* drivers/clk/tegra/clk-bpmp.c 126 */;
}
