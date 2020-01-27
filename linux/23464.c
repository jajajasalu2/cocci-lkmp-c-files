cocci_test_suite() {
	const struct reg_sequence cocci_id/* sound/soc/codecs/wm2200.c 899 */[];
	struct wm2200_priv {
		struct wm_adsp dsp[2];
		struct regmap *regmap;
		struct device *dev;
		struct snd_soc_component *component;
		struct wm2200_pdata pdata;
		struct regulator_bulk_data core_supplies[WM2200_NUM_CORE_SUPPLIES];
		struct completion fll_lock;
		int fll_fout;
		int fll_fref;
		int fll_src;
		int rev;
		int sysclk;
		unsigned int symmetric_rates:1;
	} cocci_id/* sound/soc/codecs/wm2200.c 83 */;
	struct wm2200_fll {
		int fref;
		int fout;
		int src;
		struct completion lock;
	} cocci_id/* sound/soc/codecs/wm2200.c 75 */;
	const char *cocci_id/* sound/soc/codecs/wm2200.c 70 */[WM2200_NUM_CORE_SUPPLIES];
	bool cocci_id/* sound/soc/codecs/wm2200.c 535 */;
	struct device *cocci_id/* sound/soc/codecs/wm2200.c 535 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm2200.c 2495 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm2200.c 2489 */[];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/wm2200.c 2484 */;
	struct wm2200_priv cocci_id/* sound/soc/codecs/wm2200.c 2196 */;
	struct wm2200_pdata *cocci_id/* sound/soc/codecs/wm2200.c 2190 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm2200.c 2188 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm2200.c 2187 */;
	const unsigned int cocci_id/* sound/soc/codecs/wm2200.c 2168 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/wm2200.c 2153 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wm2200.c 2118 */;
	void *cocci_id/* sound/soc/codecs/wm2200.c 2118 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm2200.c 2104 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm2200.c 2084 */;
	struct wm2200_priv *cocci_id/* sound/soc/codecs/wm2200.c 2059 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm2200.c 2058 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm2200.c 2056 */;
	unsigned long cocci_id/* sound/soc/codecs/wm2200.c 1941 */;
	struct _fll_div cocci_id/* sound/soc/codecs/wm2200.c 1939 */;
	struct _fll_div *cocci_id/* sound/soc/codecs/wm2200.c 1857 */;
	unsigned int cocci_id/* sound/soc/codecs/wm2200.c 1857 */;
	int cocci_id/* sound/soc/codecs/wm2200.c 1857 */;
	struct {
		unsigned int min;
		unsigned int max;
		u16 fll_fratio;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm2200.c 1844 */[];
	struct _fll_div {
		u16 fll_fratio;
		u16 fll_outdiv;
		u16 fll_refclk_div;
		u16 n;
		u16 theta;
		u16 lambda;
	} cocci_id/* sound/soc/codecs/wm2200.c 1835 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm2200.c 1781 */;
	int *cocci_id/* sound/soc/codecs/wm2200.c 1699 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm2200.c 1693 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm2200.c 1692 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm2200.c 168 */[];
	int cocci_id/* sound/soc/codecs/wm2200.c 1677 */[WM2200_NUM_BCLK_RATES];
	int cocci_id/* sound/soc/codecs/wm2200.c 1633 */[];
	const struct wm_adsp_region cocci_id/* sound/soc/codecs/wm2200.c 156 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm2200.c 1444 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm2200.c 1300 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm2200.c 1297 */;
	const char *cocci_id/* sound/soc/codecs/wm2200.c 1288 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm2200.c 1120 */[];
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/wm2200.c 112 */[];
	unsigned int cocci_id/* sound/soc/codecs/wm2200.c 1035 */[];
	const char *const cocci_id/* sound/soc/codecs/wm2200.c 1001 */[];
}