cocci_test_suite() {
	size_t cocci_id/* net/wireless/lib80211_crypt_ccmp.c 98 */;
	const u8 *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 95 */;
	u8 *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 95 */;
	const struct ieee80211_hdr *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 94 */;
	int cocci_id/* net/wireless/lib80211_crypt_ccmp.c 94 */;
	void cocci_id/* net/wireless/lib80211_crypt_ccmp.c 86 */;
	void __exit cocci_id/* net/wireless/lib80211_crypt_ccmp.c 442 */;
	int __init cocci_id/* net/wireless/lib80211_crypt_ccmp.c 437 */;
	struct lib80211_crypto_ops cocci_id/* net/wireless/lib80211_crypt_ccmp.c 421 */;
	struct seq_file *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 402 */;
	struct lib80211_ccmp_data {
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
	} cocci_id/* net/wireless/lib80211_crypt_ccmp.c 39 */;
	struct crypto_aead *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 351 */;
	u8 cocci_id/* net/wireless/lib80211_crypt_ccmp.c 263 */[6];
	u8 cocci_id/* net/wireless/lib80211_crypt_ccmp.c 262 */[AES_BLOCK_LEN];
	struct scatterlist cocci_id/* net/wireless/lib80211_crypt_ccmp.c 260 */[2];
	struct aead_request *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 259 */;
	struct ieee80211_hdr *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 258 */;
	u8 cocci_id/* net/wireless/lib80211_crypt_ccmp.c 257 */;
	struct lib80211_ccmp_data *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 256 */;
	struct sk_buff *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 254 */;
	void *cocci_id/* net/wireless/lib80211_crypt_ccmp.c 254 */;
	s32 cocci_id/* net/wireless/lib80211_crypt_ccmp.c 248 */;
	u32 cocci_id/* net/wireless/lib80211_crypt_ccmp.c 239 */;
}
