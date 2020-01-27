cocci_test_suite() {
	const struct pll_ctl cocci_id/* sound/soc/codecs/tscs42xx.c 973 */[];
	struct pll_ctl {
		int input_freq;
		struct reg_setting settings[PLL_REG_SETTINGS_COUNT];
	} cocci_id/* sound/soc/codecs/tscs42xx.c 947 */;
	struct reg_setting {
		unsigned int addr;
		unsigned int val;
		unsigned int mask;
	} cocci_id/* sound/soc/codecs/tscs42xx.c 940 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tscs42xx.c 87 */;
	snd_pcm_format_t cocci_id/* sound/soc/codecs/tscs42xx.c 814 */;
	struct device *cocci_id/* sound/soc/codecs/tscs42xx.c 72 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tscs42xx.c 626 */[];
	struct coeff_ram_ctl cocci_id/* sound/soc/codecs/tscs42xx.c 620 */;
	struct soc_bytes_ext *cocci_id/* sound/soc/codecs/tscs42xx.c 608 */;
	struct coeff_ram_ctl *cocci_id/* sound/soc/codecs/tscs42xx.c 606 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/tscs42xx.c 604 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tscs42xx.c 603 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/tscs42xx.c 563 */[];
	struct coeff_ram_ctl {
		unsigned int addr;
		struct soc_bytes_ext bytes_ext;
	} cocci_id/* sound/soc/codecs/tscs42xx.c 49 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tscs42xx.c 467 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tscs42xx.c 407 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tscs42xx.c 382 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/tscs42xx.c 349 */;
	const char *const cocci_id/* sound/soc/codecs/tscs42xx.c 345 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tscs42xx.c 333 */;
	struct tscs42xx {
		int bclk_ratio;
		int samplerate;
		struct mutex audio_params_lock;
		u8 coeff_ram[COEFF_RAM_SIZE];
		bool coeff_ram_synced;
		struct mutex coeff_ram_lock;
		struct mutex pll_lock;
		struct regmap *regmap;
		struct clk *sysclk;
		int sysclk_src_id;
	} cocci_id/* sound/soc/codecs/tscs42xx.c 31 */;
	unsigned int cocci_id/* sound/soc/codecs/tscs42xx.c 292 */;
	struct tscs42xx *cocci_id/* sound/soc/codecs/tscs42xx.c 268 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tscs42xx.c 264 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tscs42xx.c 1503 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tscs42xx.c 1496 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tscs42xx.c 1489 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tscs42xx.c 1413 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tscs42xx.c 1412 */;
	const char *const cocci_id/* sound/soc/codecs/tscs42xx.c 1409 */[TSCS42XX_PLL_SRC_CNT];
	const struct reg_sequence cocci_id/* sound/soc/codecs/tscs42xx.c 1405 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tscs42xx.c 1385 */;
	u8 *cocci_id/* sound/soc/codecs/tscs42xx.c 1373 */;
	const u8 cocci_id/* sound/soc/codecs/tscs42xx.c 1366 */[];
	void cocci_id/* sound/soc/codecs/tscs42xx.c 1364 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tscs42xx.c 1350 */;
	unsigned long cocci_id/* sound/soc/codecs/tscs42xx.c 1303 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tscs42xx.c 1267 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tscs42xx.c 1145 */;
	int cocci_id/* sound/soc/codecs/tscs42xx.c 1145 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tscs42xx.c 1091 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tscs42xx.c 1090 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tscs42xx.c 1089 */;
	const int cocci_id/* sound/soc/codecs/tscs42xx.c 1060 */;
	const struct pll_ctl *cocci_id/* sound/soc/codecs/tscs42xx.c 1045 */;
	bool cocci_id/* sound/soc/codecs/tscs42xx.c 100 */;
}
