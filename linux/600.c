cocci_test_suite() {
	bool cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 89 */;
	struct pkcs7_signed_info *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 88 */;
	struct pkcs7_message *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 86 */;
	int cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 86 */;
	struct public_key_signature cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 677 */;
	struct pkcs7_signed_info cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 674 */;
	struct asymmetric_key_id *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 647 */;
	void cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 57 */;
	enum OID cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 477 */;
	u8 *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 397 */;
	unsigned long cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 385 */;
	struct x509_certificate *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 381 */;
	const u8 *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 309 */;
	unsigned cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 304 */;
	struct pkcs7_parse_context *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 286 */;
	const void *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 284 */;
	unsigned char cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 283 */;
	void *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 282 */;
	size_t cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 282 */;
	struct pkcs7_parse_context {
		struct pkcs7_message *msg;
		struct pkcs7_signed_info *sinfo;
		struct pkcs7_signed_info **ppsinfo;
		struct x509_certificate *certs;
		struct x509_certificate **ppcerts;
		unsigned long data;
		enum OID last_oid;
		unsigned x509_index;
		unsigned sinfo_index;
		const void *raw_serial;
		unsigned raw_serial_size;
		unsigned raw_issuer_size;
		const void *raw_issuer;
		const void *raw_skid;
		unsigned raw_skid_size;
		bool expect_skid;
	} cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 23 */;
	char cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 212 */[50];
	const void **cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 186 */;
	size_t *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 186 */;
	const struct pkcs7_message *cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 185 */;
	struct pkcs7_message cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 124 */;
	struct pkcs7_parse_context cocci_id/* crypto/asymmetric_keys/pkcs7_parser.c 121 */;
}
