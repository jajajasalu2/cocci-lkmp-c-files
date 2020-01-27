cocci_test_suite() {
	u16 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 97 */;
	size_t cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 96 */;
	u8 *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 93 */;
	struct rtl_80211_hdr_4addr *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 92 */;
	int cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 92 */;
	void cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 83 */;
	void __exit cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 416 */;
	int __init cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 411 */;
	struct ieee80211_crypto_ops cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 395 */;
	char *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 381 */;
	struct ieee80211_ccmp_data {
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
	} cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 35 */;
	struct crypto_aead *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 330 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 286 */[AES_BLOCK_LEN];
	struct scatterlist cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 284 */[2];
	struct aead_request *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 283 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 234 */[6];
	struct cb_desc *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 233 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 231 */;
	struct ieee80211_ccmp_data *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 230 */;
	struct sk_buff *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 228 */;
	void *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_ccmp.c 228 */;
}
