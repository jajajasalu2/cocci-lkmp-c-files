cocci_test_suite() {
	size_t cocci_id/* drivers/base/regmap/regcache-lzo.c 44 */;
	struct regcache_lzo_ctx *cocci_id/* drivers/base/regmap/regcache-lzo.c 42 */;
	struct regcache_ops cocci_id/* drivers/base/regmap/regcache-lzo.c 360 */;
	struct regmap *cocci_id/* drivers/base/regmap/regcache-lzo.c 29 */;
	int cocci_id/* drivers/base/regmap/regcache-lzo.c 29 */;
	void *cocci_id/* drivers/base/regmap/regcache-lzo.c 234 */;
	unsigned int *cocci_id/* drivers/base/regmap/regcache-lzo.c 229 */;
	struct regcache_lzo_ctx **cocci_id/* drivers/base/regmap/regcache-lzo.c 200 */;
	struct regcache_lzo_ctx {
		void *wmem;
		void *dst;
		const void *src;
		size_t src_len;
		size_t dst_len;
		size_t decompressed_size;
		unsigned long *sync_bmp;
		int sync_bmp_nbits;
	} cocci_id/* drivers/base/regmap/regcache-lzo.c 17 */;
	int cocci_id/* drivers/base/regmap/regcache-lzo.c 15 */(struct regmap *map);
	unsigned long *cocci_id/* drivers/base/regmap/regcache-lzo.c 133 */;
	const char *cocci_id/* drivers/base/regmap/regcache-lzo.c 132 */;
	unsigned int cocci_id/* drivers/base/regmap/regcache-lzo.c 105 */;
}
