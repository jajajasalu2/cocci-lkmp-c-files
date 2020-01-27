cocci_test_suite() {
	struct aes_ccm_b1 {
		__be16 la;
		u8 mac_header[10];
		__le16 eo;
		u8 security_reserved;
		u8 padding;
	}__attribute__((packed)) cocci_id/* drivers/staging/wusbcore/crypto.c 92 */;
	struct aes_ccm_b0 {
		u8 flags;
		struct aes_ccm_nonce ccm_nonce;
		__be16 lm;
	}__attribute__((packed)) cocci_id/* drivers/staging/wusbcore/crypto.c 85 */;
	struct aes_ccm_block {
		u8 data[16];
	}__attribute__((packed)) cocci_id/* drivers/staging/wusbcore/crypto.c 64 */;
	int cocci_id/* drivers/staging/wusbcore/crypto.c 46 */;
	void cocci_id/* drivers/staging/wusbcore/crypto.c 438 */;
	const struct wusb_keydvt_in cocci_id/* drivers/staging/wusbcore/crypto.c 383 */;
	struct wusb_keydvt_out cocci_id/* drivers/staging/wusbcore/crypto.c 381 */;
	const struct wusb_keydvt_out cocci_id/* drivers/staging/wusbcore/crypto.c 363 */;
	const u8 cocci_id/* drivers/staging/wusbcore/crypto.c 351 */[16]__attribute__((__aligned__(4)));
	const struct usb_handshake cocci_id/* drivers/staging/wusbcore/crypto.c 307 */;
	u8 cocci_id/* drivers/staging/wusbcore/crypto.c 305 */[8];
	const struct aes_ccm_nonce cocci_id/* drivers/staging/wusbcore/crypto.c 291 */;
	const u8 cocci_id/* drivers/staging/wusbcore/crypto.c 286 */[16];
	__le64 cocci_id/* drivers/staging/wusbcore/crypto.c 252 */;
	u64 cocci_id/* drivers/staging/wusbcore/crypto.c 251 */;
	struct wusb_mac_scratch cocci_id/* drivers/staging/wusbcore/crypto.c 250 */;
	struct aes_ccm_nonce cocci_id/* drivers/staging/wusbcore/crypto.c 248 */;
	ssize_t cocci_id/* drivers/staging/wusbcore/crypto.c 242 */;
	u8 *cocci_id/* drivers/staging/wusbcore/crypto.c 214 */;
	struct aes_ccm_block cocci_id/* drivers/staging/wusbcore/crypto.c 193 */;
	u8 cocci_id/* drivers/staging/wusbcore/crypto.c 186 */[AES_BLOCK_SIZE];
	size_t cocci_id/* drivers/staging/wusbcore/crypto.c 183 */;
	const struct aes_ccm_label *cocci_id/* drivers/staging/wusbcore/crypto.c 182 */;
	const void *cocci_id/* drivers/staging/wusbcore/crypto.c 182 */;
	const struct aes_ccm_nonce *cocci_id/* drivers/staging/wusbcore/crypto.c 181 */;
	void *cocci_id/* drivers/staging/wusbcore/crypto.c 180 */;
	struct wusb_mac_scratch *cocci_id/* drivers/staging/wusbcore/crypto.c 179 */;
	struct crypto_shash *cocci_id/* drivers/staging/wusbcore/crypto.c 178 */;
	struct wusb_mac_scratch {
		struct aes_ccm_b0 b0;
		struct aes_ccm_b1 b1;
		struct aes_ccm_a ax;
	} cocci_id/* drivers/staging/wusbcore/crypto.c 116 */;
	struct aes_ccm_a {
		u8 flags;
		struct aes_ccm_nonce ccm_nonce;
		__be16 counter;
	}__attribute__((packed)) cocci_id/* drivers/staging/wusbcore/crypto.c 109 */;
}
