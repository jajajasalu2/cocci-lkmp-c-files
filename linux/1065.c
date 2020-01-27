cocci_test_suite() {
	unsigned int cocci_id/* drivers/mtd/maps/sa1100-flash.c 70 */;
	unsigned long cocci_id/* drivers/mtd/maps/sa1100-flash.c 69 */;
	struct resource *cocci_id/* drivers/mtd/maps/sa1100-flash.c 67 */;
	struct sa_subdev_info *cocci_id/* drivers/mtd/maps/sa1100-flash.c 58 */;
	struct sa_subdev_info cocci_id/* drivers/mtd/maps/sa1100-flash.c 44 */;
	struct map_info *cocci_id/* drivers/mtd/maps/sa1100-flash.c 42 */;
	struct sa_info {
		struct mtd_info *mtd;
		int num_subdev;
		struct sa_subdev_info subdev[0];
	} cocci_id/* drivers/mtd/maps/sa1100-flash.c 34 */;
	struct platform_driver cocci_id/* drivers/mtd/maps/sa1100-flash.c 299 */;
	struct sa_subdev_info {
		char name[16];
		struct map_info map;
		struct mtd_info *mtd;
		struct flash_platform_data *plat;
	} cocci_id/* drivers/mtd/maps/sa1100-flash.c 27 */;
	struct platform_device *cocci_id/* drivers/mtd/maps/sa1100-flash.c 261 */;
	const char *const cocci_id/* drivers/mtd/maps/sa1100-flash.c 259 */[];
	struct mtd_info **cocci_id/* drivers/mtd/maps/sa1100-flash.c 226 */;
	struct sa_info cocci_id/* drivers/mtd/maps/sa1100-flash.c 171 */;
	int cocci_id/* drivers/mtd/maps/sa1100-flash.c 137 */;
	struct sa_info *cocci_id/* drivers/mtd/maps/sa1100-flash.c 135 */;
	struct flash_platform_data *cocci_id/* drivers/mtd/maps/sa1100-flash.c 135 */;
	void cocci_id/* drivers/mtd/maps/sa1100-flash.c 135 */;
	unsigned cocci_id/* drivers/mtd/maps/sa1100-flash.c 124 */;
}
