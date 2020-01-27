cocci_test_suite() {
	enum lp8788_ldo_id{DLDO1, DLDO2, DLDO3, DLDO4, DLDO5, DLDO6, DLDO7, DLDO8, DLDO9, DLDO10, DLDO11, DLDO12, ALDO1, ALDO2, ALDO3, ALDO4, ALDO5, ALDO6, ALDO7, ALDO8, ALDO9, ALDO10,} cocci_id/* drivers/regulator/lp8788-ldo.c 85 */;
	void __exit cocci_id/* drivers/regulator/lp8788-ldo.c 628 */;
	void cocci_id/* drivers/regulator/lp8788-ldo.c 628 */;
	int __init cocci_id/* drivers/regulator/lp8788-ldo.c 622 */;
	struct platform_driver *const cocci_id/* drivers/regulator/lp8788-ldo.c 617 */[];
	struct platform_driver cocci_id/* drivers/regulator/lp8788-ldo.c 610 */;
	struct lp8788_ldo cocci_id/* drivers/regulator/lp8788-ldo.c 579 */;
	struct regulator_dev *cocci_id/* drivers/regulator/lp8788-ldo.c 576 */;
	struct regulator_config cocci_id/* drivers/regulator/lp8788-ldo.c 575 */;
	struct lp8788_ldo *cocci_id/* drivers/regulator/lp8788-ldo.c 574 */;
	struct lp8788 *cocci_id/* drivers/regulator/lp8788-ldo.c 572 */;
	struct platform_device *cocci_id/* drivers/regulator/lp8788-ldo.c 570 */;
	int cocci_id/* drivers/regulator/lp8788-ldo.c 570 */;
	const u8 cocci_id/* drivers/regulator/lp8788-ldo.c 467 */[];
	enum lp8788_ext_ldo_en_id cocci_id/* drivers/regulator/lp8788-ldo.c 466 */;
	enum lp8788_ldo_id cocci_id/* drivers/regulator/lp8788-ldo.c 463 */;
	const struct regulator_desc cocci_id/* drivers/regulator/lp8788-ldo.c 342 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/lp8788-ldo.c 177 */;
	u8 cocci_id/* drivers/regulator/lp8788-ldo.c 157 */;
	const int cocci_id/* drivers/regulator/lp8788-ldo.c 146 */[];
	struct lp8788_ldo {
		struct lp8788 *lp;
		struct regulator_desc *desc;
		struct regulator_dev *regulator;
		struct gpio_desc *ena_gpiod;
	} cocci_id/* drivers/regulator/lp8788-ldo.c 110 */;
}
