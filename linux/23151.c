cocci_test_suite() {
	bool cocci_id/* sound/soc/meson/axg-tdm-formatter.c 73 */;
	struct axg_tdm_iface *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 380 */;
	unsigned long cocci_id/* sound/soc/meson/axg-tdm-formatter.c 34 */;
	unsigned int cocci_id/* sound/soc/meson/axg-tdm-formatter.c 31 */;
	struct regmap *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 29 */;
	void __iomem *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 256 */;
	const struct axg_tdm_formatter_driver *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 254 */;
	struct device *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 253 */;
	struct platform_device *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 251 */;
	struct snd_soc_component *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 229 */;
	struct snd_kcontrol *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 226 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 225 */;
	void cocci_id/* sound/soc/meson/axg-tdm-formatter.c 166 */;
	struct axg_tdm_formatter {
		struct list_head list;
		struct axg_tdm_stream *stream;
		const struct axg_tdm_formatter_driver *drv;
		struct clk *pclk;
		struct clk *sclk;
		struct clk *lrclk;
		struct clk *sclk_sel;
		struct clk *lrclk_sel;
		struct reset_control *reset;
		bool enabled;
		struct regmap *map;
	} cocci_id/* sound/soc/meson/axg-tdm-formatter.c 15 */;
	struct axg_tdm_stream *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 146 */;
	struct axg_tdm_formatter *cocci_id/* sound/soc/meson/axg-tdm-formatter.c 144 */;
	int cocci_id/* sound/soc/meson/axg-tdm-formatter.c 144 */;
}
