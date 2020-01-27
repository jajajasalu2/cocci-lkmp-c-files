cocci_test_suite() {
	struct aifs_status {
		u8 streams;
	} cocci_id/* sound/soc/codecs/tscs454.c 94 */;
	struct coeff_ram *cocci_id/* sound/soc/codecs/tscs454.c 88 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/tscs454.c 872 */;
	struct tscs454 *cocci_id/* sound/soc/codecs/tscs454.c 815 */;
	struct aif *cocci_id/* sound/soc/codecs/tscs454.c 813 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tscs454.c 812 */;
	const u8 cocci_id/* sound/soc/codecs/tscs454.c 77 */[];
	struct coeff_ram {
		u8 cache[COEFF_RAM_SIZE];
		bool synced;
		struct mutex lock;
	} cocci_id/* sound/soc/codecs/tscs454.c 69 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tscs454.c 684 */;
	struct pll *cocci_id/* sound/soc/codecs/tscs454.c 677 */;
	unsigned int cocci_id/* sound/soc/codecs/tscs454.c 64 */;
	void cocci_id/* sound/soc/codecs/tscs454.c 64 */;
	enum{PLL_INPUT_XTAL=0, PLL_INPUT_MCLK1, PLL_INPUT_MCLK2, PLL_INPUT_BCLK,} cocci_id/* sound/soc/codecs/tscs454.c 628 */;
	const struct pll_ctl *cocci_id/* sound/soc/codecs/tscs454.c 614 */;
	unsigned long cocci_id/* sound/soc/codecs/tscs454.c 614 */;
	struct aif {
		unsigned int id;
		bool master;
		struct pll *pll;
	} cocci_id/* sound/soc/codecs/tscs454.c 58 */;
	const struct pll_ctl cocci_id/* sound/soc/codecs/tscs454.c 542 */[];
	struct internal_rate {
		struct pll *pll;
	} cocci_id/* sound/soc/codecs/tscs454.c 54 */;
	struct pll_ctl {
		int freq_in;
		struct reg_setting settings[PLL_REG_SETTINGS_COUNT];
	} cocci_id/* sound/soc/codecs/tscs454.c 519 */;
	struct pll {
		int id;
		unsigned int users;
		struct mutex lock;
	} cocci_id/* sound/soc/codecs/tscs454.c 42 */;
	bool *cocci_id/* sound/soc/codecs/tscs454.c 405 */;
	enum{TSCS454_DAI1_ID, TSCS454_DAI2_ID, TSCS454_DAI3_ID, TSCS454_DAI_COUNT,} cocci_id/* sound/soc/codecs/tscs454.c 35 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tscs454.c 3483 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tscs454.c 3477 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tscs454.c 3471 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tscs454.c 3415 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tscs454.c 3348 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tscs454.c 3332 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tscs454.c 3274 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tscs454.c 3248 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tscs454.c 3179 */;
	struct mutex *cocci_id/* sound/soc/codecs/tscs454.c 317 */;
	u8 *cocci_id/* sound/soc/codecs/tscs454.c 316 */;
	snd_pcm_format_t cocci_id/* sound/soc/codecs/tscs454.c 3124 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tscs454.c 308 */;
	struct reg_setting {
		unsigned int addr;
		unsigned int val;
	} cocci_id/* sound/soc/codecs/tscs454.c 302 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tscs454.c 2914 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tscs454.c 277 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tscs454.c 263 */;
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/tscs454.c 252 */;
	const unsigned int cocci_id/* sound/soc/codecs/tscs454.c 25 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tscs454.c 2490 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tscs454.c 2358 */[];
	struct device *cocci_id/* sound/soc/codecs/tscs454.c 223 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tscs454.c 1538 */[];
	struct coeff_ram_ctl cocci_id/* sound/soc/codecs/tscs454.c 1532 */;
	struct soc_bytes_ext *cocci_id/* sound/soc/codecs/tscs454.c 1490 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/tscs454.c 149 */[];
	struct coeff_ram_ctl *cocci_id/* sound/soc/codecs/tscs454.c 1488 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/tscs454.c 1486 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tscs454.c 1485 */;
	struct coeff_ram_ctl {
		unsigned int addr;
		struct soc_bytes_ext bytes_ext;
	} cocci_id/* sound/soc/codecs/tscs454.c 144 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/tscs454.c 1323 */[];
	struct tscs454 {
		struct regmap *regmap;
		struct aif aifs[TSCS454_DAI_COUNT];
		struct aifs_status aifs_status;
		struct mutex aifs_status_lock;
		struct pll pll1;
		struct pll pll2;
		struct internal_rate internal_rate;
		struct coeff_ram dac_ram;
		struct coeff_ram spk_ram;
		struct coeff_ram sub_ram;
		struct clk *sysclk;
		int sysclk_src_id;
		unsigned int bclk_freq;
	} cocci_id/* sound/soc/codecs/tscs454.c 124 */;
	bool cocci_id/* sound/soc/codecs/tscs454.c 119 */;
	struct aifs_status *cocci_id/* sound/soc/codecs/tscs454.c 119 */;
	int cocci_id/* sound/soc/codecs/tscs454.c 119 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tscs454.c 1025 */;
	const char *const cocci_id/* sound/soc/codecs/tscs454.c 1018 */[];
	u8 cocci_id/* sound/soc/codecs/tscs454.c 101 */;
}
