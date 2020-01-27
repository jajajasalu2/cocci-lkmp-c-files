cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 482 */;
	void __iomem *cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 463 */;
	struct regmap *cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 462 */;
	struct platform_device *cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 460 */;
	int cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 460 */;
	const struct of_device_id cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 452 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 443 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 376 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 296 */[];
	const char *constcocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 282 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 190 */[];
	const  cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 184 */(sun50i_codec_earpiece_vol_scale,
								       0,1,
								       TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
								       2,31,
								       TLV_DB_SCALE_ITEM(-4350,150,0));
	const  cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 179 */(sun50i_codec_lineout_vol_scale,
								       0,1,
								       TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
								       2,31,
								       TLV_DB_SCALE_ITEM(-4350,150,0));
	const  cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 172 */(sun50i_codec_mic_gain_scale,
								       0,0,
								       TLV_DB_SCALE_ITEM(0,0,0),
								       1,7,
								       TLV_DB_SCALE_ITEM(2400,300,0));
	const  cocci_id/* sound/soc/sunxi/sun50i-codec-analog.c 170 */(sun50i_codec_out_mixer_pregain_scale,
								       -450,
								       150,0);
}
