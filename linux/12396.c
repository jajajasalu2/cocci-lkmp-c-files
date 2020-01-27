cocci_test_suite() {
	const struct csc_coef_rgb2yuv cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 910 */;
	const struct csc_coef_yuv2rgb cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 902 */;
	const enum omap_plane_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 881 */;
	const struct csc_coef_rgb2yuv *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 879 */;
	const struct csc_coef_yuv2rgb *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 863 */;
	struct csc_coef_rgb2yuv {
		int yr,yg,yb,cbr,cbg,cbb,crr,crg,crb;
		bool full_range;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 856 */;
	struct csc_coef_yuv2rgb {
		int ry,rcb,rcr,gy,gcb,gcr,by,bcb,bcr;
		bool full_range;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 851 */;
	struct dispc_features {
		u8 sw_start;
		u8 fp_start;
		u8 bp_start;
		u16 sw_max;
		u16 vp_max;
		u16 hp_max;
		u8 mgr_width_start;
		u8 mgr_height_start;
		u16 mgr_width_max;
		u16 mgr_height_max;
		unsigned long max_lcd_pclk;
		unsigned long max_tv_pclk;
		unsigned int max_downscale;
		unsigned int max_line_width;
		unsigned int min_pcd;
		int (*calc_scaling)(struct dispc_device *dispc,
				    unsigned long pclk, unsigned long lclk,
				    const struct videomode *vm, u16 width,
				    u16 height, u16 out_width, u16 out_height,
				    u32 fourcc, bool *five_taps,
				    int *x_predecim, int *y_predecim,
				    int *decim_x, int *decim_y, u16 pos_x,
				    unsigned long *core_clk, bool mem_to_mem);
		unsigned long (*calc_core_clk)(unsigned long pclk, u16 width,
					       u16 height, u16 out_width,
					       u16 out_height,
					       bool mem_to_mem);
		u8 num_fifos;
		const enum dispc_feature_id *features;
		unsigned int num_features;
		const struct dss_reg_field *reg_fields;
		const unsigned int num_reg_fields;
		const enum omap_overlay_caps *overlay_caps;
		const u32 **supported_color_modes;
		const u32 *supported_scaler_color_modes;
		unsigned int num_mgrs;
		unsigned int num_ovls;
		unsigned int buffer_size_unit;
		unsigned int burst_size_unit;
		bool gfx_fifo_workaround:1;
		bool no_framedone_tv:1;
		bool mstandby_workaround:1;
		bool set_max_preload:1;
		bool last_pixel_inc_missing:1;
		bool supports_sync_align:1;
		bool has_writeback:1;
		bool supports_double_pixel:1;
		bool reverse_ilace_field_order:1;
		bool has_gamma_table:1;
		bool has_gamma_i734_bug:1;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 84 */;
	const struct dispc_coef *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 804 */;
	enum dispc_feature_id{FEAT_LCDENABLEPOL, FEAT_LCDENABLESIGNAL, FEAT_PCKFREEENABLE, FEAT_FUNCGATED, FEAT_MGR_LCD2, FEAT_MGR_LCD3, FEAT_LINEBUFFERSPLIT, FEAT_ROWREPEATENABLE, FEAT_RESIZECONF, FEAT_CORE_CLK_DIV, FEAT_HANDLE_UV_SEPARATE, FEAT_ATTR2, FEAT_CPR, FEAT_PRELOAD, FEAT_FIR_COEF_V, FEAT_ALPHA_FIXED_ZORDER, FEAT_ALPHA_FREE_ZORDER, FEAT_FIFO_MERGE, FEAT_OMAP3_DSI_FIFO_BUG, FEAT_BURST_2D, FEAT_MFLAG,} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 58 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4942 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4937 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4879 */;
	struct device_node *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4775 */;
	struct resource *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4774 */;
	struct dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4770 */;
	const struct soc_device_attribute *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4769 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4768 */;
	struct device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4766 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4766 */;
	const struct soc_device_attribute cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4757 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4748 */[];
	const struct dispc_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4706 */;
	struct dss_lcd_mgr_config cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4651 */;
	struct omap_overlay_info cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4650 */;
	struct i734_buf {
		size_t size;
		dma_addr_t paddr;
		void *vaddr;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4612 */;
	const struct dispc_errata_i734_data {
		struct videomode vm;
		struct omap_overlay_info ovli;
		struct omap_overlay_manager_info mgri;
		struct dss_lcd_mgr_config lcd_conf;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4565 */;
	irq_handler_t cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4504 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4494 */;
	enum omap_burst_size{BURST_SIZE_X2=0, BURST_SIZE_X4=1, BURST_SIZE_X8=2,} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 44 */;
	const struct dispc_features cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4380 */;
	const u32 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4231 */[];
	const u32 *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4133 */[];
	const enum omap_overlay_caps cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4067 */[];
	enum dispc_feature_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 404 */;
	const struct dss_reg_field cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 4037 */[];
	const enum dispc_feature_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3994 */[];
	u8 *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 394 */;
	enum dispc_feat_reg_field cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 393 */;
	u32 *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3903 */;
	const struct dispc_gamma_desc *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3902 */;
	struct dispc_device cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 39 */;
	uint cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3853 */;
	const struct drm_color_lut *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3848 */;
	const struct drm_color_lut cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3841 */[];
	const struct dispc_clock_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3731 */;
	const struct dispc_reg_field *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 369 */;
	dispc_div_calc_func cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3671 */;
	enum mgr_reg_fields cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 367 */;
	struct dispc_clock_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3656 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 354 */(struct dispc_device *dispc,
								   u32 mask);
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 351 */(struct dispc_device *dispc,
									    enum omap_plane_id plane);
	const char **cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3471 */;
	const char *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3458 */[];
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 344 */(struct dispc_device *dispc,
									    enum omap_channel channel);
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 343 */(struct dispc_device *dispc);
	enum dss_clk_source cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3420 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3418 */;
	struct dss_pll *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3297 */;
	int *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3278 */;
	struct videomode cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3219 */;
	enum display_flags cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3202 */;
	const int cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3183 */[];
	u32 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3128 */;
	const struct videomode *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3126 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3124 */;
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3091 */;
	enum omap_channel cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3090 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3076 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3075 */;
	struct dispc_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3075 */;
	u16 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3069 */;
	const struct dss_lcd_mgr_config *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3052 */;
	enum dss_io_pad_mode cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 3015 */;
	const struct omap_overlay_manager_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2973 */;
	enum omap_dss_trans_key_type cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2944 */;
	enum omap_dss_load_mode cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2930 */;
	const u8 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2801 */;
	enum dss_writeback_channel cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2795 */;
	const struct omap_dss_writeback_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2793 */;
	const struct omap_overlay_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2767 */;
	const u32 *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2504 */;
	bool *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2489 */;
	enum omap_overlay_caps cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2485 */;
	enum omap_plane_id cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2483 */;
	const struct {
		const char *name;
		u32 vsync_irq;
		u32 framedone_irq;
		u32 sync_lost_irq;
		struct dispc_gamma_desc gamma;
		struct dispc_reg_field reg_desc[DISPC_MGR_FLD_NUM];
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 240 */[];
	struct dispc_gamma_desc {
		u32 len;
		u32 bits;
		u16 reg;
		bool has_index;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 233 */;
	unsigned long *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2286 */;
	struct dispc_reg_field {
		u16 reg;
		u8 high;
		u8 low;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 227 */;
	unsigned int cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2237 */;
	u64 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2191 */;
	enum dispc_feat_reg_field{FEAT_REG_FIRHINC, FEAT_REG_FIRVINC, FEAT_REG_FIFOHIGHTHRESHOLD, FEAT_REG_FIFOLOWTHRESHOLD, FEAT_REG_FIFOSIZE, FEAT_REG_HORIZONTALACCU, FEAT_REG_VERTICALACCU,} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 217 */;
	const u8 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2138 */[3];
	const int cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2136 */;
	u8 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2090 */;
	enum omap_dss_rotation_type cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2090 */;
	s32 *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2089 */;
	unsigned int *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 2088 */;
	enum mgr_reg_fields{DISPC_MGR_FLD_ENABLE, DISPC_MGR_FLD_STNTFT, DISPC_MGR_FLD_GO, DISPC_MGR_FLD_TFTDATALINES, DISPC_MGR_FLD_STALLMODE, DISPC_MGR_FLD_TCKENABLE, DISPC_MGR_FLD_TCKSELECTION, DISPC_MGR_FLD_CPR, DISPC_MGR_FLD_FIFOHANDCHECK, DISPC_MGR_FLD_NUM,} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 202 */;
	enum omap_color_component{DISPC_COLOR_COMPONENT_RGB_Y=1 << 0, DISPC_COLOR_COMPONENT_UV=1 << 1,} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 190 */;
	const struct drm_format_info *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1880 */;
	const struct accu cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1746 */[4];
	const struct accu *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1743 */;
	struct accu {
		s8 h0_m,h0_n;
		s8 h1_m,h1_n;
		s8 v0_m,v0_n;
		s8 v1_m,v1_n;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1736 */;
	enum omap_color_component cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1631 */;
	struct dispc_device {
		struct platform_device *pdev;
		void __iomem *base;
		struct dss_device *dss;
		struct dss_debugfs_entry *debugfs;
		int irq;
		irq_handler_t user_handler;
		void *user_data;
		unsigned long core_clk_rate;
		unsigned long tv_pclk_rate;
		u32 fifo_size[DISPC_MAX_NR_FIFOS];
		int fifo_assignment[DISPC_MAX_NR_FIFOS];
		bool ctx_valid;
		u32 ctx[DISPC_SZ_REGS / sizeof(u32)];
		u32 *gamma_table[DISPC_MAX_CHANNEL_GAMMA];
		const struct dispc_features *feat;
		bool is_enabled;
		struct regmap *syscon_pol;
		u32 syscon_pol_offset;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 159 */;
	const bool cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1413 */;
	const unsigned int cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1339 */[];
	const struct omap_dss_cpr_coefs *cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1303 */;
	enum omap_burst_size cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1241 */;
	s32 cocci_id/* drivers/gpu/drm/omapdrm/dss/dispc.c 1038 */;
}
