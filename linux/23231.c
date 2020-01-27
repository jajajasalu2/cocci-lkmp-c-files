cocci_test_suite() {
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8960.c 871 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8960.c 870 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8960.c 810 */;
	u16 cocci_id/* sound/soc/codecs/wm8960.c 745 */;
	int *cocci_id/* sound/soc/codecs/wm8960.c 696 */;
	const int cocci_id/* sound/soc/codecs/wm8960.c 599 */[];
	struct {
		int rate;
		unsigned int val;
	} cocci_id/* sound/soc/codecs/wm8960.c 577 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm8960.c 56 */[];
	int cocci_id/* sound/soc/codecs/wm8960.c 49 */(struct snd_soc_component *component,
						       unsigned int freq_in,
						       unsigned int freq_out);
	bool cocci_id/* sound/soc/codecs/wm8960.c 48 */(unsigned int source,
							unsigned int target);
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8960.c 475 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8960.c 474 */;
	struct wm8960_data *cocci_id/* sound/soc/codecs/wm8960.c 473 */;
	struct wm8960_priv *cocci_id/* sound/soc/codecs/wm8960.c 472 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8960.c 470 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8960.c 407 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8960.c 345 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8960.c 314 */[];
	const  cocci_id/* sound/soc/codecs/wm8960.c 226 */(micboost_tlv,
							   0,1,
							   TLV_DB_SCALE_ITEM(0,1300,0),
							   2,3,
							   TLV_DB_SCALE_ITEM(2000,900,0));
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8960.c 196 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8960.c 195 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/wm8960.c 155 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8960.c 1475 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8960.c 1469 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8960.c 1463 */[];
	const char *cocci_id/* sound/soc/codecs/wm8960.c 144 */[];
	struct wm8960_data cocci_id/* sound/soc/codecs/wm8960.c 1418 */;
	struct wm8960_priv cocci_id/* sound/soc/codecs/wm8960.c 1402 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8960.c 1396 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8960.c 1395 */;
	const struct device_node *cocci_id/* sound/soc/codecs/wm8960.c 1386 */;
	void cocci_id/* sound/soc/codecs/wm8960.c 1383 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8960.c 1371 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8960.c 1361 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8960.c 1326 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8960.c 1316 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8960.c 1276 */;
	struct wm8960_priv {
		struct clk *mclk;
		struct regmap *regmap;
		int (*set_bias_level)(struct snd_soc_component *,
				      enum snd_soc_bias_level level);
		struct snd_soc_dapm_widget *lout1;
		struct snd_soc_dapm_widget *rout1;
		struct snd_soc_dapm_widget *out3;
		bool deemph;
		int lrclk;
		int bclk;
		int sysclk;
		int clk_id;
		int freq_in;
		bool is_stream_in_use[2];
		struct wm8960_data pdata;
	} cocci_id/* sound/soc/codecs/wm8960.c 120 */;
	struct _pll_div cocci_id/* sound/soc/codecs/wm8960.c 1189 */;
	long long cocci_id/* sound/soc/codecs/wm8960.c 1164 */;
	unsigned long long cocci_id/* sound/soc/codecs/wm8960.c 1141 */;
	struct _pll_div *cocci_id/* sound/soc/codecs/wm8960.c 1139 */;
	int cocci_id/* sound/soc/codecs/wm8960.c 1138 */;
	bool cocci_id/* sound/soc/codecs/wm8960.c 1112 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8960.c 1112 */;
	struct _pll_div {
		u32 pre_div:1;
		u32 n:4;
		u32 k:24;
	} cocci_id/* sound/soc/codecs/wm8960.c 1106 */;
	struct device *cocci_id/* sound/soc/codecs/wm8960.c 110 */;
}
