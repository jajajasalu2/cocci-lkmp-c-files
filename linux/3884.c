cocci_test_suite() {
	u32 cocci_id/* drivers/crypto/stm32/stm32-crc32.c 88 */;
	struct crypto_shash *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 83 */;
	struct stm32_crc_ctx *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 67 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 65 */;
	int cocci_id/* drivers/crypto/stm32/stm32-crc32.c 65 */;
	struct stm32_crc_desc_ctx {
		u32 partial;
		struct stm32_crc *crc;
	} cocci_id/* drivers/crypto/stm32/stm32-crc32.c 60 */;
	struct stm32_crc_ctx {
		u32 key;
		u32 poly;
	} cocci_id/* drivers/crypto/stm32/stm32-crc32.c 55 */;
	struct stm32_crc_list cocci_id/* drivers/crypto/stm32/stm32-crc32.c 50 */;
	struct stm32_crc_list {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/stm32/stm32-crc32.c 45 */;
	struct platform_driver cocci_id/* drivers/crypto/stm32/stm32-crc32.c 371 */;
	const struct of_device_id cocci_id/* drivers/crypto/stm32/stm32-crc32.c 365 */[];
	struct stm32_crc {
		struct list_head list;
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		u8 pending_data[sizeof(u32)];
		size_t nb_pending_bytes;
	} cocci_id/* drivers/crypto/stm32/stm32-crc32.c 36 */;
	struct device *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 256 */;
	struct platform_device *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 254 */;
	struct stm32_crc_ctx cocci_id/* drivers/crypto/stm32/stm32-crc32.c 225 */;
	struct stm32_crc_desc_ctx cocci_id/* drivers/crypto/stm32/stm32-crc32.c 216 */;
	struct shash_alg cocci_id/* drivers/crypto/stm32/stm32-crc32.c 207 */[];
	u8 *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 202 */;
	unsigned int cocci_id/* drivers/crypto/stm32/stm32-crc32.c 202 */;
	const u8 *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 201 */;
	struct shash_desc *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 201 */;
	struct stm32_crc_desc_ctx *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 184 */;
	u32 *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 132 */;
	struct stm32_crc *cocci_id/* drivers/crypto/stm32/stm32-crc32.c 101 */;
}
