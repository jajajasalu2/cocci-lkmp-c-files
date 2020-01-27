cocci_test_suite() {
	struct nfs4_mount_data *cocci_id/* fs/compat.c 61 */;
	struct compat_nfs4_mount_data_v1 *cocci_id/* fs/compat.c 60 */;
	compat_uint_t *cocci_id/* fs/compat.c 57 */;
	void *cocci_id/* fs/compat.c 55 */;
	int cocci_id/* fs/compat.c 55 */;
	struct compat_nfs4_mount_data_v1 {
		compat_int_t version;
		compat_int_t flags;
		compat_int_t rsize;
		compat_int_t wsize;
		compat_int_t timeo;
		compat_int_t retrans;
		compat_int_t acregmin;
		compat_int_t acregmax;
		compat_int_t acdirmin;
		compat_int_t acdirmax;
		struct compat_nfs_string client_addr;
		struct compat_nfs_string mnt_path;
		struct compat_nfs_string hostname;
		compat_uint_t host_addrlen;
		compat_uptr_t host_addr;
		compat_int_t proto;
		compat_int_t auth_flavourlen;
		compat_uptr_t auth_flavours;
	} cocci_id/* fs/compat.c 34 */;
	struct compat_nfs_string *cocci_id/* fs/compat.c 28 */;
	struct nfs_string *cocci_id/* fs/compat.c 27 */;
	void cocci_id/* fs/compat.c 27 */;
	struct compat_nfs_string {
		compat_uint_t len;
		compat_uptr_t data;
	} cocci_id/* fs/compat.c 22 */;
}
