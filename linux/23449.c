cocci_test_suite() {
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/mt6351.c 903 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/mt6351.c 902 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/mt6351.c 518 */;
	int cocci_id/* sound/soc/codecs/mt6351.c 507 */[];
	const char *const cocci_id/* sound/soc/codecs/mt6351.c 503 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/mt6351.c 385 */[];
	struct mt6351_priv *cocci_id/* sound/soc/codecs/mt6351.c 327 */;
	int cocci_id/* sound/soc/codecs/mt6351.c 325 */;
	void cocci_id/* sound/soc/codecs/mt6351.c 325 */;
	enum{HP_GAIN_SET_ZERO, HP_GAIN_RESTORE,} cocci_id/* sound/soc/codecs/mt6351.c 320 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/mt6351.c 292 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/mt6351.c 281 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/mt6351.c 264 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/mt6351.c 263 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/mt6351.c 262 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/mt6351.c 208 */;
	unsigned int cocci_id/* sound/soc/codecs/mt6351.c 208 */;
	struct mt6351_priv {
		struct device *dev;
		struct regmap *regmap;
		unsigned int dl_rate;
		unsigned int ul_rate;
		int ana_gain[AUDIO_ANALOG_VOLUME_TYPE_MAX];
		int hp_en_counter;
	} cocci_id/* sound/soc/codecs/mt6351.c 188 */;
	enum{SUPPLY_SUBSEQ_SETTING, SUPPLY_SUBSEQ_ENABLE, SUPPLY_SUBSEQ_MICBIAS,} cocci_id/* sound/soc/codecs/mt6351.c 180 */;
	enum{AUDIO_ANALOG_VOLUME_HSOUTL, AUDIO_ANALOG_VOLUME_HSOUTR, AUDIO_ANALOG_VOLUME_HPOUTL, AUDIO_ANALOG_VOLUME_HPOUTR, AUDIO_ANALOG_VOLUME_LINEOUTL, AUDIO_ANALOG_VOLUME_LINEOUTR, AUDIO_ANALOG_VOLUME_MICAMP1, AUDIO_ANALOG_VOLUME_MICAMP2, AUDIO_ANALOG_VOLUME_TYPE_MAX,} cocci_id/* sound/soc/codecs/mt6351.c 167 */;
	struct platform_driver cocci_id/* sound/soc/codecs/mt6351.c 1485 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/mt6351.c 1480 */[];
	struct mt6351_priv cocci_id/* sound/soc/codecs/mt6351.c 1458 */;
	struct platform_device *cocci_id/* sound/soc/codecs/mt6351.c 1453 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/mt6351.c 1443 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/mt6351.c 1286 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/mt6351.c 1070 */[];
}
