cocci_test_suite() {
	struct axg_pdm {
		const struct axg_pdm_cfg *cfg;
		struct regmap *map;
		struct clk *dclk;
		struct clk *sysclk;
		struct clk *pclk;
	} cocci_id/* sound/soc/meson/axg-pdm.c 91 */;
	struct axg_pdm_cfg {
		const struct axg_pdm_filters *filters;
		unsigned int sys_rate;
	} cocci_id/* sound/soc/meson/axg-pdm.c 86 */;
	struct axg_pdm_filters {
		struct axg_pdm_hcic hcic;
		struct axg_pdm_hpf hpf;
		struct axg_pdm_lpf lpf[PDM_LPF_NUM];
	} cocci_id/* sound/soc/meson/axg-pdm.c 80 */;
	struct axg_pdm_hpf {
		unsigned int out_factor;
		unsigned int steps;
	} cocci_id/* sound/soc/meson/axg-pdm.c 75 */;
	struct axg_pdm_hcic {
		unsigned int shift;
		unsigned int mult;
		unsigned int steps;
		unsigned int ds;
	} cocci_id/* sound/soc/meson/axg-pdm.c 68 */;
	struct platform_driver cocci_id/* sound/soc/meson/axg-pdm.c 641 */;
	struct axg_pdm_lpf {
		unsigned int ds;
		unsigned int round_mode;
		const unsigned int *tap;
		unsigned int tap_num;
	} cocci_id/* sound/soc/meson/axg-pdm.c 61 */;
	void __iomem *cocci_id/* sound/soc/meson/axg-pdm.c 588 */;
	struct device *cocci_id/* sound/soc/meson/axg-pdm.c 586 */;
	struct platform_device *cocci_id/* sound/soc/meson/axg-pdm.c 584 */;
	const struct of_device_id cocci_id/* sound/soc/meson/axg-pdm.c 576 */[];
	const struct axg_pdm_cfg cocci_id/* sound/soc/meson/axg-pdm.c 571 */;
	const struct axg_pdm_filters cocci_id/* sound/soc/meson/axg-pdm.c 538 */;
	const unsigned int cocci_id/* sound/soc/meson/axg-pdm.c 469 */[];
	const struct regmap_config cocci_id/* sound/soc/meson/axg-pdm.c 462 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/meson/axg-pdm.c 460 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/meson/axg-pdm.c 443 */;
	struct axg_pdm *cocci_id/* sound/soc/meson/axg-pdm.c 383 */;
	struct snd_soc_dai *cocci_id/* sound/soc/meson/axg-pdm.c 381 */;
	int cocci_id/* sound/soc/meson/axg-pdm.c 381 */;
	const struct axg_pdm_hpf *cocci_id/* sound/soc/meson/axg-pdm.c 342 */;
	const struct axg_pdm_lpf *cocci_id/* sound/soc/meson/axg-pdm.c 324 */;
	const struct axg_pdm_hcic *cocci_id/* sound/soc/meson/axg-pdm.c 306 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/meson/axg-pdm.c 297 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/meson/axg-pdm.c 224 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/meson/axg-pdm.c 223 */;
	u64 cocci_id/* sound/soc/meson/axg-pdm.c 187 */;
	const struct axg_pdm_filters *cocci_id/* sound/soc/meson/axg-pdm.c 150 */;
	unsigned int cocci_id/* sound/soc/meson/axg-pdm.c 116 */;
	bool cocci_id/* sound/soc/meson/axg-pdm.c 114 */;
	struct regmap *cocci_id/* sound/soc/meson/axg-pdm.c 109 */;
	void cocci_id/* sound/soc/meson/axg-pdm.c 109 */;
}
