cocci_test_suite() {
	enum{DAC_GAIN_0DB=0, DAC_GAIN_0P2DB, DAC_GAIN_0P4DB, DAC_GAIN_0P6DB, DAC_GAIN_0P8DB, DAC_GAIN_M0P2DB, DAC_GAIN_M0P4DB, DAC_GAIN_M0P6DB,} cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 95 */;
	enum wcd_clsh_mode cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 526 */;
	enum wcd_clsh_event cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 524 */;
	bool cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 471 */;
	struct wcd_clsh_ctrl *cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 470 */;
	int cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 470 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 158 */;
	void cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 154 */;
	struct wcd_clsh_ctrl {
		int state;
		int mode;
		int flyback_users;
		int buck_users;
		int clsh_users;
		int codec_version;
		struct snd_soc_component *comp;
	} cocci_id/* sound/soc/codecs/wcd-clsh-v2.c 12 */;
}
