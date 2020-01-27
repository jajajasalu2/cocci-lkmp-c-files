cocci_test_suite() {
	u64 cocci_id/* sound/soc/codecs/wm8350.c 975 */;
	struct _fll_div *cocci_id/* sound/soc/codecs/wm8350.c 972 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8350.c 972 */;
	int cocci_id/* sound/soc/codecs/wm8350.c 972 */;
	struct _fll_div {
		int div;
		int n;
		int k;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8350.c 961 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8350.c 945 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8350.c 904 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8350.c 903 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8350.c 669 */[];
	struct wm8350_data {
		struct wm8350 *wm8350;
		struct wm8350_output out1;
		struct wm8350_output out2;
		struct wm8350_jack_data hpl;
		struct wm8350_jack_data hpr;
		struct wm8350_jack_data mic;
		struct regulator_bulk_data supplies[ARRAY_SIZE(supply_names)];
		int fll_freq_out;
		int fll_freq_in;
		struct delayed_work pga_work;
	} cocci_id/* sound/soc/codecs/wm8350.c 59 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8350.c 583 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8350.c 576 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8350.c 542 */[];
	struct wm8350_jack_data {
		struct snd_soc_jack *jack;
		struct delayed_work work;
		int report;
		int short_report;
	} cocci_id/* sound/soc/codecs/wm8350.c 52 */;
	struct wm8350_output {
		u16 active;
		u16 left_vol;
		u16 right_vol;
		u16 ramp;
		u16 mute;
	} cocci_id/* sound/soc/codecs/wm8350.c 44 */;
	const  cocci_id/* sound/soc/codecs/wm8350.c 394 */(capture_sd_tlv,
							   0,12,
							   TLV_DB_SCALE_ITEM(-3600,300,1),
							   13,15,
							   TLV_DB_SCALE_ITEM(0,0,0));
	const char *cocci_id/* sound/soc/codecs/wm8350.c 39 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/wm8350.c 377 */[];
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/wm8350.c 346 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8350.c 340 */;
	struct wm8350_output *cocci_id/* sound/soc/codecs/wm8350.c 258 */;
	struct wm8350_data *cocci_id/* sound/soc/codecs/wm8350.c 257 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8350.c 256 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8350.c 254 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8350.c 253 */;
	struct platform_driver cocci_id/* sound/soc/codecs/wm8350.c 1604 */;
	struct platform_device *cocci_id/* sound/soc/codecs/wm8350.c 1597 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8350.c 1580 */;
	void cocci_id/* sound/soc/codecs/wm8350.c 1552 */;
	struct wm8350_data cocci_id/* sound/soc/codecs/wm8350.c 1468 */;
	struct wm8350 *cocci_id/* sound/soc/codecs/wm8350.c 1457 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8350.c 1436 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8350.c 1427 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/wm8350.c 1319 */;
	enum wm8350_jack cocci_id/* sound/soc/codecs/wm8350.c 1318 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wm8350.c 1271 */;
	void *cocci_id/* sound/soc/codecs/wm8350.c 1271 */;
	struct work_struct *cocci_id/* sound/soc/codecs/wm8350.c 1255 */;
	u16 cocci_id/* sound/soc/codecs/wm8350.c 1239 */;
	struct wm8350_jack_data *cocci_id/* sound/soc/codecs/wm8350.c 1238 */;
	struct wm8350_audio_platform_data *cocci_id/* sound/soc/codecs/wm8350.c 1079 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8350.c 1075 */;
	struct _fll_div cocci_id/* sound/soc/codecs/wm8350.c 1027 */;
	long long cocci_id/* sound/soc/codecs/wm8350.c 1003 */;
}
