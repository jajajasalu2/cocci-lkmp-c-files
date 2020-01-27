cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 736 */;
	const struct of_device_id cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 729 */[];
	struct npe *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 685 */;
	struct resource *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 682 */;
	struct device *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 681 */;
	struct platform_device *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 678 */;
	int cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 678 */;
	unsigned cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 664 */;
	struct dl_codeblock *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 620 */;
	struct dl_codeblock cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 613 */;
	struct dl_block cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 597 */;
	struct dl_image *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 537 */;
	struct dl_image cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 533 */;
	struct dl_codeblock {
		u32 npe_addr;
		u32 size;
		u32 data[0];
	} *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 520 */;
	struct dl_image {
		u32 magic;
		u32 id;
		u32 size;
		union {
			u32 data[0];
			struct dl_block blocks[0];
		};
	} *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 510 */;
	struct dl_block {
		u32 type;
		u32 offset;
	} *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 505 */;
	const struct firmware *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 503 */;
	const char *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 501 */;
	u32 *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 446 */;
	void *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 444 */;
	const u32 *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 407 */;
	const void *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 405 */;
	u16 cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 264 */;
	u8 cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 253 */;
	int __must_check cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 209 */;
	u32 cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 186 */;
	void cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 186 */;
	struct npe cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 152 */[NPE_COUNT];
	struct {
		u32 reg,val;
	} cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 134 */[];
	const char *cocci_id/* drivers/soc/ixp4xx/ixp4xx-npe.c 122 */[];
}
