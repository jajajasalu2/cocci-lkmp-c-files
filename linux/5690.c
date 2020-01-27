cocci_test_suite() {
	struct img_ascii_lcd_config cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 84 */;
	u32 *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 75 */;
	u64 *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 72 */;
	ulong cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 69 */;
	struct img_ascii_lcd_ctx *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 67 */;
	void cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 67 */;
	struct img_ascii_lcd_ctx {
		struct platform_device *pdev;
		union {
			void __iomem *base;
			struct regmap *regmap;
		};
		u32 offset;
		const struct img_ascii_lcd_config *cfg;
		char *message;
		unsigned int message_len;
		unsigned int scroll_pos;
		unsigned int scroll_rate;
		struct timer_list timer;
		char curr[]__aligned(8);
	} cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 47 */;
	struct platform_driver cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 431 */;
	struct resource *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 359 */;
	const struct img_ascii_lcd_config *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 357 */;
	const struct of_device_id *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 356 */;
	struct platform_device *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 354 */;
	size_t cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 334 */;
	struct device_attribute *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 314 */;
	struct device *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 314 */;
	char *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 271 */;
	struct img_ascii_lcd_config {
		unsigned int num_chars;
		bool external_regmap;
		void (*update)(struct img_ascii_lcd_ctx *ctx);
	} cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 27 */;
	const char *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 269 */;
	ssize_t cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 269 */;
	int cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 268 */;
	unsigned int cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 231 */;
	struct timer_list *cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 228 */;
	const struct of_device_id cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 213 */[];
	struct img_ascii_lcd_ctx cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 19 */;
	enum{SEAD3_REG_LCD_CTRL=0x00,

#define

SEAD3_REG_LCD_CTRL_SETDRAM

BIT

(

7

)


 SEAD3_REG_LCD_DATA=0x08, SEAD3_REG_CPLD_STATUS=0x10,

#define

SEAD3_REG_CPLD_STATUS_BUSY

BIT

(

0

)


 SEAD3_REG_CPLD_DATA=0x18,

#define

SEAD3_REG_CPLD_DATA_BUSY

BIT

(

7

)


} cocci_id/* drivers/auxdisplay/img-ascii-lcd.c 119 */;
}
