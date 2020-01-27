cocci_test_suite() {
	struct snd_pcm_substream *cocci_id/* sound/soc/meson/axg-spdifin.c 95 */;
	struct axg_spdifin {
		const struct axg_spdifin_cfg *conf;
		struct regmap *map;
		struct clk *refclk;
		struct clk *pclk;
	} cocci_id/* sound/soc/meson/axg-spdifin.c 52 */;
	struct platform_driver cocci_id/* sound/soc/meson/axg-spdifin.c 508 */;
	struct axg_spdifin_cfg {
		const unsigned int *mode_rates;
		unsigned int ref_rate;
	} cocci_id/* sound/soc/meson/axg-spdifin.c 47 */;
	void __iomem *cocci_id/* sound/soc/meson/axg-spdifin.c 456 */;
	struct platform_device *cocci_id/* sound/soc/meson/axg-spdifin.c 451 */;
	unsigned int cocci_id/* sound/soc/meson/axg-spdifin.c 439 */;
	struct device *cocci_id/* sound/soc/meson/axg-spdifin.c 420 */;
	struct snd_soc_dai_driver *cocci_id/* sound/soc/meson/axg-spdifin.c 419 */;
	const struct of_device_id cocci_id/* sound/soc/meson/axg-spdifin.c 411 */[];
	const struct axg_spdifin_cfg cocci_id/* sound/soc/meson/axg-spdifin.c 406 */;
	const unsigned int cocci_id/* sound/soc/meson/axg-spdifin.c 402 */[SPDIFIN_MODE_NUM];
	const struct regmap_config cocci_id/* sound/soc/meson/axg-spdifin.c 395 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/meson/axg-spdifin.c 390 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/meson/axg-spdifin.c 381 */[];
	const char *const cocci_id/* sound/soc/meson/axg-spdifin.c 341 */[];
	struct snd_soc_component *cocci_id/* sound/soc/meson/axg-spdifin.c 298 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/meson/axg-spdifin.c 296 */;
	struct snd_kcontrol *cocci_id/* sound/soc/meson/axg-spdifin.c 295 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/meson/axg-spdifin.c 276 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/meson/axg-spdifin.c 269 */;
	struct axg_spdifin *cocci_id/* sound/soc/meson/axg-spdifin.c 242 */;
	struct snd_soc_dai *cocci_id/* sound/soc/meson/axg-spdifin.c 240 */;
	int cocci_id/* sound/soc/meson/axg-spdifin.c 240 */;
	uint64_t cocci_id/* sound/soc/meson/axg-spdifin.c 149 */;
	struct regmap *cocci_id/* sound/soc/meson/axg-spdifin.c 143 */;
	void cocci_id/* sound/soc/meson/axg-spdifin.c 134 */;
}
