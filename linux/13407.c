cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/tuners/m88rs6000t.c 720 */;
	const struct i2c_device_id cocci_id/* drivers/media/tuners/m88rs6000t.c 714 */[];
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/m88rs6000t.c 691 */;
	struct m88rs6000t_config cocci_id/* drivers/media/tuners/m88rs6000t.c 623 */;
	const struct m88rs6000t_reg_val cocci_id/* drivers/media/tuners/m88rs6000t.c 588 */[];
	const struct regmap_config cocci_id/* drivers/media/tuners/m88rs6000t.c 584 */;
	struct m88rs6000t_config *cocci_id/* drivers/media/tuners/m88rs6000t.c 579 */;
	const struct i2c_device_id *cocci_id/* drivers/media/tuners/m88rs6000t.c 577 */;
	struct i2c_client *cocci_id/* drivers/media/tuners/m88rs6000t.c 576 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/m88rs6000t.c 561 */;
	u32 cocci_id/* drivers/media/tuners/m88rs6000t.c 498 */[14];
	u32 cocci_id/* drivers/media/tuners/m88rs6000t.c 496 */[12];
	u32 cocci_id/* drivers/media/tuners/m88rs6000t.c 494 */[13];
	u32 cocci_id/* drivers/media/tuners/m88rs6000t.c 490 */;
	u16 cocci_id/* drivers/media/tuners/m88rs6000t.c 489 */;
	unsigned int cocci_id/* drivers/media/tuners/m88rs6000t.c 487 */;
	u16 *cocci_id/* drivers/media/tuners/m88rs6000t.c 484 */;
	struct m88rs6000t_dev *cocci_id/* drivers/media/tuners/m88rs6000t.c 465 */;
	u32 *cocci_id/* drivers/media/tuners/m88rs6000t.c 463 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/m88rs6000t.c 463 */;
	int cocci_id/* drivers/media/tuners/m88rs6000t.c 463 */;
	u8 cocci_id/* drivers/media/tuners/m88rs6000t.c 376 */;
	s32 cocci_id/* drivers/media/tuners/m88rs6000t.c 373 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/m88rs6000t.c 27 */;
	struct m88rs6000t_reg_val {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/tuners/m88rs6000t.c 18 */;
	struct m88rs6000t_dev {
		struct m88rs6000t_config cfg;
		struct i2c_client *client;
		struct regmap *regmap;
		u32 frequency_khz;
	} cocci_id/* drivers/media/tuners/m88rs6000t.c 11 */;
}
