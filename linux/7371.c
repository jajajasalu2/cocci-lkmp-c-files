cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/mx3fb.c 925 */;
	struct scatterlist *cocci_id/* drivers/video/fbdev/mx3fb.c 801 */;
	struct idmac_video_param *cocci_id/* drivers/video/fbdev/mx3fb.c 800 */;
	struct idmac_channel *cocci_id/* drivers/video/fbdev/mx3fb.c 799 */;
	enum ipu_panel cocci_id/* drivers/video/fbdev/mx3fb.c 796 */;
	struct ipu_di_signal_cfg cocci_id/* drivers/video/fbdev/mx3fb.c 795 */;
	u32 cocci_id/* drivers/video/fbdev/mx3fb.c 794 */;
	bool cocci_id/* drivers/video/fbdev/mx3fb.c 792 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/mx3fb.c 775 */;
	struct idmac_tx_desc *cocci_id/* drivers/video/fbdev/mx3fb.c 758 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/mx3fb.c 740 */;
	int cocci_id/* drivers/video/fbdev/mx3fb.c 731 */(struct fb_info *fbi);
	int cocci_id/* drivers/video/fbdev/mx3fb.c 729 */(struct fb_info *fbi,
							  unsigned int mem_len,
							  bool lock);
	int cocci_id/* drivers/video/fbdev/mx3fb.c 728 */(int blank,
							  struct fb_info *fbi);
	uint32_t cocci_id/* drivers/video/fbdev/mx3fb.c 711 */;
	uint8_t cocci_id/* drivers/video/fbdev/mx3fb.c 703 */;
	enum ipu_channel cocci_id/* drivers/video/fbdev/mx3fb.c 632 */;
	const struct di_mapping *cocci_id/* drivers/video/fbdev/mx3fb.c 519 */;
	struct clk *cocci_id/* drivers/video/fbdev/mx3fb.c 518 */;
	uint16_t cocci_id/* drivers/video/fbdev/mx3fb.c 508 */;
	int16_t cocci_id/* drivers/video/fbdev/mx3fb.c 474 */;
	const struct di_mapping cocci_id/* drivers/video/fbdev/mx3fb.c 357 */[];
	struct di_mapping {
		uint32_t b0,b1,b2;
	} cocci_id/* drivers/video/fbdev/mx3fb.c 353 */;
	unsigned long cocci_id/* drivers/video/fbdev/mx3fb.c 341 */;
	const char *cocci_id/* drivers/video/fbdev/mx3fb.c 340 */;
	void cocci_id/* drivers/video/fbdev/mx3fb.c 337 */(void *);
	struct backlight_properties cocci_id/* drivers/video/fbdev/mx3fb.c 307 */;
	const struct backlight_ops cocci_id/* drivers/video/fbdev/mx3fb.c 300 */;
	struct backlight_device *cocci_id/* drivers/video/fbdev/mx3fb.c 276 */;
	u32 cocci_id/* drivers/video/fbdev/mx3fb.c 274 */(struct mx3fb_data *mx3fb);
	void cocci_id/* drivers/video/fbdev/mx3fb.c 273 */(struct mx3fb_data *mx3fb,
							   uint8_t value);
	struct mx3fb_info {
		int blank;
		enum ipu_channel ipu_ch;
		uint32_t cur_ipu_buf;
		u32 pseudo_palette[16];
		struct completion flip_cmpl;
		struct mutex mutex;
		struct mx3fb_data *mx3fb;
		struct idmac_channel *idmac_channel;
		struct dma_async_tx_descriptor *txd;
		dma_cookie_t cookie;
		struct scatterlist sg[2];
		struct fb_var_screeninfo cur_var;
	} cocci_id/* drivers/video/fbdev/mx3fb.c 255 */;
	struct dma_chan_request {
		struct mx3fb_data *mx3fb;
		enum ipu_channel id;
	} cocci_id/* drivers/video/fbdev/mx3fb.c 249 */;
	struct mx3fb_data {
		struct fb_info *fbi;
		int backlight_level;
		void __iomem *reg_base;
		spinlock_t lock;
		struct device *dev;
		struct backlight_device *bl;
		uint32_t h_start_width;
		uint32_t v_start_width;
		enum disp_data_mapping disp_data_fmt;
	} cocci_id/* drivers/video/fbdev/mx3fb.c 236 */;
	void __exit cocci_id/* drivers/video/fbdev/mx3fb.c 1691 */;
	int __init cocci_id/* drivers/video/fbdev/mx3fb.c 1680 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/mx3fb.c 1641 */;
	struct dma_chan_request cocci_id/* drivers/video/fbdev/mx3fb.c 1560 */;
	dma_cap_mask_t cocci_id/* drivers/video/fbdev/mx3fb.c 1558 */;
	struct resource *cocci_id/* drivers/video/fbdev/mx3fb.c 1556 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/mx3fb.c 1552 */;
	struct mx3fb_platform_data *cocci_id/* drivers/video/fbdev/mx3fb.c 1527 */;
	struct device *cocci_id/* drivers/video/fbdev/mx3fb.c 1526 */;
	struct dma_chan_request *cocci_id/* drivers/video/fbdev/mx3fb.c 1525 */;
	struct dma_chan *cocci_id/* drivers/video/fbdev/mx3fb.c 1523 */;
	void *cocci_id/* drivers/video/fbdev/mx3fb.c 1523 */;
	const struct fb_videomode *cocci_id/* drivers/video/fbdev/mx3fb.c 1433 */;
	struct mx3fb_info cocci_id/* drivers/video/fbdev/mx3fb.c 1399 */;
	struct fb_ops *cocci_id/* drivers/video/fbdev/mx3fb.c 1392 */;
	dma_addr_t cocci_id/* drivers/video/fbdev/mx3fb.c 1334 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/mx3fb.c 132 */[];
	pm_message_t cocci_id/* drivers/video/fbdev/mx3fb.c 1273 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/mx3fb.c 1252 */;
	struct ipu_di_signal_cfg {
		unsigned datamask_en:1;
		unsigned clksel_en:1;
		unsigned clkidle_en:1;
		unsigned data_pol:1;
		unsigned clk_pol:1;
		unsigned enable_pol:1;
		unsigned Hsync_pol:1;
		unsigned Vsync_pol:1;
	} cocci_id/* drivers/video/fbdev/mx3fb.c 121 */;
	enum ipu_panel{IPU_PANEL_SHARP_TFT, IPU_PANEL_TFT,} cocci_id/* drivers/video/fbdev/mx3fb.c 116 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/video/fbdev/mx3fb.c 1143 */;
	dma_cookie_t cocci_id/* drivers/video/fbdev/mx3fb.c 1140 */;
	off_t cocci_id/* drivers/video/fbdev/mx3fb.c 1139 */;
	char *cocci_id/* drivers/video/fbdev/mx3fb.c 1094 */;
	struct mx3fb_data *cocci_id/* drivers/video/fbdev/mx3fb.c 1074 */;
	struct mx3fb_info *cocci_id/* drivers/video/fbdev/mx3fb.c 1073 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/mx3fb.c 1071 */;
	int cocci_id/* drivers/video/fbdev/mx3fb.c 1071 */;
	void cocci_id/* drivers/video/fbdev/mx3fb.c 1071 */;
	u32 *cocci_id/* drivers/video/fbdev/mx3fb.c 1050 */;
	struct fb_bitfield *cocci_id/* drivers/video/fbdev/mx3fb.c 1018 */;
	unsigned int cocci_id/* drivers/video/fbdev/mx3fb.c 1018 */;
}
