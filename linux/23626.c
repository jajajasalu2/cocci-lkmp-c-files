cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 842 */;
	void __iomem *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 823 */;
	struct regmap *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 822 */;
	struct platform_device *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 820 */;
	const struct of_device_id cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 803 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 793 */;
	const struct sun8i_codec_analog_quirks *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 690 */;
	const struct sun8i_codec_analog_quirks cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 674 */;
	struct sun8i_codec_analog_quirks {
		bool has_headphone;
		bool has_hmic;
		bool has_linein;
		bool has_lineout;
		bool has_mbias;
		bool has_mic2;
	} cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 665 */;
	const  cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 521 */(sun8i_codec_lineout_vol_scale,
								      0,1,
								      TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
								      2,31,
								      TLV_DB_SCALE_ITEM(-4350,150,0));
	struct device *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 395 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 394 */;
	struct snd_soc_component *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 392 */;
	int cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 392 */;
	struct snd_kcontrol *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 345 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 344 */;
	const char *constcocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 329 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 285 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 221 */[];
	const  cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 199 */(sun8i_codec_mic_gain_scale,
								      0,0,
								      TLV_DB_SCALE_ITEM(0,0,0),
								      1,7,
								      TLV_DB_SCALE_ITEM(2400,300,0));
	const  cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 197 */(sun8i_codec_out_mixer_pregain_scale,
								      -450,
								      150,0);
	const struct snd_kcontrol_new cocci_id/* sound/soc/sunxi/sun8i-codec-analog.c 157 */[];
}
