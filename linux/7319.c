cocci_test_suite() {
	struct platform_lcd cocci_id/* drivers/video/backlight/platform_lcd.c 91 */;
	struct device *cocci_id/* drivers/video/backlight/platform_lcd.c 76 */;
	struct platform_device *cocci_id/* drivers/video/backlight/platform_lcd.c 72 */;
	struct lcd_ops cocci_id/* drivers/video/backlight/platform_lcd.c 66 */;
	struct plat_lcd_data *cocci_id/* drivers/video/backlight/platform_lcd.c 58 */;
	struct fb_info *cocci_id/* drivers/video/backlight/platform_lcd.c 55 */;
	struct platform_lcd *cocci_id/* drivers/video/backlight/platform_lcd.c 36 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/platform_lcd.c 34 */;
	int cocci_id/* drivers/video/backlight/platform_lcd.c 34 */;
	struct platform_lcd {
		struct device *us;
		struct lcd_device *lcd;
		struct plat_lcd_data *pdata;
		unsigned int power;
		unsigned int suspended:1;
	} cocci_id/* drivers/video/backlight/platform_lcd.c 20 */;
	struct platform_driver cocci_id/* drivers/video/backlight/platform_lcd.c 144 */;
	const struct of_device_id cocci_id/* drivers/video/backlight/platform_lcd.c 137 */[];
}
