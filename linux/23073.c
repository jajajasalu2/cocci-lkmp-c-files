cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 83 */[];
	enum AUD_PCM_EN{AUD_PCM_EN_DISABLE=0, AUD_PCM_EN_ENABLE=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 77 */;
	enum AUD_BCLK_OUT_INV{AUD_BCLK_OUT_INV_NO_INVERSE=0, AUD_BCLK_OUT_INV_INVERSE=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 72 */;
	enum AUD_PCM_FMT{AUD_PCM_FMT_I2S=0, AUD_PCM_FMT_EIAJ=1, AUD_PCM_FMT_PCM_MODE_A=2, AUD_PCM_FMT_PCM_MODE_B=3,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 65 */;
	enum AUD_PCM_MODE{AUD_PCM_MODE_PCM_MODE_8K=0, AUD_PCM_MODE_PCM_MODE_16K=1, AUD_PCM_MODE_PCM_MODE_32K=2, AUD_PCM_MODE_PCM_MODE_48K=3,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 58 */;
	enum AUD_PCM_WLEN{AUD_PCM_WLEN_PCM_32_BCK_CYCLES=0, AUD_PCM_WLEN_PCM_64_BCK_CYCLES=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 53 */;
	enum AUD_PCM_CLOCK_SOURCE{AUD_PCM_CLOCK_MASTER_MODE=0, AUD_PCM_CLOCK_SLAVE_MODE=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 48 */;
	enum AUD_PCM_AFIFO_SRC{AUD_PCM_AFIFO_ASRC=0, AUD_PCM_AFIFO_AFIFO=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 41 */;
	enum AUD_BT_MODE{AUD_BT_MODE_DUAL_MIC_ON_TX=0, AUD_BT_MODE_SINGLE_MIC_ON_TX=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 36 */;
	struct mtk_base_afe_dai *cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 301 */;
	struct mtk_base_afe *cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 299 */;
	int cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 299 */;
	enum AUD_PCM_SYNC_TYPE{AUD_PCM_ONE_BCK_CYCLE_SYNC=0, AUD_PCM_EXTENDED_BCK_CYCLE_SYNC=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 29 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 254 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 240 */;
	enum AUD_EXT_MODEM{AUD_EXT_MODEM_SELECT_INTERNAL=0, AUD_EXT_MODEM_SELECT_EXTERNAL=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 24 */;
	enum AUD_VBT_16K_MODE{AUD_VBT_16K_MODE_DISABLE=0, AUD_VBT_16K_MODE_ENABLE=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 19 */;
	unsigned int cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 186 */;
	struct snd_soc_dai *cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 183 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 182 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 181 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 154 */[];
	enum AUD_TX_LCH_RPT{AUD_TX_LCH_RPT_NO_REPEAT=0, AUD_TX_LCH_RPT_REPEAT=1,} cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 14 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/mediatek/mt8183/mt8183-dai-pcm.c 121 */[];
}
