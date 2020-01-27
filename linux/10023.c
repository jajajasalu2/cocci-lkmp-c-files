cocci_test_suite() {
	const struct dblock *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 96 */;
	u32 cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 95 */;
	struct pdi {
		__le16 len;
		__le16 id;
		char data[0];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 87 */;
	struct pdr {
		__le32 id;
		__le32 addr;
		__le32 len;
		char next[0];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 75 */;
	struct dblock {
		__le32 addr;
		__le16 len;
		char data[0];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 64 */;
	struct pdi *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 436 */;
	struct pdr cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 403 */;
	struct dblock *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 268 */;
	size_t cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 253 */;
	void *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 238 */;
	struct pdi cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 234 */;
	const struct pdr *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 231 */;
	const struct pdi *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 230 */;
	const __le16 *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 226 */;
	const void *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 225 */;
	const char *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 224 */;
	struct hermes *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 223 */;
	int cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 223 */;
	struct pdr *cocci_id/* drivers/net/wireless/intersil/orinoco/hermes_dld.c 169 */;
}
