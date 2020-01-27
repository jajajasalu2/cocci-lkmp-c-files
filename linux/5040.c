cocci_test_suite() {
	struct zorro_prod_info *cocci_id/* drivers/zorro/names.c 74 */;
	char *cocci_id/* drivers/zorro/names.c 62 */;
	int cocci_id/* drivers/zorro/names.c 61 */;
	const struct zorro_manuf_info *cocci_id/* drivers/zorro/names.c 60 */;
	struct zorro_dev *cocci_id/* drivers/zorro/names.c 58 */;
	void __init cocci_id/* drivers/zorro/names.c 58 */;
	struct zorro_manuf_info __initdata cocci_id/* drivers/zorro/names.c 49 */[];
	char cocci_id/* drivers/zorro/names.c 38 */[]__initdata;
	struct zorro_manuf_info {
		__u16 manuf;
		unsigned short nr;
		const char *name;
		struct zorro_prod_info *prods;
	} cocci_id/* drivers/zorro/names.c 25 */;
	struct zorro_prod_info {
		__u16 prod;
		unsigned short seen;
		const char *name;
	} cocci_id/* drivers/zorro/names.c 19 */;
}
