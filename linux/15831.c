cocci_test_suite() {
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 964 */[12];
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 926 */(u8 *key,
									     u8 *data,
									     u8 *ciphertext);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 923 */(u8 *in,
									     u8 *out);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 922 */(u8 *key,
									     sint round);
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 921 */(u8 a);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 919 */(u8 *a,
									     u8 *b,
									     u8 *out);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 910 */(u8 *ctr_preload,
									     sint a4_exists,
									     sint qc_exists,
									     u8 *mpdu,
									     u8 *pn_vector,
									     sint c,
									     uint frtype);
	struct arc4context {
		u32 x;
		u32 y;
		u8 state[256];
	} cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 91 */;
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 904 */(u8 *mic_header2,
									     u8 *mpdu,
									     sint a4_exists,
									     sint qc_exists);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 898 */(u8 *mic_header1,
									     sint header_length,
									     u8 *mpdu,
									     uint frtype);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 889 */(u8 *mic_header1,
									     sint qc_exists,
									     sint a4_exists,
									     u8 *mpdu,
									     uint payload_length,
									     u8 *pn_vector,
									     uint frtype);
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 888 */(u8 *ina,
									     u8 *inb,
									     u8 *out);
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 849 */[256];
	unsigned short *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 807 */;
	union pn48 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 744 */;
	struct arc4context cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 740 */;
	__le32 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 706 */;
	u16 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 611 */[6];
	u16 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 608 */;
	const u16 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 608 */;
	unsigned short cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 580 */;
	const u8 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 560 */;
	u16 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 560 */;
	const unsigned short cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 470 */[2][256];
	struct mic_data cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 418 */;
	struct mic_data *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 395 */;
	long cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 338 */;
	s32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 325 */;
	const char *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2375 */;
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2283 */[AES_BLOCK_SIZE];
	u8 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2280 */[];
	size_t *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2280 */;
	int cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2249 */;
	void *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2241 */;
	u32 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2231 */;
	size_t cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2229 */;
	u32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2182 */[];
	unsigned char cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 216 */[4];
	const u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2151 */[];
	const u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2117 */[256];
	const u32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 2051 */[256];
	u64 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1938 */;
	__le32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 193 */;
	unsigned char *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1928 */;
	__le64 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1918 */;
	__le16 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1917 */;
	struct mlme_ext_priv *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1916 */;
	struct ieee80211_hdr *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1914 */;
	union recv_frame *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1909 */;
	struct rx_pkt_attrib *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1909 */;
	struct adapter *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1907 */;
	unsigned long cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1844 */;
	struct security_priv *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1831 */;
	struct sta_info *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1829 */;
	u32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 157 */[256];
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1545 */[MAX_MSG_SIZE];
	unsigned char cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 153 */;
	struct xmit_priv *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1504 */;
	struct xmit_frame *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1502 */;
	struct pkt_attrib *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1502 */;
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 138 */;
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1317 */[8];
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1307 */[6];
	uint cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1301 */;
	const char *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 13 */[];
	u32 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 124 */;
	struct arc4context *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 124 */;
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1077 */[16];
	sint cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1075 */;
	u8 *cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1073 */;
	void cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1073 */;
	u8 cocci_id/* drivers/staging/rtl8723bs/core/rtw_security.c 1019 */[4];
}
