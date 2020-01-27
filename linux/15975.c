cocci_test_suite() {
	u8 *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 86 */;
	void __exit cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 283 */;
	void cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 283 */;
	int __init cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 278 */;
	struct ieee80211_crypto_ops cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 262 */;
	char *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 252 */;
	struct prism2_wep_data {
		u32 iv;
#define WEP_KEY_LEN 13
		u8 key[WEP_KEY_LEN + 1];
		u8 key_len;
		u8 key_idx;
		struct crypto_sync_skcipher *tx_tfm;
		struct crypto_sync_skcipher *rx_tfm;
	} cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 25 */;
	struct scatterlist cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 169 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 168 */[4];
	struct cb_desc *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 166 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 165 */;
	u8 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 164 */[WEP_KEY_LEN + 3];
	u32 cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 163 */;
	struct prism2_wep_data *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 162 */;
	struct sk_buff *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 160 */;
	void *cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 160 */;
	int cocci_id/* drivers/staging/rtl8192u/ieee80211/ieee80211_crypt_wep.c 160 */;
}
