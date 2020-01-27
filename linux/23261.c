cocci_test_suite() {
	const  cocci_id/* sound/soc/codecs/wm9713.c 95 */(mic_tlv,
							  0,2,
							  TLV_DB_SCALE_ITEM(1200,600,0),
							  3,3,
							  TLV_DB_SCALE_ITEM(3000,0,0));
	u16 cocci_id/* sound/soc/codecs/wm9713.c 942 */;
	struct _pll_div cocci_id/* sound/soc/codecs/wm9713.c 819 */;
	long long cocci_id/* sound/soc/codecs/wm9713.c 794 */;
	u64 cocci_id/* sound/soc/codecs/wm9713.c 755 */;
	struct _pll_div *cocci_id/* sound/soc/codecs/wm9713.c 753 */;
	unsigned int cocci_id/* sound/soc/codecs/wm9713.c 753 */;
	void cocci_id/* sound/soc/codecs/wm9713.c 752 */;
	struct _pll_div {
		u32 divsel:1;
		u32 divctl:1;
		u32 lf:1;
		u32 n:4;
		u32 k:24;
	} cocci_id/* sound/soc/codecs/wm9713.c 740 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm9713.c 725 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/wm9713.c 69 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm9713.c 674 */[];
	struct device *cocci_id/* sound/soc/codecs/wm9713.c 647 */;
	const char *cocci_id/* sound/soc/codecs/wm9713.c 52 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm9713.c 490 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm9713.c 401 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm9713.c 378 */;
	struct wm9713_priv {
		struct snd_ac97 *ac97;
		u32 pll_in;
		unsigned int hp_mixer[2];
		struct mutex lock;
		struct wm97xx_platform_data *mfd_pdata;
	} cocci_id/* sound/soc/codecs/wm9713.c 35 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm9713.c 296 */[];
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/wm9713.c 274 */;
	struct wm9713_priv *cocci_id/* sound/soc/codecs/wm9713.c 273 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm9713.c 271 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm9713.c 269 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm9713.c 268 */;
	bool cocci_id/* sound/soc/codecs/wm9713.c 235 */;
	struct snd_soc_dapm_update cocci_id/* sound/soc/codecs/wm9713.c 234 */;
	const unsigned int cocci_id/* sound/soc/codecs/wm9713.c 209 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm9713.c 192 */;
	struct platform_driver cocci_id/* sound/soc/codecs/wm9713.c 1280 */;
	struct platform_device *cocci_id/* sound/soc/codecs/wm9713.c 1263 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm9713.c 1245 */;
	struct regmap *cocci_id/* sound/soc/codecs/wm9713.c 1208 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm9713.c 1142 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm9713.c 1095 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm9713.c 1081 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/codecs/wm9713.c 1047 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm9713.c 1046 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm9713.c 1044 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm9713.c 1043 */;
	int cocci_id/* sound/soc/codecs/wm9713.c 1043 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm9713.c 1001 */;
}
