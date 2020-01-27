cocci_test_suite() {
	struct sdi_clk_calc_ctx cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 74 */;
	struct dispc_clock_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 71 */;
	unsigned long *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 70 */;
	struct sdi_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 69 */;
	struct sdi_clk_calc_ctx *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 48 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 46 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 45 */;
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 45 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 45 */;
	struct sdi_clk_calc_ctx {
		struct sdi_device *sdi;
		unsigned long pck_min,pck_max;
		unsigned long fck;
		struct dispc_clock_info dispc_cinfo;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 37 */;
	struct sdi_device cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 35 */;
	u32 cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 294 */;
	struct device_node *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 290 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 289 */;
	struct dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 289 */;
	const struct omap_dss_device_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 246 */;
	struct sdi_device {
		struct platform_device *pdev;
		struct dss_device *dss;
		bool update_enabled;
		struct regulator *vdds_sdi_reg;
		struct dss_lcd_mgr_config mgr_config;
		unsigned long pixelclock;
		int datapairs;
		struct omap_dss_device output;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 21 */;
	struct dispc_clock_info cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 209 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 206 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 205 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 198 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/dss/sdi.c 108 */;
}
