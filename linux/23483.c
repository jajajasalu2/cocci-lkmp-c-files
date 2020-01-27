cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/wm2000.c 940 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm2000.c 934 */[];
	u16 cocci_id/* sound/soc/codecs/wm2000.c 819 */;
	const struct firmware *cocci_id/* sound/soc/codecs/wm2000.c 816 */;
	const char *cocci_id/* sound/soc/codecs/wm2000.c 815 */;
	struct wm2000_platform_data *cocci_id/* sound/soc/codecs/wm2000.c 814 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm2000.c 811 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm2000.c 793 */;
	void cocci_id/* sound/soc/codecs/wm2000.c 786 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm2000.c 768 */;
	bool cocci_id/* sound/soc/codecs/wm2000.c 736 */;
	struct device *cocci_id/* sound/soc/codecs/wm2000.c 736 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm2000.c 710 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm2000.c 696 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm2000.c 674 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm2000.c 664 */[];
	unsigned int cocci_id/* sound/soc/codecs/wm2000.c 614 */;
	struct wm2000_priv *cocci_id/* sound/soc/codecs/wm2000.c 602 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm2000.c 601 */;
	struct wm2000_priv {
		struct i2c_client *i2c;
		struct regmap *regmap;
		struct clk *mclk;
		struct regulator_bulk_data supplies[WM2000_NUM_SUPPLIES];
		enum wm2000_anc_mode anc_mode;
		unsigned int anc_active:1;
		unsigned int anc_eng_ena:1;
		unsigned int spk_ena:1;
		unsigned int speech_clarity:1;
		int anc_download_size;
		char *anc_download;
		struct mutex lock;
	} cocci_id/* sound/soc/codecs/wm2000.c 60 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm2000.c 599 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm2000.c 598 */;
	int cocci_id/* sound/soc/codecs/wm2000.c 598 */;
	enum wm2000_anc_mode cocci_id/* sound/soc/codecs/wm2000.c 581 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm2000.c 580 */;
	enum wm2000_anc_mode{ANC_ACTIVE=0, ANC_BYPASS=1, ANC_STANDBY=2, ANC_OFF=3,} cocci_id/* sound/soc/codecs/wm2000.c 53 */;
	const char *cocci_id/* sound/soc/codecs/wm2000.c 47 */[WM2000_NUM_SUPPLIES];
	struct {
		enum wm2000_anc_mode source;
		enum wm2000_anc_mode dest;
		int analogue;
		wm2000_mode_fn step[2];
	} cocci_id/* sound/soc/codecs/wm2000.c 427 */[];
	int (*cocci_id/* sound/soc/codecs/wm2000.c 425 */)(struct i2c_client *i2c,
							   int analogue);
	unsigned long cocci_id/* sound/soc/codecs/wm2000.c 122 */;
	u8 cocci_id/* sound/soc/codecs/wm2000.c 100 */;
}
