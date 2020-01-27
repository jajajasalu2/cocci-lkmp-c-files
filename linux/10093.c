cocci_test_suite() {
	struct ppp_mppe_state {
		struct arc4_ctx arc4;
		struct shash_desc *sha1;
		unsigned char *sha1_digest;
		unsigned char master_key[MPPE_MAX_KEY_LEN];
		unsigned char session_key[MPPE_MAX_KEY_LEN];
		unsigned keylen;
		unsigned char bits;
		unsigned ccount;
		unsigned stateful;
		int discard;
		int sanity_errors;
		int unit;
		int debug;
		struct compstat stats;
	} cocci_id/* drivers/net/ppp/ppp_mppe.c 91 */;
	struct sha_pad *cocci_id/* drivers/net/ppp/ppp_mppe.c 80 */;
	struct sha_pad {
		unsigned char sha_pad1[SHA1_PAD_SIZE];
		unsigned char sha_pad2[SHA1_PAD_SIZE];
	} cocci_id/* drivers/net/ppp/ppp_mppe.c 76 */;
	void __exit cocci_id/* drivers/net/ppp/ppp_mppe.c 681 */;
	struct sha_pad cocci_id/* drivers/net/ppp/ppp_mppe.c 666 */;
	int __init cocci_id/* drivers/net/ppp/ppp_mppe.c 660 */;
	struct compressor cocci_id/* drivers/net/ppp/ppp_mppe.c 633 */;
	unsigned cocci_id/* drivers/net/ppp/ppp_mppe.c 438 */;
	struct compstat *cocci_id/* drivers/net/ppp/ppp_mppe.c 406 */;
	unsigned char cocci_id/* drivers/net/ppp/ppp_mppe.c 254 */;
	const char *cocci_id/* drivers/net/ppp/ppp_mppe.c 251 */;
	unsigned int cocci_id/* drivers/net/ppp/ppp_mppe.c 175 */;
	struct crypto_shash *cocci_id/* drivers/net/ppp/ppp_mppe.c 174 */;
	unsigned char *cocci_id/* drivers/net/ppp/ppp_mppe.c 171 */;
	void *cocci_id/* drivers/net/ppp/ppp_mppe.c 171 */;
	int cocci_id/* drivers/net/ppp/ppp_mppe.c 171 */;
	struct ppp_mppe_state *cocci_id/* drivers/net/ppp/ppp_mppe.c 131 */;
	void cocci_id/* drivers/net/ppp/ppp_mppe.c 131 */;
}
