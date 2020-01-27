cocci_test_suite() {
	struct type50_meb3_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char exponent[512];
		unsigned char modulus[512];
		unsigned char message[512];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 91 */;
	struct type50_meb2_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char exponent[256];
		unsigned char modulus[256];
		unsigned char message[256];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 81 */;
	struct type50_meb1_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char exponent[128];
		unsigned char modulus[128];
		unsigned char message[128];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 71 */;
	void __exit cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 555 */;
	void __init cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 550 */;
	struct zcrypt_ops cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 542 */;
	struct type50_hdr {
		unsigned char reserved1;
		unsigned char msg_type_code;
		unsigned short msg_len;
		unsigned char reserved2;
		unsigned char ignored;
		unsigned short reserved3;
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 52 */;
	unsigned long long cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 471 */;
	struct completion cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 458 */;
	struct ap_message cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 457 */;
	long cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 454 */;
	atomic_t cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 445 */;
	struct completion *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 442 */;
	struct error_hdr cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 420 */;
	struct ap_queue *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 416 */;
	void cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 416 */;
	unsigned char cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 385 */;
	unsigned int cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 382 */;
	char __user *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 381 */;
	struct type80_hdr *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 353 */;
	struct type50_crb3_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 307 */;
	struct type50_crb2_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 292 */;
	struct type50_crb1_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 278 */;
	unsigned char *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 266 */;
	struct ica_rsa_modexpo_crt *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 263 */;
	struct ap_message *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 262 */;
	struct zcrypt_queue *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 261 */;
	int cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 261 */;
	struct type50_meb3_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 232 */;
	struct type50_meb2_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 221 */;
	struct type50_meb1_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 210 */;
	struct ica_rsa_modexpo *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 202 */;
	int *cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 175 */;
	struct type80_hdr {
		unsigned char reserved1;
		unsigned char type;
		unsigned short len;
		unsigned char code;
		unsigned char reserved2[3];
		unsigned char reserved3[8];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 150 */;
	struct type50_crb3_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char p[256];
		unsigned char q[256];
		unsigned char dp[256];
		unsigned char dq[256];
		unsigned char u[256];
		unsigned char message[512];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 127 */;
	struct type50_crb2_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char p[128];
		unsigned char q[128];
		unsigned char dp[128];
		unsigned char dq[128];
		unsigned char u[128];
		unsigned char message[256];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 114 */;
	struct type50_crb1_msg {
		struct type50_hdr header;
		unsigned short keyblock_type;
		unsigned char reserved[6];
		unsigned char p[64];
		unsigned char q[64];
		unsigned char dp[64];
		unsigned char dq[64];
		unsigned char u[64];
		unsigned char message[128];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype50.c 101 */;
}
