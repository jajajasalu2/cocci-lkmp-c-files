cocci_test_suite() {
	unsigned int cocci_id/* drivers/mtd/maps/pcmciamtd.c 87 */;
	struct resource *cocci_id/* drivers/mtd/maps/pcmciamtd.c 86 */;
	void __exit cocci_id/* drivers/mtd/maps/pcmciamtd.c 747 */;
	int __init cocci_id/* drivers/mtd/maps/pcmciamtd.c 729 */;
	struct pcmcia_driver cocci_id/* drivers/mtd/maps/pcmciamtd.c 718 */;
	const struct pcmcia_device_id cocci_id/* drivers/mtd/maps/pcmciamtd.c 687 */[];
	char cocci_id/* drivers/mtd/maps/pcmciamtd.c 593 */;
	char *cocci_id/* drivers/mtd/maps/pcmciamtd.c 469 */[];
	struct mtd_info *cocci_id/* drivers/mtd/maps/pcmciamtd.c 466 */;
	int cocci_id/* drivers/mtd/maps/pcmciamtd.c 46 */;
	struct pcmciamtd_dev *cocci_id/* drivers/mtd/maps/pcmciamtd.c 415 */;
	struct pcmcia_device *cocci_id/* drivers/mtd/maps/pcmciamtd.c 415 */;
	int *cocci_id/* drivers/mtd/maps/pcmciamtd.c 415 */;
	void cocci_id/* drivers/mtd/maps/pcmciamtd.c 415 */;
	cistpl_device_geo_t *cocci_id/* drivers/mtd/maps/pcmciamtd.c 395 */;
	cistpl_device_t *cocci_id/* drivers/mtd/maps/pcmciamtd.c 371 */;
	cisparse_t cocci_id/* drivers/mtd/maps/pcmciamtd.c 370 */;
	tuple_t *cocci_id/* drivers/mtd/maps/pcmciamtd.c 366 */;
	cistpl_jedec_t *cocci_id/* drivers/mtd/maps/pcmciamtd.c 357 */;
	cistpl_format_t *cocci_id/* drivers/mtd/maps/pcmciamtd.c 341 */;
	struct pcmciamtd_dev {
		struct pcmcia_device *p_dev;
		void __iomem *win_base;
		unsigned int win_size;
		unsigned int offset;
		struct map_info pcmcia_map;
		struct mtd_info *mtd_info;
		int vpp;
		char mtd_name[sizeof(struct cistpl_vers_1_t)];
	} cocci_id/* drivers/mtd/maps/pcmciamtd.c 31 */;
	const void *cocci_id/* drivers/mtd/maps/pcmciamtd.c 285 */;
	void __iomem *cocci_id/* drivers/mtd/maps/pcmciamtd.c 249 */;
	struct map_info *cocci_id/* drivers/mtd/maps/pcmciamtd.c 247 */;
	void *cocci_id/* drivers/mtd/maps/pcmciamtd.c 247 */;
	unsigned long cocci_id/* drivers/mtd/maps/pcmciamtd.c 247 */;
	ssize_t cocci_id/* drivers/mtd/maps/pcmciamtd.c 247 */;
	map_word cocci_id/* drivers/mtd/maps/pcmciamtd.c 232 */;
}
