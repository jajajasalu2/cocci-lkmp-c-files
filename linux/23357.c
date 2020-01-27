cocci_test_suite() {
	const struct soc_enum cocci_id/* sound/soc/codecs/wcd9335.c 626 */;
	const char *const cocci_id/* sound/soc/codecs/wcd9335.c 568 */[];
	struct slim_driver cocci_id/* sound/soc/codecs/wcd9335.c 5225 */;
	const struct slim_device_id cocci_id/* sound/soc/codecs/wcd9335.c 5219 */[];
	enum slim_device_status cocci_id/* sound/soc/codecs/wcd9335.c 5166 */;
	struct slim_device *cocci_id/* sound/soc/codecs/wcd9335.c 5139 */;
	struct regmap *cocci_id/* sound/soc/codecs/wcd9335.c 5083 */;
	struct device_node *cocci_id/* sound/soc/codecs/wcd9335.c 5017 */;
	struct device *cocci_id/* sound/soc/codecs/wcd9335.c 5016 */;
	const struct regmap_irq_chip cocci_id/* sound/soc/codecs/wcd9335.c 5002 */;
	const struct regmap_irq cocci_id/* sound/soc/codecs/wcd9335.c 4989 */[];
	struct regmap_config cocci_id/* sound/soc/codecs/wcd9335.c 4980 */;
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/wcd9335.c 4967 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wcd9335.c 4897 */;
	const struct wcd9335_reg_mask_val cocci_id/* sound/soc/codecs/wcd9335.c 433 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wcd9335.c 4323 */[];
	struct wcd9335_codec *cocci_id/* sound/soc/codecs/wcd9335.c 4289 */;
	struct wcd9335_reg_mask_val {
		u16 reg;
		u8 mask;
		u8 val;
	} cocci_id/* sound/soc/codecs/wcd9335.c 427 */;
	enum wcd9335_sido_voltage cocci_id/* sound/soc/codecs/wcd9335.c 4243 */;
	bool cocci_id/* sound/soc/codecs/wcd9335.c 4213 */;
	struct interp_sample_rate cocci_id/* sound/soc/codecs/wcd9335.c 409 */[];
	void cocci_id/* sound/soc/codecs/wcd9335.c 4079 */;
	struct interp_sample_rate {
		int rate;
		int rate_val;
	} cocci_id/* sound/soc/codecs/wcd9335.c 404 */;
	struct wcd9335_irq cocci_id/* sound/soc/codecs/wcd9335.c 4039 */[];
	unsigned long cocci_id/* sound/soc/codecs/wcd9335.c 3968 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wcd9335.c 3965 */;
	void *cocci_id/* sound/soc/codecs/wcd9335.c 3965 */;
	const struct wcd9335_slim_ch cocci_id/* sound/soc/codecs/wcd9335.c 388 */[WCD9335_RX_MAX];
	const struct wcd9335_slim_ch cocci_id/* sound/soc/codecs/wcd9335.c 369 */[WCD9335_TX_MAX];
	struct wcd9335_irq {
		int irq;
		irqreturn_t (*handler)(int irq, void *data);
		char *name;
	} cocci_id/* sound/soc/codecs/wcd9335.c 363 */;
	u16 *cocci_id/* sound/soc/codecs/wcd9335.c 3094 */;
	struct wcd9335_codec {
		struct device *dev;
		struct clk *mclk;
		struct clk *native_clk;
		u32 mclk_rate;
		u8 version;
		struct slim_device *slim;
		struct slim_device *slim_ifc_dev;
		struct regmap *regmap;
		struct regmap *if_regmap;
		struct regmap_irq_chip_data *irq_data;
		struct wcd9335_slim_ch rx_chs[WCD9335_RX_MAX];
		struct wcd9335_slim_ch tx_chs[WCD9335_TX_MAX];
		u32 num_rx_port;
		u32 num_tx_port;
		int sido_input_src;
		enum wcd9335_sido_voltage sido_voltage;
		struct wcd_slim_codec_dai_data dai[NUM_CODEC_DAIS];
		struct snd_soc_component *component;
		int master_bias_users;
		int clk_mclk_users;
		int clk_rco_users;
		int sido_ccl_cnt;
		enum wcd_clock_type clk_type;
		struct wcd_clsh_ctrl *clsh_ctrl;
		u32 hph_mode;
		int prim_int_users[WCD9335_NUM_INTERPOLATORS];
		int comp_enabled[COMPANDER_MAX];
		int intr1;
		int reset_gpio;
		struct regulator_bulk_data supplies[WCD9335_MAX_SUPPLY];
		unsigned int rx_port_value;
		unsigned int tx_port_value;
		int hph_l_gain;
		int hph_r_gain;
		u32 rx_bias_count;
		int micb_ref[WCD9335_MAX_MICBIAS];
		int pullup_ref[WCD9335_MAX_MICBIAS];
		int dmic_0_1_clk_cnt;
		int dmic_2_3_clk_cnt;
		int dmic_4_5_clk_cnt;
		int dmic_sample_rate;
		int mad_dmic_sample_rate;
		int native_clk_users;
	} cocci_id/* sound/soc/codecs/wcd9335.c 304 */;
	struct wcd9335_slim_ch *cocci_id/* sound/soc/codecs/wcd9335.c 3000 */;
	unsigned short cocci_id/* sound/soc/codecs/wcd9335.c 2997 */;
	struct wcd_slim_codec_dai_data *cocci_id/* sound/soc/codecs/wcd9335.c 2993 */;
	struct wcd_slim_codec_dai_data {
		struct list_head slim_ch_list;
		struct slim_stream_config sconfig;
		struct slim_stream_runtime *sruntime;
	} cocci_id/* sound/soc/codecs/wcd9335.c 298 */;
	s32 *cocci_id/* sound/soc/codecs/wcd9335.c 2916 */;
	struct wcd9335_slim_ch {
		u32 ch_num;
		u16 port;
		u16 shift;
		struct list_head list;
	} cocci_id/* sound/soc/codecs/wcd9335.c 291 */;
	enum{MICB_PULLUP_ENABLE, MICB_PULLUP_DISABLE, MICB_ENABLE, MICB_DISABLE,} cocci_id/* sound/soc/codecs/wcd9335.c 284 */;
	enum{MIC_BIAS_1=1, MIC_BIAS_2, MIC_BIAS_3, MIC_BIAS_4,} cocci_id/* sound/soc/codecs/wcd9335.c 277 */;
	u8 cocci_id/* sound/soc/codecs/wcd9335.c 2734 */;
	u16 cocci_id/* sound/soc/codecs/wcd9335.c 2731 */;
	char *cocci_id/* sound/soc/codecs/wcd9335.c 2727 */;
	unsigned int cocci_id/* sound/soc/codecs/wcd9335.c 2726 */;
	enum wcd_clock_type{WCD_CLK_OFF, WCD_CLK_RCO, WCD_CLK_MCLK,} cocci_id/* sound/soc/codecs/wcd9335.c 271 */;
	enum{INTERP_EAR=0, INTERP_HPHL, INTERP_HPHR, INTERP_LO1, INTERP_LO2, INTERP_LO3, INTERP_LO4, INTERP_SPKR1, INTERP_SPKR2,} cocci_id/* sound/soc/codecs/wcd9335.c 259 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wcd9335.c 2576 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wcd9335.c 2573 */;
	int cocci_id/* sound/soc/codecs/wcd9335.c 2573 */;
	enum{INTn_1_MIX_INP_SEL_ZERO=0, INTn_1_MIX_INP_SEL_DEC0, INTn_1_MIX_INP_SEL_DEC1, INTn_1_MIX_INP_SEL_IIR0, INTn_1_MIX_INP_SEL_IIR1, INTn_1_MIX_INP_SEL_RX0, INTn_1_MIX_INP_SEL_RX1, INTn_1_MIX_INP_SEL_RX2, INTn_1_MIX_INP_SEL_RX3, INTn_1_MIX_INP_SEL_RX4, INTn_1_MIX_INP_SEL_RX5, INTn_1_MIX_INP_SEL_RX6, INTn_1_MIX_INP_SEL_RX7,} cocci_id/* sound/soc/codecs/wcd9335.c 242 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wcd9335.c 2377 */[];
	enum{INTn_2_INP_SEL_ZERO=0, INTn_2_INP_SEL_RX0, INTn_2_INP_SEL_RX1, INTn_2_INP_SEL_RX2, INTn_2_INP_SEL_RX3, INTn_2_INP_SEL_RX4, INTn_2_INP_SEL_RX5, INTn_2_INP_SEL_RX6, INTn_2_INP_SEL_RX7, INTn_2_INP_SEL_PROXIMITY,} cocci_id/* sound/soc/codecs/wcd9335.c 229 */;
	enum{COMPANDER_1, COMPANDER_2, COMPANDER_3, COMPANDER_4, COMPANDER_5, COMPANDER_6, COMPANDER_7, COMPANDER_8, COMPANDER_MAX,} cocci_id/* sound/soc/codecs/wcd9335.c 217 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wcd9335.c 2068 */[];
	struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wcd9335.c 2061 */;
	enum{AIF1_PB=0, AIF1_CAP, AIF2_PB, AIF2_CAP, AIF3_PB, AIF3_CAP, AIF4_PB, NUM_CODEC_DAIS,} cocci_id/* sound/soc/codecs/wcd9335.c 206 */;
	unsigned int *cocci_id/* sound/soc/codecs/wcd9335.c 2015 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wcd9335.c 2014 */;
	enum wcd9335_sido_voltage{SIDO_VOLTAGE_SVS_MV=950, SIDO_VOLTAGE_NOMINAL_MV=1100,} cocci_id/* sound/soc/codecs/wcd9335.c 201 */;
	enum{SIDO_SOURCE_INTERNAL=0, SIDO_SOURCE_RCO_BG,} cocci_id/* sound/soc/codecs/wcd9335.c 196 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wcd9335.c 1867 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wcd9335.c 1866 */;
	enum{WCD9335_TX0=0, WCD9335_TX1, WCD9335_TX2, WCD9335_TX3, WCD9335_TX4, WCD9335_TX5, WCD9335_TX6, WCD9335_TX7, WCD9335_TX8, WCD9335_TX9, WCD9335_TX10, WCD9335_TX11, WCD9335_TX12, WCD9335_TX13, WCD9335_TX14, WCD9335_TX15, WCD9335_TX_MAX,} cocci_id/* sound/soc/codecs/wcd9335.c 176 */;
	struct slim_stream_config *cocci_id/* sound/soc/codecs/wcd9335.c 1713 */;
	struct list_head *cocci_id/* sound/soc/codecs/wcd9335.c 1712 */;
	enum{WCD9335_RX0=0, WCD9335_RX1, WCD9335_RX2, WCD9335_RX3, WCD9335_RX4, WCD9335_RX5, WCD9335_RX6, WCD9335_RX7, WCD9335_RX8, WCD9335_RX9, WCD9335_RX10, WCD9335_RX11, WCD9335_RX12, WCD9335_RX_MAX,} cocci_id/* sound/soc/codecs/wcd9335.c 159 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wcd9335.c 1392 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wcd9335.c 1373 */[WCD9335_RX_MAX];
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/wcd9335.c 1343 */;
	u32 cocci_id/* sound/soc/codecs/wcd9335.c 1287 */;
	struct snd_soc_dapm_update *cocci_id/* sound/soc/codecs/wcd9335.c 1286 */;
	struct soc_enum *cocci_id/* sound/soc/codecs/wcd9335.c 1285 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wcd9335.c 1272 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wcd9335.c 1270 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wcd9335.c 1269 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wcd9335.c 1080 */;
}