cocci_test_suite() {
	void *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 90 */;
	struct {
		struct type6_hdr hdr;
		struct CPRBX cprbx;
		char function_code[2];
		short int rule_length;
		char rule[8];
		short int verb_length;
		short int key_length;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 78 */;
	struct {
		struct type86_hdr hdr;
		struct type86_fmt2_ext fmt2;
		struct CPRBX cprbx;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 73 */;
	unsigned int cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 72 */;
	unsigned long long cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 71 */;
	struct ap_message cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 70 */;
	struct ap_device_id cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 41 */[];
	int __init cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 267 */;
	struct zcrypt_queue *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 214 */;
	struct ap_queue *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 213 */;
	struct ap_driver cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 199 */;
	void cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 191 */;
	struct zcrypt_card *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 145 */;
	struct ap_card *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 144 */;
	const int cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 139 */[];
	struct ap_device *cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 133 */;
	int cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 133 */;
	unsigned long cocci_id/* drivers/s390/crypto/zcrypt_cex2c.c 124 */;
}
