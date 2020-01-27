cocci_test_suite() {
	struct compat_fs_quota_stat {
		__s8 qs_version;
		__u16 qs_flags;
		__s8 qs_pad;
		struct compat_fs_qfilestat qs_uquota;
		struct compat_fs_qfilestat qs_gquota;
		compat_uint_t qs_incoredqs;
		compat_int_t qs_btimelimit;
		compat_int_t qs_itimelimit;
		compat_int_t qs_rtbtimelimit;
		__u16 qs_bwarnlimit;
		__u16 qs_iwarnlimit;
	} cocci_id/* fs/quota/compat.c 30 */;
	struct compat_fs_qfilestat {
		compat_u64 dqb_bhardlimit;
		compat_u64 qfs_nblks;
		compat_uint_t qfs_nextents;
	} cocci_id/* fs/quota/compat.c 24 */;
	struct compat_if_dqblk {
		compat_u64 dqb_bhardlimit;
		compat_u64 dqb_bsoftlimit;
		compat_u64 dqb_curspace;
		compat_u64 dqb_ihardlimit;
		compat_u64 dqb_isoftlimit;
		compat_u64 dqb_curinodes;
		compat_u64 dqb_btime;
		compat_u64 dqb_itime;
		compat_uint_t dqb_valid;
	} cocci_id/* fs/quota/compat.c 11 */;
}
