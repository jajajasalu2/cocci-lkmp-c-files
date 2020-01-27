cocci_test_suite() {
	struct crypto_aead *cocci_id/* fs/cifs/smb2transport.c 823 */;
	struct cifs_secmech *cocci_id/* fs/cifs/smb2transport.c 76 */;
	char *cocci_id/* fs/cifs/smb2transport.c 746 */;
	struct kvec cocci_id/* fs/cifs/smb2transport.c 742 */[1];
	bool cocci_id/* fs/cifs/smb2transport.c 739 */;
	struct mid_q_entry *cocci_id/* fs/cifs/smb2transport.c 738 */;
	struct mid_q_entry **cocci_id/* fs/cifs/smb2transport.c 700 */;
	struct mid_q_entry cocci_id/* fs/cifs/smb2transport.c 675 */;
	const struct smb2_sync_hdr *cocci_id/* fs/cifs/smb2transport.c 663 */;
	void cocci_id/* fs/cifs/smb2transport.c 650 */;
	char cocci_id/* fs/cifs/smb2transport.c 604 */[16];
	struct smb2_sess_setup_req *cocci_id/* fs/cifs/smb2transport.c 575 */;
	u8 cocci_id/* fs/cifs/smb2transport.c 515 */[SMB3_SIGN_KEY_SIZE];
	unsigned char cocci_id/* fs/cifs/smb2transport.c 509 */[SMB2_CMACAES_SIZE];
	struct derivation *cocci_id/* fs/cifs/smb2transport.c 454 */;
	struct derivation_triplet cocci_id/* fs/cifs/smb2transport.c 453 */;
	const struct derivation_triplet *cocci_id/* fs/cifs/smb2transport.c 382 */;
	struct derivation_triplet {
		struct derivation signing;
		struct derivation encryption;
		struct derivation decryption;
	} cocci_id/* fs/cifs/smb2transport.c 374 */;
	struct derivation {
		struct kvec label;
		struct kvec context;
	} cocci_id/* fs/cifs/smb2transport.c 369 */;
	struct TCP_Server_Info *cocci_id/* fs/cifs/smb2transport.c 297 */;
	unsigned char *cocci_id/* fs/cifs/smb2transport.c 296 */;
	unsigned char cocci_id/* fs/cifs/smb2transport.c 295 */[SMB2_HMACSHA256_SIZE];
	__u8 cocci_id/* fs/cifs/smb2transport.c 292 */[4];
	unsigned char cocci_id/* fs/cifs/smb2transport.c 291 */;
	__u8 *cocci_id/* fs/cifs/smb2transport.c 289 */;
	unsigned int cocci_id/* fs/cifs/smb2transport.c 289 */;
	struct kvec cocci_id/* fs/cifs/smb2transport.c 288 */;
	struct cifs_ses *cocci_id/* fs/cifs/smb2transport.c 288 */;
	int cocci_id/* fs/cifs/smb2transport.c 288 */;
	struct smb_rqst cocci_id/* fs/cifs/smb2transport.c 230 */;
	struct shash_desc *cocci_id/* fs/cifs/smb2transport.c 229 */;
	struct smb2_sync_hdr *cocci_id/* fs/cifs/smb2transport.c 227 */;
	struct kvec *cocci_id/* fs/cifs/smb2transport.c 226 */;
	struct smb_rqst *cocci_id/* fs/cifs/smb2transport.c 221 */;
	__u32 cocci_id/* fs/cifs/smb2transport.c 183 */;
	struct cifs_tcon *cocci_id/* fs/cifs/smb2transport.c 182 */;
	__u64 cocci_id/* fs/cifs/smb2transport.c 171 */;
	struct cifs_chan *cocci_id/* fs/cifs/smb2transport.c 105 */;
	u8 *cocci_id/* fs/cifs/smb2transport.c 103 */;
}
