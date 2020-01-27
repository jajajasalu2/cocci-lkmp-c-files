cocci_test_suite() {
	struct lcd_olinuxino *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 85 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 83 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 83 */;
	struct lcd_olinuxino cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 80 */;
	struct lcd_olinuxino {
		struct drm_panel panel;
		struct device *dev;
		struct i2c_client *client;
		struct mutex mutex;
		bool prepared;
		bool enabled;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct gpio_desc *enable_gpio;
		struct lcd_olinuxino_eeprom eeprom;
	} cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 62 */;
	struct lcd_olinuxino_eeprom {
		u32 header;
		u32 id;
		char revision[4];
		u32 serial;
		struct lcd_olinuxino_info info;
		u32 num_modes;
		u8 reserved[180];
		u32 checksum;
	}__attribute__((__packed__)) cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 51 */;
	struct lcd_olinuxino_info {
		char name[32];
		u32 width_mm;
		u32 height_mm;
		u32 bpc;
		u32 bus_format;
		u32 bus_flag;
	}__attribute__((__packed__)) cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 42 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 315 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 309 */[];
	struct lcd_olinuxino_mode {
		u32 pixelclock;
		u32 hactive;
		u32 hfp;
		u32 hbp;
		u32 hpw;
		u32 vactive;
		u32 vfp;
		u32 vbp;
		u32 vpw;
		u32 refresh;
		u32 flags;
	} cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 28 */;
	u8 *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 241 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 216 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 214 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 213 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 205 */;
	u32 cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 152 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 151 */;
	struct lcd_olinuxino_mode *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 150 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 149 */;
	struct lcd_olinuxino_info *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 148 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-olimex-lcd-olinuxino.c 147 */;
}
