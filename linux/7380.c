cocci_test_suite() {
	s32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 826 */;
	const struct color_conv_coef cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 709 */;
	const struct color_conv_coef *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 690 */;
	const struct dispc_coef *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 647 */;
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
		int (*calc_scaling)(unsigned long pclk, unsigned long lclk,
				    const struct omap_video_timings *mgr_timings,
				    u16 width, u16 height, u16 out_width,
				    u16 out_height,
				    enum omap_color_mode color_mode,
				    bool *five_taps, int *x_predecim,
				    int *y_predecim, int *decim_x,
				    int *decim_y, u16 pos_x,
				    unsigned long *core_clk, bool mem_to_mem);
		unsigned long (*calc_core_clk)(unsigned long pclk, u16 width,
					       u16 height, u16 out_width,
					       u16 out_height,
					       bool mem_to_mem);
		u8 num_fifos;
		bool gfx_fifo_workaround:1;
		bool no_framedone_tv:1;
		bool mstandby_workaround:1;
		bool set_max_preload:1;
		bool last_pixel_inc_missing:1;
		bool supports_sync_align:1;
		bool has_writeback:1;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 54 */;
	enum omap_burst_size{BURST_SIZE_X2=0, BURST_SIZE_X4=1, BURST_SIZE_X8=2,} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 42 */;
	int __init cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4198 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4187 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4178 */[];
	const struct dev_pm_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4173 */;
	const struct component_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4123 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4047 */;
	struct resource *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4046 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4043 */;
	struct device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4041 */;
	void *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4041 */;
	irq_handler_t cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 4007 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3999 */;
	const struct dispc_features *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3970 */;
	const struct dispc_features cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3863 */;
	const struct dispc_clock_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3764 */;
	unsigned cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3712 */;
	dispc_div_calc_func cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3705 */;
	struct dispc_clock_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3690 */;
	const char **cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3509 */;
	const char *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3496 */[];
	enum omap_dss_clk_source cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3461 */;
	struct seq_file *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3457 */;
	struct dss_pll *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3312 */;
	int *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3301 */;
	struct omap_video_timings cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3250 */;
	const int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3225 */[];
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3140 */;
	enum omap_dss_signal_edge cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3135 */;
	enum omap_dss_signal_level cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3133 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3131 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3100 */;
	enum omap_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3099 */;
	bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3086 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3086 */;
	u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3080 */;
	const struct dss_lcd_mgr_config *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3063 */;
	enum dss_io_pad_mode cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 3028 */;
	const struct omap_overlay_manager_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2989 */;
	enum omap_dss_trans_key_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2963 */;
	enum omap_dss_load_mode cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2951 */;
	const u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2815 */;
	const struct omap_dss_writeback_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2808 */;
	const struct dispc_reg_field cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 263 */;
	enum mgr_reg_fields cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 261 */;
	const u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 256 */;
	const struct omap_overlay_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2547 */;
	enum omap_plane cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2546 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 249 */(enum omap_plane plane);
	enum omap_dss_rotation_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2466 */;
	bool *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2464 */;
	enum omap_overlay_caps cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2461 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 245 */(enum omap_channel channel);
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 244 */(void);
	struct color_conv_coef {
		int ry,rcr,rcb,gy,gcr,gcb,by,bcr,bcb;
		int full_range;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 238 */;
	unsigned long *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2289 */;
	unsigned int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2243 */;
	u64 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2197 */;
	enum omap_color_mode cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2194 */;
	const struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2192 */;
	const u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2146 */[3];
	const int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 2144 */;
	s32 *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1946 */;
	unsigned *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1945 */;
	u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1940 */;
	const struct {
		const char *name;
		u32 vsync_irq;
		u32 framedone_irq;
		u32 sync_lost_irq;
		struct dispc_reg_field reg_desc[DISPC_MGR_FLD_NUM];
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 161 */[];
	struct dispc_reg_field {
		u16 reg;
		u8 high;
		u8 low;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 155 */;
	const struct accu cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1506 */[4];
	const struct accu *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1503 */;
	struct accu {
		s8 h0_m,h0_n;
		s8 h1_m,h1_n;
		s8 v0_m,v0_n;
		s8 v1_m,v1_n;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1496 */;
	enum mgr_reg_fields{DISPC_MGR_FLD_ENABLE, DISPC_MGR_FLD_STNTFT, DISPC_MGR_FLD_GO, DISPC_MGR_FLD_TFTDATALINES, DISPC_MGR_FLD_STALLMODE, DISPC_MGR_FLD_TCKENABLE, DISPC_MGR_FLD_TCKSELECTION, DISPC_MGR_FLD_CPR, DISPC_MGR_FLD_FIFOHANDCHECK, DISPC_MGR_FLD_NUM,} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 141 */;
	enum omap_color_component cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1404 */;
	enum omap_color_component{DISPC_COLOR_COMPONENT_RGB_Y=1 << 0, DISPC_COLOR_COMPONENT_UV=1 << 1,} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 129 */;
	u32 *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1280 */;
	const bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1196 */;
	const unsigned cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1123 */[];
	const struct omap_dss_cpr_coefs *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1090 */;
	enum omap_burst_size cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1039 */;
	enum dss_writeback_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 1031 */;
	struct {
		struct platform_device *pdev;
		void __iomem *base;
		int irq;
		irq_handler_t user_handler;
		void *user_data;
		unsigned long core_clk_rate;
		unsigned long tv_pclk_rate;
		u32 fifo_size[DISPC_MAX_NR_FIFOS];
		int fifo_assignment[DISPC_MAX_NR_FIFOS];
		bool ctx_valid;
		u32 ctx[DISPC_SZ_REGS / sizeof(u32)];
		const struct dispc_features *feat;
		bool is_enabled;
		struct regmap *syscon_pol;
		u32 syscon_pol_offset;
		spinlock_t control_lock;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc.c 100 */;
}
