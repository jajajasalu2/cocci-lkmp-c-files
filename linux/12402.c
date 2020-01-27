cocci_test_suite() {
	const enum omap_display_type cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 986 */[];
	const struct dss_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 972 */;
	int (*cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 922 */)(struct seq_file *s,
								   void *data);
	const char *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 921 */;
	const struct file_operations cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 913 */;
	struct dss_debugfs_entry *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 908 */;
	struct inode *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 906 */;
	struct file *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 906 */;
	struct dss_debugfs_entry {
		struct dentry *dentry;
		int (*show_fn)(struct seq_file *s, void *data);
		void *data;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 900 */;
	struct dentry *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 884 */;
	const char *const cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 83 */[];
	struct clk *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 822 */;
	enum omap_dss_output_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 721 */;
	enum dss_hdmi_venc_clk_source_select cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 719 */;
	enum omap_dss_venc_type cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 697 */;
	struct dss_features {
		enum dss_model model;
		u8 fck_div_max;
		unsigned int fck_freq_max;
		u8 dss_fck_multiplier;
		const char *parent_clk_name;
		const enum omap_display_type *ports;
		int num_ports;
		const enum omap_dss_output_id *outputs;
		const struct dss_ops *ops;
		struct dss_reg_field dispc_clk_switch;
		bool has_lcd_clk_src;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 69 */;
	struct dss_ops {
		int (*dpi_select_source)(struct dss_device *dss, int port,
					 enum omap_channel channel);
		int (*select_lcd_source)(struct dss_device *dss,
					 enum omap_channel channel,
					 enum dss_clk_source clk_src);
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 61 */;
	dss_div_calc_func cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 599 */;
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 598 */;
	const enum dss_clk_source cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 533 */[];
	u8 cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 476 */;
	const u8 cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 470 */[];
	struct dss_reg {
		u16 idx;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 40 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 380 */;
	enum omap_channel cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 178 */;
	enum dss_clk_source cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 177 */;
	void __exit cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1626 */;
	int __init cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1620 */;
	struct platform_driver *const cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1603 */[];
	struct platform_driver cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1590 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1585 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1541 */;
	unsigned int cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 148 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 146 */;
	struct dss_pll *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 146 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 146 */;
	struct resource *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1399 */;
	struct component_match *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1398 */;
	const struct soc_device_attribute *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1397 */;
	u32 cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1362 */;
	struct component_match **cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1344 */;
	struct device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1342 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1342 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1342 */;
	const struct component_master_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1331 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1298 */;
	struct dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1297 */;
	const struct soc_device_attribute cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1288 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1278 */[];
	struct regulator *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1217 */;
	struct device_node *cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1157 */;
	const struct dss_features cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1126 */;
	const enum omap_dss_output_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 1018 */[];
	const struct dss_reg cocci_id/* drivers/gpu/drm/omapdrm/dss/dss.c 100 */;
}
