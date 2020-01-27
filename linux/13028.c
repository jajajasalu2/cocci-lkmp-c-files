cocci_test_suite() {
	struct tegra_bpmp_message cocci_id/* drivers/soc/tegra/powergate-bpmp.c 92 */;
	struct mrq_pg_request cocci_id/* drivers/soc/tegra/powergate-bpmp.c 91 */;
	struct mrq_pg_response cocci_id/* drivers/soc/tegra/powergate-bpmp.c 90 */;
	struct device *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 332 */;
	struct device_node *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 330 */;
	u32 cocci_id/* drivers/soc/tegra/powergate-bpmp.c 33 */;
	struct of_phandle_args *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 309 */;
	void *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 309 */;
	void cocci_id/* drivers/soc/tegra/powergate-bpmp.c 294 */;
	struct tegra_powergate cocci_id/* drivers/soc/tegra/powergate-bpmp.c 29 */;
	struct tegra_powergate *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 259 */;
	struct generic_pm_domain **cocci_id/* drivers/soc/tegra/powergate-bpmp.c 258 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 257 */;
	unsigned int cocci_id/* drivers/soc/tegra/powergate-bpmp.c 255 */;
	struct tegra_powergate_info *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 254 */;
	struct tegra_bpmp *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 253 */;
	int cocci_id/* drivers/soc/tegra/powergate-bpmp.c 253 */;
	struct tegra_powergate_info **cocci_id/* drivers/soc/tegra/powergate-bpmp.c 214 */;
	struct tegra_powergate {
		struct generic_pm_domain genpd;
		struct tegra_bpmp *bpmp;
		unsigned int id;
	} cocci_id/* drivers/soc/tegra/powergate-bpmp.c 20 */;
	const struct tegra_powergate_info *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 170 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 159 */;
	struct tegra_powergate_info {
		unsigned int id;
		char *name;
	} cocci_id/* drivers/soc/tegra/powergate-bpmp.c 15 */;
	bool cocci_id/* drivers/soc/tegra/powergate-bpmp.c 144 */;
	char *cocci_id/* drivers/soc/tegra/powergate-bpmp.c 116 */;
}
