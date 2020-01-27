cocci_test_suite() {
	struct smp_chan {
		struct l2cap_conn *conn;
		struct delayed_work security_timer;
		unsigned long allow_cmd;
		u8 preq[7];
		u8 prsp[7];
		u8 prnd[16];
		u8 rrnd[16];
		u8 pcnf[16];
		u8 tk[16];
		u8 rr[16];
		u8 lr[16];
		u8 enc_key_size;
		u8 remote_key_dist;
		bdaddr_t id_addr;
		u8 id_addr_type;
		u8 irk[16];
		struct smp_csrk *csrk;
		struct smp_csrk *slave_csrk;
		struct smp_ltk *ltk;
		struct smp_ltk *slave_ltk;
		struct smp_irk *remote_irk;
		u8 *link_key;
		unsigned long flags;
		u8 method;
		u8 passkey_round;
		u8 local_pk[64];
		u8 remote_pk[64];
		u8 dhkey[32];
		u8 mackey[16];
		struct crypto_shash *tfm_cmac;
		struct crypto_kpp *tfm_ecdh;
	} cocci_id/* net/bluetooth/smp.c 96 */;
	struct smp_dev {
		bool local_oob;
		u8 local_pk[64];
		u8 local_rand[16];
		bool debug_key;
		struct crypto_shash *tfm_cmac;
		struct crypto_kpp *tfm_ecdh;
	} cocci_id/* net/bluetooth/smp.c 85 */;
	const u8 cocci_id/* net/bluetooth/smp.c 819 */[5][5];
	enum{SMP_FLAG_TK_VALID, SMP_FLAG_CFM_PENDING, SMP_FLAG_MITM_AUTH, SMP_FLAG_COMPLETE, SMP_FLAG_INITIATOR, SMP_FLAG_SC, SMP_FLAG_REMOTE_PK, SMP_FLAG_DEBUG_KEY, SMP_FLAG_WAIT_USER, SMP_FLAG_DHKEY_PENDING, SMP_FLAG_REMOTE_OOB, SMP_FLAG_LOCAL_OOB, SMP_FLAG_CT2,} cocci_id/* net/bluetooth/smp.c 69 */;
	struct oob_data *cocci_id/* net/bluetooth/smp.c 677 */;
	__u8 cocci_id/* net/bluetooth/smp.c 653 */;
	u8 cocci_id/* net/bluetooth/smp.c 626 */;
	struct msghdr cocci_id/* net/bluetooth/smp.c 598 */;
	struct kvec cocci_id/* net/bluetooth/smp.c 597 */[2];
	const u8 cocci_id/* net/bluetooth/smp.c 475 */[3];
	u128 *cocci_id/* net/bluetooth/smp.c 432 */;
	const bdaddr_t *cocci_id/* net/bluetooth/smp.c 412 */;
	const u8 cocci_id/* net/bluetooth/smp.c 411 */[7];
	struct crypto_kpp *cocci_id/* net/bluetooth/smp.c 3880 */;
	int __init cocci_id/* net/bluetooth/smp.c 3877 */;
	struct crypto_aes_ctx cocci_id/* net/bluetooth/smp.c 381 */;
	unsigned long long cocci_id/* net/bluetooth/smp.c 3799 */;
	ktime_t cocci_id/* net/bluetooth/smp.c 3798 */;
	const u32 cocci_id/* net/bluetooth/smp.c 3744 */;
	const bdaddr_t cocci_id/* net/bluetooth/smp.c 3581 */;
	const u8 cocci_id/* net/bluetooth/smp.c 3579 */;
	u8 cocci_id/* net/bluetooth/smp.c 3532 */[64];
	char cocci_id/* net/bluetooth/smp.c 3419 */[32];
	char cocci_id/* net/bluetooth/smp.c 3407 */[4];
	const struct file_operations cocci_id/* net/bluetooth/smp.c 3351 */;
	bool cocci_id/* net/bluetooth/smp.c 3320 */;
	const char __user *cocci_id/* net/bluetooth/smp.c 3316 */;
	char cocci_id/* net/bluetooth/smp.c 3307 */[3];
	loff_t *cocci_id/* net/bluetooth/smp.c 3304 */;
	char __user *cocci_id/* net/bluetooth/smp.c 3303 */;
	struct file *cocci_id/* net/bluetooth/smp.c 3302 */;
	ssize_t cocci_id/* net/bluetooth/smp.c 3302 */;
	u8 cocci_id/* net/bluetooth/smp.c 320 */[80];
	u32 *cocci_id/* net/bluetooth/smp.c 318 */;
	const struct l2cap_ops cocci_id/* net/bluetooth/smp.c 3143 */;
	unsigned long cocci_id/* net/bluetooth/smp.c 3128 */;
	struct sk_buff *cocci_id/* net/bluetooth/smp.c 3127 */;
	struct smp_chan *cocci_id/* net/bluetooth/smp.c 3004 */;
	struct smp_cmd_pairing cocci_id/* net/bluetooth/smp.c 3003 */;
	struct hci_dev *cocci_id/* net/bluetooth/smp.c 3002 */;
	struct hci_conn *cocci_id/* net/bluetooth/smp.c 3001 */;
	struct l2cap_conn *cocci_id/* net/bluetooth/smp.c 3000 */;
	struct l2cap_chan *cocci_id/* net/bluetooth/smp.c 2998 */;
	void cocci_id/* net/bluetooth/smp.c 2998 */;
	struct smp_cmd_keypress_notify *cocci_id/* net/bluetooth/smp.c 2865 */;
	struct smp_cmd_dhkey_check *cocci_id/* net/bluetooth/smp.c 2799 */;
	struct smp_cmd_public_key *cocci_id/* net/bluetooth/smp.c 2668 */;
	struct smp_csrk *cocci_id/* net/bluetooth/smp.c 2595 */;
	struct smp_cmd_sign_info *cocci_id/* net/bluetooth/smp.c 2592 */;
	bdaddr_t cocci_id/* net/bluetooth/smp.c 2528 */;
	struct smp_cmd_ident_addr_info *cocci_id/* net/bluetooth/smp.c 2524 */;
	struct smp_cmd_ident_info *cocci_id/* net/bluetooth/smp.c 2503 */;
	u8 cocci_id/* net/bluetooth/smp.c 250 */[53];
	const u8 cocci_id/* net/bluetooth/smp.c 249 */[2];
	struct smp_ltk *cocci_id/* net/bluetooth/smp.c 2472 */;
	struct smp_cmd_master_ident *cocci_id/* net/bluetooth/smp.c 2467 */;
	struct smp_cmd_encrypt_info *cocci_id/* net/bluetooth/smp.c 2447 */;
	bdaddr_t *cocci_id/* net/bluetooth/smp.c 2398 */;
	struct smp_cmd_security_req cocci_id/* net/bluetooth/smp.c 2384 */;
	struct smp_cmd_security_req *cocci_id/* net/bluetooth/smp.c 2250 */;
	enum smp_key_pref cocci_id/* net/bluetooth/smp.c 2226 */;
	u8 cocci_id/* net/bluetooth/smp.c 216 */[65];
	u32 cocci_id/* net/bluetooth/smp.c 2119 */;
	void *cocci_id/* net/bluetooth/smp.c 2053 */;
	struct smp_dev *cocci_id/* net/bluetooth/smp.c 1867 */;
	uint8_t cocci_id/* net/bluetooth/smp.c 172 */[16];
	u8 cocci_id/* net/bluetooth/smp.c 170 */[16];
	size_t cocci_id/* net/bluetooth/smp.c 170 */;
	const u8 cocci_id/* net/bluetooth/smp.c 169 */[16];
	const u8 *cocci_id/* net/bluetooth/smp.c 169 */;
	struct crypto_shash *cocci_id/* net/bluetooth/smp.c 169 */;
	int cocci_id/* net/bluetooth/smp.c 169 */;
	struct smp_cmd_pairing *cocci_id/* net/bluetooth/smp.c 1680 */;
	u16 cocci_id/* net/bluetooth/smp.c 1572 */;
	__le32 cocci_id/* net/bluetooth/smp.c 1572 */;
	const u8 cocci_id/* net/bluetooth/smp.c 150 */[32];
	struct smp_cmd_pairing_confirm cocci_id/* net/bluetooth/smp.c 1468 */;
	u8 cocci_id/* net/bluetooth/smp.c 1433 */[3];
	u8 cocci_id/* net/bluetooth/smp.c 1432 */[7];
	struct smp_cmd_dhkey_check cocci_id/* net/bluetooth/smp.c 1431 */;
	u8 *cocci_id/* net/bluetooth/smp.c 1410 */;
	const u8 cocci_id/* net/bluetooth/smp.c 138 */[64];
	struct smp_chan cocci_id/* net/bluetooth/smp.c 1359 */;
	struct work_struct *cocci_id/* net/bluetooth/smp.c 1357 */;
	struct smp_cmd_sign_info cocci_id/* net/bluetooth/smp.c 1324 */;
	struct smp_cmd_ident_info cocci_id/* net/bluetooth/smp.c 1302 */;
	struct smp_cmd_ident_addr_info cocci_id/* net/bluetooth/smp.c 1301 */;
	__le64 cocci_id/* net/bluetooth/smp.c 1271 */;
	__le16 cocci_id/* net/bluetooth/smp.c 1270 */;
	struct smp_cmd_master_ident cocci_id/* net/bluetooth/smp.c 1267 */;
	struct smp_cmd_encrypt_info cocci_id/* net/bluetooth/smp.c 1266 */;
	__u8 *cocci_id/* net/bluetooth/smp.c 1231 */;
	struct link_key *cocci_id/* net/bluetooth/smp.c 1194 */;
	const u8 cocci_id/* net/bluetooth/smp.c 1141 */[4];
}