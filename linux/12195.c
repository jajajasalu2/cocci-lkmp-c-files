cocci_test_suite() {
	enum{AUTO=0, SPDIF, HDA,} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 97 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/tegra/hdmi.c 861 */[];
	struct tegra_hdmi cocci_id/* drivers/gpu/drm/tegra/hdmi.c 86 */;
	struct tegra_output *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 847 */;
	bool cocci_id/* drivers/gpu/drm/tegra/hdmi.c 845 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 845 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/tegra/hdmi.c 844 */;
	struct host1x_client *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 84 */;
	struct edid *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 834 */;
	struct tegra_hdmi *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 83 */;
	const struct tmds_config *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 812 */;
	u8 cocci_id/* drivers/gpu/drm/tegra/hdmi.c 777 */[10];
	struct hdmi_vendor_infoframe cocci_id/* drivers/gpu/drm/tegra/hdmi.c 776 */;
	size_t cocci_id/* drivers/gpu/drm/tegra/hdmi.c 753 */;
	ssize_t cocci_id/* drivers/gpu/drm/tegra/hdmi.c 729 */;
	u8 cocci_id/* drivers/gpu/drm/tegra/hdmi.c 728 */[14];
	struct hdmi_audio_infoframe cocci_id/* drivers/gpu/drm/tegra/hdmi.c 727 */;
	u8 cocci_id/* drivers/gpu/drm/tegra/hdmi.c 688 */[17];
	struct hdmi_avi_infoframe cocci_id/* drivers/gpu/drm/tegra/hdmi.c 687 */;
	const void *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 633 */;
	const u8 *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 622 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/hdmi.c 583 */;
	void cocci_id/* drivers/gpu/drm/tegra/hdmi.c 581 */;
	struct tegra_hdmi {
		struct host1x_client client;
		struct tegra_output output;
		struct device *dev;
		struct regulator *hdmi;
		struct regulator *pll;
		struct regulator *vdd;
		void __iomem *regs;
		unsigned int irq;
		struct clk *clk_parent;
		struct clk *clk;
		struct reset_control *rst;
		const struct tegra_hdmi_config *config;
		unsigned int audio_source;
		struct tegra_hda_format format;
		unsigned int pixel_clock;
		bool stereo;
		bool dvi;
		struct drm_info_list *debugfs_files;
	} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 55 */;
	struct tegra_hdmi_audio_config cocci_id/* drivers/gpu/drm/tegra/hdmi.c 465 */;
	const struct {
		unsigned int sample_rate;
		unsigned int offset;
	} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 441 */[];
	struct tegra_hdmi_config {
		const struct tmds_config *tmds;
		unsigned int num_tmds;
		unsigned long fuse_override_offset;
		u32 fuse_override_value;
		bool has_sor_io_peak_current;
		bool has_hda;
		bool has_hbr;
	} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 43 */;
	const unsigned int cocci_id/* drivers/gpu/drm/tegra/hdmi.c 414 */[];
	uint64_t cocci_id/* drivers/gpu/drm/tegra/hdmi.c 379 */;
	int64_t cocci_id/* drivers/gpu/drm/tegra/hdmi.c 371 */;
	const unsigned int cocci_id/* drivers/gpu/drm/tegra/hdmi.c 367 */;
	struct tegra_hdmi_audio_config *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 365 */;
	struct tmds_config {
		unsigned int pclk;
		u32 pll0;
		u32 pll1;
		u32 pe_current;
		u32 drive_current;
		u32 peak_current;
	} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 34 */;
	const struct tmds_config cocci_id/* drivers/gpu/drm/tegra/hdmi.c 205 */[];
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1749 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1745 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1721 */;
	struct resource *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1587 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1584 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1546 */;
	void *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1546 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1537 */[];
	const struct tegra_hdmi_config cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1517 */;
	const struct host1x_client_ops cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1492 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1427 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1419 */;
	struct tegra_dc *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1404 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1401 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1400 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1399 */;
	int cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1398 */;
	struct tegra_hdmi_audio_config {
		unsigned int n;
		unsigned int cts;
		unsigned int aval;
	} cocci_id/* drivers/gpu/drm/tegra/hdmi.c 120 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1139 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1133 */;
	long cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1122 */;
	struct clk *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1121 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1119 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1115 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1113 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1102 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1094 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1093 */;
	struct dentry *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1065 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1056 */[];
	struct drm_crtc *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1032 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1030 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/tegra/hdmi.c 1028 */;
}
