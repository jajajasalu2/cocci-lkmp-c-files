cocci_test_suite() {
	unsigned int *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 77 */;
	struct rk_pdm_dev *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 76 */;
	unsigned int cocci_id/* sound/soc/rockchip/rockchip_pdm.c 76 */;
	struct platform_driver cocci_id/* sound/soc/rockchip/rockchip_pdm.c 610 */;
	struct rk_pdm_ds_ratio cocci_id/* sound/soc/rockchip/rockchip_pdm.c 58 */[];
	struct rk_pdm_clkref cocci_id/* sound/soc/rockchip/rockchip_pdm.c 50 */[];
	enum rk_pdm_version cocci_id/* sound/soc/rockchip/rockchip_pdm.c 490 */;
	void __iomem *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 481 */;
	struct resource *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 480 */;
	const struct of_device_id *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 478 */;
	struct platform_device *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 476 */;
	void *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 465 */;
	const struct of_device_id cocci_id/* sound/soc/rockchip/rockchip_pdm.c 463 */[];
	struct rk_pdm_ds_ratio {
		unsigned int ratio;
		unsigned int sr;
	} cocci_id/* sound/soc/rockchip/rockchip_pdm.c 45 */;
	const struct regmap_config cocci_id/* sound/soc/rockchip/rockchip_pdm.c 449 */;
	const struct reg_default cocci_id/* sound/soc/rockchip/rockchip_pdm.c 443 */[];
	struct device *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 433 */;
	struct rk_pdm_clkref {
		unsigned int sr;
		unsigned int clk;
		unsigned int clk_out;
	} cocci_id/* sound/soc/rockchip/rockchip_pdm.c 39 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/rockchip/rockchip_pdm.c 344 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/rockchip/rockchip_pdm.c 331 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/rockchip/rockchip_pdm.c 319 */;
	struct snd_soc_dai *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 310 */;
	int cocci_id/* sound/soc/rockchip/rockchip_pdm.c 310 */;
	struct rk_pdm_dev {
		struct device *dev;
		struct clk *clk;
		struct clk *hclk;
		struct regmap *regmap;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
		struct reset_control *reset;
		enum rk_pdm_version version;
	} cocci_id/* sound/soc/rockchip/rockchip_pdm.c 29 */;
	enum rk_pdm_version{RK_PDM_RK3229, RK_PDM_RK3308,} cocci_id/* sound/soc/rockchip/rockchip_pdm.c 24 */;
	bool cocci_id/* sound/soc/rockchip/rockchip_pdm.c 154 */;
	unsigned long cocci_id/* sound/soc/rockchip/rockchip_pdm.c 153 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 146 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/rockchip/rockchip_pdm.c 145 */;
	void cocci_id/* sound/soc/rockchip/rockchip_pdm.c 129 */;
}
