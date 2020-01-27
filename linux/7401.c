cocci_test_suite() {
	struct omap_overlay *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 997 */;
	struct omap_overlay_manager *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 889 */;
	bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 883 */;
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 879 */;
	void *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 879 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 839 */(void *data,
									    u32 mask);
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 798 */;
	struct mgr_priv_data {
		bool user_info_dirty;
		struct omap_overlay_manager_info user_info;
		bool info_dirty;
		struct omap_overlay_manager_info info;
		bool shadow_info_dirty;
		bool busy;
		bool updating;
		bool enabled;
		bool extra_info_dirty;
		bool shadow_extra_info_dirty;
		struct omap_video_timings timings;
		struct dss_lcd_mgr_config lcd_config;
		void (*framedone_handler)(void *);
		void *framedone_handler_data;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 73 */;
	struct ovl_priv_data {
		bool user_info_dirty;
		struct omap_overlay_info user_info;
		bool info_dirty;
		struct omap_overlay_info info;
		bool shadow_info_dirty;
		bool extra_info_dirty;
		bool shadow_extra_info_dirty;
		bool enabled;
		u32 fifo_low,fifo_high;
		bool enabling;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 50 */;
	struct omap_overlay_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 203 */[MAX_DSS_OVERLAYS];
	struct omap_overlay_manager_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 201 */;
	struct omap_overlay_info *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 200 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1589 */;
	const struct dss_mgr_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1572 */;
	void (*cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1547 */)(void *);
	struct ovl_priv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 137 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 132 */;
	struct mgr_priv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 131 */;
	const int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 130 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 128 */;
	const struct dss_lcd_mgr_config *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1273 */;
	const struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1245 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 116 */(void);
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 1117 */;
	spinlock_t cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 111 */;
	struct {
		struct ovl_priv_data ovl_priv_data_array[MAX_DSS_OVERLAYS];
		struct mgr_priv_data mgr_priv_data_array[MAX_DSS_MANAGERS];
		bool irq_enabled;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/apply.c 103 */;
}
