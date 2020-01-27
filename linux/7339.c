cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 583 */;
	struct spi_transfer *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 58 */;
	struct spi_message cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 57 */;
	struct spi_device *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 548 */;
	const u8 *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 54 */;
	u8 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 514 */[3];
	struct mipid_platform_data *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 513 */;
	const struct lcd_panel cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 486 */;
	struct lcd_panel *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 478 */;
	struct omapfb_device *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 460 */;
	u32 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 447 */;
	struct mipid_device cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 391 */;
	struct work_struct *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 389 */;
	struct mipid_device {
		int enabled;
		int revision;
		unsigned int saved_bklight_level;
		unsigned long hw_guard_end;
		unsigned long hw_guard_wait;
		struct omapfb_device *fbdev;
		struct spi_device *spi;
		struct mutex mutex;
		struct lcd_panel panel;
		struct delayed_work esd_work;
		void (*esd_check)(struct mipid_device *m);
	} cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 36 */;
	u8 *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 353 */;
	const struct {
		int cmd;
		int wlen;
		u16 wbuf[3];
	} *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 337 */;
	u8 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 336 */[2];
	u8 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 319 */;
	u16 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 290 */;
	const u16 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 274 */[4];
	unsigned int cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 217 */;
	long cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 164 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 162 */;
	struct mipid_device *cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 154 */;
	int cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 154 */;
	void cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 154 */;
	u16 cocci_id/* drivers/video/fbdev/omap/lcd_mipid.c 148 */[];
}
