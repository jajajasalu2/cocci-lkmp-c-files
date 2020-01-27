cocci_test_suite() {
	u8 cocci_id/* sound/soc/codecs/da7210.c 930 */;
	u32 cocci_id/* sound/soc/codecs/da7210.c 760 */;
	struct da7210_priv *cocci_id/* sound/soc/codecs/da7210.c 759 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/da7210.c 758 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/da7210.c 756 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/da7210.c 755 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/da7210.c 754 */;
	int cocci_id/* sound/soc/codecs/da7210.c 754 */;
	bool cocci_id/* sound/soc/codecs/da7210.c 727 */;
	struct device *cocci_id/* sound/soc/codecs/da7210.c 727 */;
	unsigned int cocci_id/* sound/soc/codecs/da7210.c 727 */;
	const struct reg_default cocci_id/* sound/soc/codecs/da7210.c 674 */[];
	struct da7210_priv {
		struct regmap *regmap;
		unsigned int mclk_rate;
		int master;
	} cocci_id/* sound/soc/codecs/da7210.c 668 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/da7210.c 603 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/da7210.c 531 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da7210.c 487 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/da7210.c 327 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/da7210.c 326 */;
	const char *cocci_id/* sound/soc/codecs/da7210.c 318 */[];
	const char *constcocci_id/* sound/soc/codecs/da7210.c 297 */[];
	const  cocci_id/* sound/soc/codecs/da7210.c 283 */(aux1_vol_tlv,
							   0x0,0x10,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							   
							   0x11,0x3f,
							   TLV_DB_SCALE_ITEM(-4800,150,0));
	const  cocci_id/* sound/soc/codecs/da7210.c 277 */(mono_vol_tlv,
							   0x0,0x2,
							   TLV_DB_SCALE_ITEM(-1800,0,1),
							   
							   0x3,0x7,
							   TLV_DB_SCALE_ITEM(-1800,600,0));
	const  cocci_id/* sound/soc/codecs/da7210.c 271 */(lineout_vol_tlv,
							   0x0,0x10,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							   
							   0x11,0x3f,
							   TLV_DB_SCALE_ITEM(-5400,150,0));
	const  cocci_id/* sound/soc/codecs/da7210.c 265 */(hp_out_tlv,
							   0x0,0x10,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							   
							   0x11,0x3f,
							   TLV_DB_SCALE_ITEM(-5400,150,0));
	enum clk_src{DA7210_CLKSRC_MCLK,} cocci_id/* sound/soc/codecs/da7210.c 248 */;
	const struct pll_div cocci_id/* sound/soc/codecs/da7210.c 221 */[];
	struct pll_div {
		int fref;
		int fout;
		u8 div1;
		u8 div2;
		u8 div3;
		u8 mode;
	} cocci_id/* sound/soc/codecs/da7210.c 211 */;
	void __exit cocci_id/* sound/soc/codecs/da7210.c 1348 */;
	void cocci_id/* sound/soc/codecs/da7210.c 1348 */;
	int __init cocci_id/* sound/soc/codecs/da7210.c 1331 */;
	struct spi_driver cocci_id/* sound/soc/codecs/da7210.c 1323 */;
	struct spi_device *cocci_id/* sound/soc/codecs/da7210.c 1294 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/da7210.c 1246 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/da7210.c 1239 */[];
	struct da7210_priv cocci_id/* sound/soc/codecs/da7210.c 1212 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/da7210.c 1207 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/da7210.c 1206 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/da7210.c 1195 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/da7210.c 1178 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/da7210.c 1162 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/da7210.c 1040 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/da7210.c 1032 */;
}
