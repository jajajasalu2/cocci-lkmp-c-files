cocci_test_suite() {
	int cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 85 */;
	struct meson_gx_pwrc_vpu cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 44 */;
	struct meson_gx_pwrc_vpu *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 42 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 42 */;
	struct platform_driver cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 368 */;
	const struct of_device_id cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 359 */[];
	void cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 349 */;
	struct meson_gx_pwrc_vpu {
		struct generic_pm_domain genpd;
		struct regmap *regmap_ao;
		struct regmap *regmap_hhi;
		struct reset_control *rstc;
		struct clk *vpu_clk;
		struct clk *vapb_clk;
	} cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 32 */;
	struct clk *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 276 */;
	struct reset_control *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 275 */;
	struct regmap *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 273 */;
	const struct meson_gx_pwrc_vpu *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 272 */;
	struct platform_device *cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 270 */;
	u32 cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 247 */;
	bool cocci_id/* drivers/soc/amlogic/meson-gx-pwrc-vpu.c 245 */;
}
