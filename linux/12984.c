cocci_test_suite() {
	struct meson_ee_pwrc_top_domain cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 69 */;
	struct meson_ee_pwrc_domain_data {
		unsigned int count;
		struct meson_ee_pwrc_domain_desc *domains;
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 62 */;
	struct meson_ee_pwrc_domain_desc {
		char *name;
		unsigned int reset_names_count;
		unsigned int clk_names_count;
		struct meson_ee_pwrc_top_domain *top_pd;
		unsigned int mem_pd_count;
		struct meson_ee_pwrc_mem_domain *mem_pd;
		bool (*get_power)(struct meson_ee_pwrc_domain *pwrc_domain);
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 52 */;
	struct platform_driver cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 484 */;
	const struct of_device_id cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 472 */[];
	struct meson_ee_pwrc_domain_data cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 462 */;
	struct meson_ee_pwrc_top_domain {
		unsigned int sleep_reg;
		unsigned int sleep_mask;
		unsigned int iso_reg;
		unsigned int iso_mask;
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 45 */;
	void cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 449 */;
	struct meson_ee_pwrc_mem_domain {
		unsigned int reg;
		unsigned int mask;
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 40 */;
	struct regmap *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 387 */;
	const struct meson_ee_pwrc_domain_data *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 386 */;
	struct meson_ee_pwrc cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 37 */;
	struct meson_ee_pwrc_domain *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 324 */;
	struct meson_ee_pwrc *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 323 */;
	struct platform_device *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 322 */;
	int cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 322 */;
	struct meson_ee_pwrc_domain cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 253 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 250 */;
	u32 cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 242 */;
	bool cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 240 */;
	struct meson_ee_pwrc {
		struct regmap *regmap_ao;
		struct regmap *regmap_hhi;
		struct meson_ee_pwrc_domain *domains;
		struct genpd_onecell_data xlate;
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 233 */;
	struct meson_ee_pwrc_domain {
		struct generic_pm_domain base;
		bool enabled;
		struct meson_ee_pwrc *pwrc;
		struct meson_ee_pwrc_domain_desc desc;
		struct clk_bulk_data *clks;
		int num_clks;
		struct reset_control *rstc;
		int num_rstc;
	} cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 222 */;
	struct meson_ee_pwrc_domain_desc cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 201 */[];
	bool cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 199 */(struct meson_ee_pwrc_domain *pwrc_domain);
	struct meson_ee_pwrc_mem_domain cocci_id/* drivers/soc/amlogic/meson-ee-pwrc.c 127 */[];
}
