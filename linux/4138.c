cocci_test_suite() {
	struct mipi_phy_device_desc {
		int num_phys;
		int num_regmaps;
		const char *regmap_names[EXYNOS_MIPI_REGMAPS_NUM];
		struct exynos_mipi_phy_desc {
			enum exynos_mipi_phy_id coupled_phy_id;
			u32 enable_val;
			unsigned int enable_reg;
			enum exynos_mipi_phy_regmap_id enable_map;
			u32 resetn_val;
			unsigned int resetn_reg;
			enum exynos_mipi_phy_regmap_id resetn_map;
		} phys[EXYNOS_MIPI_PHYS_NUM];
	} cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 40 */;
	struct platform_driver cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 357 */;
	const struct of_device_id cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 342 */[];
	enum exynos_mipi_phy_regmap_id{EXYNOS_MIPI_REGMAP_PMU, EXYNOS_MIPI_REGMAP_DISP, EXYNOS_MIPI_REGMAP_CAM0, EXYNOS_MIPI_REGMAP_CAM1, EXYNOS_MIPI_REGMAPS_NUM,} cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 32 */;
	struct phy_provider *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 300 */;
	struct device_node *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 299 */;
	struct device *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 298 */;
	const struct mipi_phy_device_desc *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 296 */;
	struct platform_device *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 294 */;
	const struct phy_ops cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 288 */;
	struct of_phandle_args *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 278 */;
	struct video_phy_desc *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 271 */;
	struct phy *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 269 */;
	struct exynos_mipi_video_phy cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 259 */;
	struct regmap *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 231 */;
	struct exynos_mipi_video_phy *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 229 */;
	unsigned int cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 229 */;
	const struct exynos_mipi_phy_desc *cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 228 */;
	int cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 228 */;
	enum exynos_mipi_phy_id{EXYNOS_MIPI_PHY_ID_NONE=-1, EXYNOS_MIPI_PHY_ID_CSIS0, EXYNOS_MIPI_PHY_ID_DSIM0, EXYNOS_MIPI_PHY_ID_CSIS1, EXYNOS_MIPI_PHY_ID_DSIM1, EXYNOS_MIPI_PHY_ID_CSIS2, EXYNOS_MIPI_PHYS_NUM,} cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 22 */;
	struct exynos_mipi_video_phy {
		struct regmap *regmaps[EXYNOS_MIPI_REGMAPS_NUM];
		int num_phys;
		struct video_phy_desc {
			struct phy *phy;
			unsigned int index;
			const struct exynos_mipi_phy_desc *data;
		} phys[EXYNOS_MIPI_PHYS_NUM];
		spinlock_t slock;
	} cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 217 */;
	const struct mipi_phy_device_desc cocci_id/* drivers/phy/samsung/phy-exynos-mipi-video.c 100 */;
}
