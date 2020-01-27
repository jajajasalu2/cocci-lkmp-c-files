cocci_test_suite() {
	u16 cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 93 */;
	size_t cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 92 */;
	u8 *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 89 */;
	struct rtllib_hdr_4addr *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 88 */;
	int cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 88 */;
	void cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 78 */;
	void __exit cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 411 */;
	int __init cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 405 */;
	struct lib80211_crypto_ops cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 388 */;
	struct seq_file *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 375 */;
	struct crypto_aead *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 321 */;
	struct rtllib_ccmp_data {
		u8 key[CCMP_TK_LEN];
		int key_set;
		u8 tx_pn[CCMP_PN_LEN];
		u8 rx_pn[CCMP_PN_LEN];
		u32 dot11RSNAStatsCCMPFormatErrors;
		u32 dot11RSNAStatsCCMPReplays;
		u32 dot11RSNAStatsCCMPDecryptErrors;
		int key_idx;
		struct crypto_aead *tfm;
		u8 tx_aad[2 * AES_BLOCK_LEN];
		u8 rx_aad[2 * AES_BLOCK_LEN];
	} cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 30 */;
	u8 cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 277 */[AES_BLOCK_LEN];
	struct scatterlist cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 275 */[2];
	struct aead_request *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 274 */;
	u8 cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 229 */[6];
	struct cb_desc *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 227 */;
	u8 cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 225 */;
	struct rtllib_ccmp_data *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 224 */;
	struct sk_buff *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 222 */;
	void *cocci_id/* drivers/staging/rtl8192e/rtllib_crypt_ccmp.c 222 */;
}
