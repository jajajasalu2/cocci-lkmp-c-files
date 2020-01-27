cocci_test_suite() {
	enum omapdss_version cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 894 */;
	enum omap_dss_rotation_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 889 */;
	enum dss_feat_reg_field cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 881 */;
	u8 *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 881 */;
	const int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 871 */;
	const enum dss_feat_id *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 870 */;
	enum dss_feat_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 867 */;
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 856 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 856 */;
	enum omap_dss_clk_source cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 851 */;
	const char *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 851 */;
	enum omap_color_mode cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 845 */;
	bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 844 */;
	enum omap_plane cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 844 */;
	enum omap_overlay_caps cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 839 */;
	enum omap_dss_output_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 828 */;
	enum omap_display_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 823 */;
	enum omap_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 823 */;
	enum dss_range_param cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 818 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 818 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 801 */;
	const struct dss_reg_field cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 76 */[];
	const struct omap_dss_features cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 655 */;
	const struct omap_dss_features *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 52 */;
	const enum dss_feat_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 482 */[];
	const struct dss_param_range cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 429 */[];
	const char *constcocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 381 */[];
	const enum omap_overlay_caps cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 317 */[];
	struct omap_dss_features {
		const struct dss_reg_field *reg_fields;
		const int num_reg_fields;
		const enum dss_feat_id *features;
		const int num_features;
		const int num_mgrs;
		const int num_ovls;
		const enum omap_display_type *supported_displays;
		const enum omap_dss_output_id *supported_outputs;
		const enum omap_color_mode *supported_color_modes;
		const enum omap_overlay_caps *overlay_caps;
		const char *const*clksrc_names;
		const struct dss_param_range *dss_params;
		const enum omap_dss_rotation_type supported_rotation_types;
		const u32 buffer_size_unit;
		const u32 burst_size_unit;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 29 */;
	struct dss_param_range {
		int min,max;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 25 */;
	const enum omap_color_mode cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 225 */[];
	struct dss_reg_field {
		u8 start,end;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 21 */;
	const enum omap_dss_output_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 191 */[];
	const enum omap_display_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss_features.c 135 */[];
}
