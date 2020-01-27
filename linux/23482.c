cocci_test_suite() {
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8993.c 973 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8993.c 918 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8993.c 880 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8993.c 855 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8993.c 822 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8993.c 807 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8993.c 806 */;
	const char *cocci_id/* sound/soc/codecs/wm8993.c 648 */[];
	const  cocci_id/* sound/soc/codecs/wm8993.c 628 */(drc_max_tlv,
							   0,2,
							   TLV_DB_SCALE_ITEM(1200,600,0),
							   3,3,
							   TLV_DB_SCALE_ITEM(3600,0,0));
	struct _fll_div cocci_id/* sound/soc/codecs/wm8993.c 472 */;
	u16 cocci_id/* sound/soc/codecs/wm8993.c 471 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8993.c 470 */;
	struct wm8993_priv *cocci_id/* sound/soc/codecs/wm8993.c 469 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8993.c 467 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8993.c 466 */;
	int cocci_id/* sound/soc/codecs/wm8993.c 466 */;
	long long cocci_id/* sound/soc/codecs/wm8993.c 446 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm8993.c 41 */[];
	u64 cocci_id/* sound/soc/codecs/wm8993.c 385 */;
	struct _fll_div *cocci_id/* sound/soc/codecs/wm8993.c 382 */;
	struct {
		unsigned int min;
		unsigned int max;
		u16 fll_fratio;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8993.c 369 */[];
	struct _fll_div {
		u16 fll_fratio;
		u16 fll_outdiv;
		u16 fll_clk_ref_div;
		u16 n;
		u16 k;
	} cocci_id/* sound/soc/codecs/wm8993.c 357 */;
	const char *cocci_id/* sound/soc/codecs/wm8993.c 32 */[WM8993_NUM_SUPPLIES];
	bool cocci_id/* sound/soc/codecs/wm8993.c 238 */;
	struct device *cocci_id/* sound/soc/codecs/wm8993.c 238 */;
	struct wm8993_priv {
		struct wm_hubs_data hubs_data;
		struct device *dev;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8993_NUM_SUPPLIES];
		struct wm8993_platform_data pdata;
		struct completion fll_lock;
		int master;
		int sysclk_source;
		int tdm_slots;
		int tdm_width;
		unsigned int mclk_rate;
		unsigned int sysclk_rate;
		unsigned int fs;
		unsigned int bclk;
		unsigned int fll_fref;
		unsigned int fll_fout;
		int fll_src;
	} cocci_id/* sound/soc/codecs/wm8993.c 203 */;
	struct {
		int div;
		int bclk_div;
	} cocci_id/* sound/soc/codecs/wm8993.c 181 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8993.c 1743 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8993.c 1737 */[];
	struct {
		int rate;
		int sample_rate;
	} cocci_id/* sound/soc/codecs/wm8993.c 166 */[];
	struct wm8993_priv cocci_id/* sound/soc/codecs/wm8993.c 1633 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8993.c 1627 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8993.c 1615 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8993.c 1602 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/wm8993.c 1596 */[];
	struct {
		int ratio;
		int clk_sys_rate;
	} cocci_id/* sound/soc/codecs/wm8993.c 150 */[];
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8993.c 1484 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8993.c 1459 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8993.c 1443 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wm8993.c 1404 */;
	void *cocci_id/* sound/soc/codecs/wm8993.c 1404 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8993.c 1333 */;
	struct wm8993_retune_mobile_setting *cocci_id/* sound/soc/codecs/wm8993.c 1303 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8993.c 1185 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8993.c 1184 */;
}
