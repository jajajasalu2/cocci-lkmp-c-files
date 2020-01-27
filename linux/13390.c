cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/tuners/it913x.c 442 */;
	const struct platform_device_id cocci_id/* drivers/media/tuners/it913x.c 435 */[];
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/it913x.c 402 */;
	struct it913x_dev cocci_id/* drivers/media/tuners/it913x.c 387 */;
	char *cocci_id/* drivers/media/tuners/it913x.c 385 */;
	const struct platform_device_id *cocci_id/* drivers/media/tuners/it913x.c 383 */;
	struct it913x_platform_data *cocci_id/* drivers/media/tuners/it913x.c 380 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/it913x.c 366 */;
	unsigned long cocci_id/* drivers/media/tuners/it913x.c 34 */;
	const u8 cocci_id/* drivers/media/tuners/it913x.c 33 */[];
	u8 cocci_id/* drivers/media/tuners/it913x.c 32 */;
	unsigned int cocci_id/* drivers/media/tuners/it913x.c 31 */;
	struct platform_device *cocci_id/* drivers/media/tuners/it913x.c 29 */;
	struct it913x_dev *cocci_id/* drivers/media/tuners/it913x.c 28 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/it913x.c 26 */;
	int cocci_id/* drivers/media/tuners/it913x.c 26 */;
	u16 cocci_id/* drivers/media/tuners/it913x.c 214 */;
	u32 cocci_id/* drivers/media/tuners/it913x.c 213 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/it913x.c 210 */;
	struct it913x_dev {
		struct platform_device *pdev;
		struct regmap *regmap;
		struct dvb_frontend *fe;
		u8 chip_ver:2;
		u8 role:2;
		u16 xtal;
		u8 fdiv;
		u8 clk_mode;
		u32 fn_min;
		bool active;
	} cocci_id/* drivers/media/tuners/it913x.c 13 */;
}
