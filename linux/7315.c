cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/video/backlight/as3711_bl.c 477 */;
	struct as3711_bl_supply cocci_id/* drivers/video/backlight/as3711_bl.c 44 */;
	unsigned int cocci_id/* drivers/video/backlight/as3711_bl.c 383 */;
	struct as3711_bl_data *cocci_id/* drivers/video/backlight/as3711_bl.c 382 */;
	struct as3711_bl_supply *cocci_id/* drivers/video/backlight/as3711_bl.c 381 */;
	struct as3711 *cocci_id/* drivers/video/backlight/as3711_bl.c 380 */;
	struct platform_device *cocci_id/* drivers/video/backlight/as3711_bl.c 377 */;
	struct as3711_bl_supply {
		struct as3711_bl_data su1;
		struct as3711_bl_data su2;
		const struct as3711_bl_pdata *pdata;
		struct as3711 *as3711;
	} cocci_id/* drivers/video/backlight/as3711_bl.c 33 */;
	struct device_node *cocci_id/* drivers/video/backlight/as3711_bl.c 260 */;
	struct as3711_bl_data {
		bool powered;
		enum as3711_bl_type type;
		int brightness;
		struct backlight_device *bl;
	} cocci_id/* drivers/video/backlight/as3711_bl.c 26 */;
	struct as3711_bl_pdata *cocci_id/* drivers/video/backlight/as3711_bl.c 259 */;
	struct device *cocci_id/* drivers/video/backlight/as3711_bl.c 257 */;
	int cocci_id/* drivers/video/backlight/as3711_bl.c 257 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/as3711_bl.c 232 */;
	enum as3711_bl_type{AS3711_BL_SU1, AS3711_BL_SU2,} cocci_id/* drivers/video/backlight/as3711_bl.c 21 */;
	u8 cocci_id/* drivers/video/backlight/as3711_bl.c 184 */;
	const struct as3711_bl_pdata *cocci_id/* drivers/video/backlight/as3711_bl.c 183 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/as3711_bl.c 175 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/as3711_bl.c 168 */;
}
