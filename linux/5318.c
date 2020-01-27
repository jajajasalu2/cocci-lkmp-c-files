cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/ata/sata_gemini.c 428 */;
	const struct of_device_id cocci_id/* drivers/ata/sata_gemini.c 421 */[];
	struct sata_gemini {
		struct device *dev;
		void __iomem *base;
		enum gemini_muxmode muxmode;
		bool ide_pins;
		bool sata_bridge;
		struct reset_control *sata0_reset;
		struct reset_control *sata1_reset;
		struct clk *sata0_pclk;
		struct clk *sata1_pclk;
	} cocci_id/* drivers/ata/sata_gemini.c 36 */;
	struct resource *cocci_id/* drivers/ata/sata_gemini.c 321 */;
	struct regmap *cocci_id/* drivers/ata/sata_gemini.c 320 */;
	struct device_node *cocci_id/* drivers/ata/sata_gemini.c 318 */;
	struct platform_device *cocci_id/* drivers/ata/sata_gemini.c 315 */;
	struct pinctrl_state *cocci_id/* drivers/ata/sata_gemini.c 295 */;
	struct pinctrl *cocci_id/* drivers/ata/sata_gemini.c 294 */;
	u32 cocci_id/* drivers/ata/sata_gemini.c 240 */;
	struct device *cocci_id/* drivers/ata/sata_gemini.c 239 */;
	int cocci_id/* drivers/ata/sata_gemini.c 237 */;
	unsigned int cocci_id/* drivers/ata/sata_gemini.c 226 */;
	struct clk *cocci_id/* drivers/ata/sata_gemini.c 197 */;
	unsigned long cocci_id/* drivers/ata/sata_gemini.c 154 */;
	enum gemini_muxmode cocci_id/* drivers/ata/sata_gemini.c 145 */;
	bool cocci_id/* drivers/ata/sata_gemini.c 126 */;
	struct sata_gemini *cocci_id/* drivers/ata/sata_gemini.c 126 */;
	void cocci_id/* drivers/ata/sata_gemini.c 118 */;
}
