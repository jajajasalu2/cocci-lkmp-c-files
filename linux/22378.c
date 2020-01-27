cocci_test_suite() {
	struct key_restriction cocci_id/* security/keys/keyring.c 981 */;
	key_restrict_link_func_t cocci_id/* security/keys/keyring.c 978 */;
	struct key_type cocci_id/* security/keys/keyring.c 84 */;
	long cocci_id/* security/keys/keyring.c 81 */(const struct key *keyring,
						      char __user *buffer,
						      size_t buflen);
	void cocci_id/* security/keys/keyring.c 80 */(const struct key *keyring,
						      struct seq_file *m);
	void cocci_id/* security/keys/keyring.c 79 */(struct key *keyring);
	int cocci_id/* security/keys/keyring.c 76 */(struct key *keyring,
						     struct key_preparsed_payload *prep);
	void cocci_id/* security/keys/keyring.c 75 */(struct key_preparsed_payload *prep);
	int cocci_id/* security/keys/keyring.c 74 */(struct key_preparsed_payload *prep);
	struct assoc_array_ptr *cocci_id/* security/keys/keyring.c 678 */;
	struct assoc_array_node *cocci_id/* security/keys/keyring.c 677 */;
	struct assoc_array_shortcut *cocci_id/* security/keys/keyring.c 676 */;
	struct {
		struct key *keyring;
		struct assoc_array_node *node;
		int slot;
	} cocci_id/* security/keys/keyring.c 670 */[KEYRING_SEARCH_MAX_DEPTH];
	short cocci_id/* security/keys/keyring.c 583 */;
	const struct key_match_data *cocci_id/* security/keys/keyring.c 570 */;
	const struct key *cocci_id/* security/keys/keyring.c 569 */;
	const union key_payload *cocci_id/* security/keys/keyring.c 560 */;
	const struct key_type *cocci_id/* security/keys/keyring.c 559 */;
	struct key_restriction *cocci_id/* security/keys/keyring.c 524 */;
	key_perm_t cocci_id/* security/keys/keyring.c 522 */;
	const struct cred *cocci_id/* security/keys/keyring.c 522 */;
	kuid_t cocci_id/* security/keys/keyring.c 521 */;
	kgid_t cocci_id/* security/keys/keyring.c 521 */;
	key_serial_t __user *cocci_id/* security/keys/keyring.c 498 */;
	key_serial_t cocci_id/* security/keys/keyring.c 493 */;
	struct keyring_read_iterator_context cocci_id/* security/keys/keyring.c 488 */;
	char __user *cocci_id/* security/keys/keyring.c 486 */;
	struct keyring_read_iterator_context *cocci_id/* security/keys/keyring.c 460 */;
	struct keyring_read_iterator_context {
		size_t buflen;
		size_t count;
		key_serial_t __user *buffer;
	} cocci_id/* security/keys/keyring.c 452 */;
	struct seq_file *cocci_id/* security/keys/keyring.c 437 */;
	const struct assoc_array_ops cocci_id/* security/keys/keyring.c 395 */;
	unsigned char *cocci_id/* security/keys/keyring.c 368 */;
	const struct assoc_array_ptr *cocci_id/* security/keys/keyring.c 36 */;
	long cocci_id/* security/keys/keyring.c 291 */;
	const u8 *cocci_id/* security/keys/keyring.c 272 */;
	struct key_tag *cocci_id/* security/keys/keyring.c 238 */;
	size_t cocci_id/* security/keys/keyring.c 217 */;
	struct key_tag cocci_id/* security/keys/keyring.c 216 */;
	time64_t cocci_id/* security/keys/keyring.c 1714 */;
	time64_t *cocci_id/* security/keys/keyring.c 1702 */;
	u64 cocci_id/* security/keys/keyring.c 170 */;
	u32 cocci_id/* security/keys/keyring.c 169 */;
	unsigned long cocci_id/* security/keys/keyring.c 168 */;
	const unsigned long cocci_id/* security/keys/keyring.c 166 */;
	const unsigned cocci_id/* security/keys/keyring.c 165 */;
	struct keyring_index_key *cocci_id/* security/keys/keyring.c 163 */;
	unsigned int cocci_id/* security/keys/keyring.c 1592 */;
	struct key *cocci_id/* security/keys/keyring.c 1369 */;
	struct assoc_array_edit **cocci_id/* security/keys/keyring.c 1369 */;
	void cocci_id/* security/keys/keyring.c 1369 */;
	struct key_preparsed_payload *cocci_id/* security/keys/keyring.c 131 */;
	struct assoc_array_edit *cocci_id/* security/keys/keyring.c 1298 */;
	const struct keyring_index_key *cocci_id/* security/keys/keyring.c 1295 */;
	int cocci_id/* security/keys/keyring.c 1294 */;
	struct keyring_search_context cocci_id/* security/keys/keyring.c 1217 */;
	struct keyring_search_context *cocci_id/* security/keys/keyring.c 1194 */;
	void *cocci_id/* security/keys/keyring.c 1192 */;
	struct user_namespace *cocci_id/* security/keys/keyring.c 1145 */;
	bool cocci_id/* security/keys/keyring.c 1143 */;
	const char *cocci_id/* security/keys/keyring.c 1143 */;
	const void *cocci_id/* security/keys/keyring.c 1104 */;
	key_ref_t cocci_id/* security/keys/keyring.c 1100 */;
	struct key_type *cocci_id/* security/keys/keyring.c 1029 */;
}
