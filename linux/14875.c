cocci_test_suite() {
	struct tegra_sync_source_initdata cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 94 */[]__initdata;
	const char *const cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 84 */[];
	struct tegra_audio2x_clk_initdata {
		char *parent;
		char *gate_name;
		char *name_2x;
		char *div_name;
		int clk_id;
		int clk_num;
		u8 div_offset;
	} cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 61 */;
	struct tegra_audio_clk_initdata {
		char *gate_name;
		char *mux_name;
		u32 offset;
		int gate_clk_id;
		int mux_clk_id;
	} cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 44 */;
	struct tegra_sync_source_initdata {
		char *name;
		unsigned long rate;
		unsigned long max_rate;
		int clk_id;
	} cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 31 */;
	struct tegra_audio2x_clk_initdata *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 228 */;
	struct tegra_sync_source_initdata *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 203 */;
	int cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 170 */;
	struct clk **cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 169 */;
	struct clk *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 168 */;
	unsigned long cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 166 */;
	unsigned int cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 166 */;
	struct tegra_audio_clk_info *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 165 */;
	struct tegra_clk *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 164 */;
	void __iomem *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 163 */;
	void __init cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 163 */;
	const char *const *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 132 */;
	struct tegra_audio_clk_initdata *cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 130 */;
	struct tegra_audio2x_clk_initdata cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 119 */[];
	struct tegra_audio_clk_initdata cocci_id/* drivers/clk/tegra/clk-tegra-audio.c 104 */[];
}
