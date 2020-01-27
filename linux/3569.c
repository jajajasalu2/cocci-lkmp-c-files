cocci_test_suite() {
	int cocci_id/* drivers/mmc/core/sdio_cis.c 98 */(struct mmc_card *,
							 struct sdio_func *,
							 const unsigned char *,
							 unsigned);
	const unsigned int cocci_id/* drivers/mmc/core/sdio_cis.c 94 */[8];
	const unsigned char cocci_id/* drivers/mmc/core/sdio_cis.c 92 */[16];
	unsigned int cocci_id/* drivers/mmc/core/sdio_cis.c 73 */;
	const char **cocci_id/* drivers/mmc/core/sdio_cis.c 61 */;
	char *cocci_id/* drivers/mmc/core/sdio_cis.c 46 */;
	struct sdio_func_tuple *cocci_id/* drivers/mmc/core/sdio_cis.c 356 */;
	void cocci_id/* drivers/mmc/core/sdio_cis.c 354 */;
	char **cocci_id/* drivers/mmc/core/sdio_cis.c 27 */;
	const struct cis_tpl cocci_id/* drivers/mmc/core/sdio_cis.c 203 */[];
	const unsigned char *cocci_id/* drivers/mmc/core/sdio_cis.c 111 */;
	unsigned cocci_id/* drivers/mmc/core/sdio_cis.c 111 */;
	unsigned char cocci_id/* drivers/mmc/core/sdio_cis.c 110 */;
	const struct cis_tpl *cocci_id/* drivers/mmc/core/sdio_cis.c 109 */;
	const char *cocci_id/* drivers/mmc/core/sdio_cis.c 108 */;
	struct sdio_func *cocci_id/* drivers/mmc/core/sdio_cis.c 107 */;
	struct mmc_card *cocci_id/* drivers/mmc/core/sdio_cis.c 107 */;
	int cocci_id/* drivers/mmc/core/sdio_cis.c 107 */;
	struct cis_tpl {
		unsigned char code;
		unsigned char min_size;
		tpl_parse_t *parse;
	} cocci_id/* drivers/mmc/core/sdio_cis.c 101 */;
}
