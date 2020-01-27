cocci_test_suite() {
	u8 cocci_id/* net/wireless/lib80211_crypt_wep.c 85 */;
	u32 cocci_id/* net/wireless/lib80211_crypt_wep.c 67 */;
	struct lib80211_wep_data *cocci_id/* net/wireless/lib80211_crypt_wep.c 66 */;
	u8 *cocci_id/* net/wireless/lib80211_crypt_wep.c 64 */;
	void *cocci_id/* net/wireless/lib80211_crypt_wep.c 64 */;
	struct sk_buff *cocci_id/* net/wireless/lib80211_crypt_wep.c 63 */;
	int cocci_id/* net/wireless/lib80211_crypt_wep.c 63 */;
	struct lib80211_wep_data {
		u32 iv;
#define WEP_KEY_LEN 13
		u8 key[WEP_KEY_LEN + 1];
		u8 key_len;
		u8 key_idx;
		struct arc4_ctx tx_ctx;
		struct arc4_ctx rx_ctx;
	} cocci_id/* net/wireless/lib80211_crypt_wep.c 29 */;
	void __exit cocci_id/* net/wireless/lib80211_crypt_wep.c 250 */;
	void cocci_id/* net/wireless/lib80211_crypt_wep.c 250 */;
	int __init cocci_id/* net/wireless/lib80211_crypt_wep.c 245 */;
	struct lib80211_crypto_ops cocci_id/* net/wireless/lib80211_crypt_wep.c 229 */;
	struct seq_file *cocci_id/* net/wireless/lib80211_crypt_wep.c 223 */;
	u8 cocci_id/* net/wireless/lib80211_crypt_wep.c 155 */[WEP_KEY_LEN + 3];
}
