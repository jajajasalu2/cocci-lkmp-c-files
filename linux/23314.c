cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm9081.c 992 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm9081.c 991 */;
	struct {
		int ratio;
		int clk_sys_rate;
	} cocci_id/* sound/soc/codecs/wm9081.c 85 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm9081.c 816 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm9081.c 789 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm9081.c 763 */[];
	struct wm9081_priv *cocci_id/* sound/soc/codecs/wm9081.c 733 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm9081.c 732 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm9081.c 730 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm9081.c 729 */;
	int cocci_id/* sound/soc/codecs/wm9081.c 729 */;
	unsigned int cocci_id/* sound/soc/codecs/wm9081.c 640 */;
	struct _fll_div cocci_id/* sound/soc/codecs/wm9081.c 550 */;
	u16 cocci_id/* sound/soc/codecs/wm9081.c 549 */;
	long long cocci_id/* sound/soc/codecs/wm9081.c 525 */;
	u64 cocci_id/* sound/soc/codecs/wm9081.c 465 */;
	struct _fll_div *cocci_id/* sound/soc/codecs/wm9081.c 462 */;
	struct {
		unsigned int min;
		unsigned int max;
		u16 fll_fratio;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm9081.c 449 */[];
	struct _fll_div {
		u16 fll_fratio;
		u16 fll_outdiv;
		u16 fll_clk_ref_div;
		u16 n;
		u16 k;
	} cocci_id/* sound/soc/codecs/wm9081.c 437 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm9081.c 431 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm9081.c 336 */;
	const char *cocci_id/* sound/soc/codecs/wm9081.c 317 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm9081.c 29 */[];
	const  cocci_id/* sound/soc/codecs/wm9081.c 242 */(drc_max_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(1200,0,0),
							   1,1,
							   TLV_DB_SCALE_ITEM(1800,0,0),
							   2,2,
							   TLV_DB_SCALE_ITEM(2400,0,0),
							   3,3,
							   TLV_DB_SCALE_ITEM(3600,0,0));
	struct regmap *cocci_id/* sound/soc/codecs/wm9081.c 234 */;
	bool cocci_id/* sound/soc/codecs/wm9081.c 170 */;
	struct device *cocci_id/* sound/soc/codecs/wm9081.c 170 */;
	struct wm9081_priv {
		struct regmap *regmap;
		int sysclk_source;
		int mclk_rate;
		int sysclk_rate;
		int fs;
		int bclk;
		int master;
		int fll_fref;
		int fll_fout;
		int tdm_width;
		struct wm9081_pdata pdata;
	} cocci_id/* sound/soc/codecs/wm9081.c 145 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm9081.c 1371 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm9081.c 1365 */[];
	struct wm9081_priv cocci_id/* sound/soc/codecs/wm9081.c 1308 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm9081.c 1302 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm9081.c 1301 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm9081.c 1289 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm9081.c 1274 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm9081.c 1242 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm9081.c 1232 */;
	struct {
		int div;
		int bclk_div;
	} cocci_id/* sound/soc/codecs/wm9081.c 118 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm9081.c 1150 */;
	struct wm9081_retune_mobile_setting *cocci_id/* sound/soc/codecs/wm9081.c 1111 */;
	struct wm9081_pdata *cocci_id/* sound/soc/codecs/wm9081.c 1110 */;
	struct {
		int rate;
		int sample_rate;
	} cocci_id/* sound/soc/codecs/wm9081.c 101 */[];
}
