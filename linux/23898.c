cocci_test_suite() {
	struct sockaddr __user *cocci_id/* net/compat.c 682 */;
	compat_size_t cocci_id/* net/compat.c 681 */;
	unsigned int cocci_id/* net/compat.c 681 */;
	void __user *cocci_id/* net/compat.c 680 */;
	long cocci_id/* net/compat.c 680 */;
	struct user_msghdr __user *cocci_id/* net/compat.c 670 */;
	struct compat_msghdr __user *cocci_id/* net/compat.c 667 */;
	struct mmsghdr __user *cocci_id/* net/compat.c 656 */;
	struct compat_mmsghdr __user *cocci_id/* net/compat.c 653 */;
	unsigned char cocci_id/* net/compat.c 630 */[21];
	struct sockaddr_storage cocci_id/* net/compat.c 56 */;
	u32 cocci_id/* net/compat.c 556 */;
	struct group_filter __user *cocci_id/* net/compat.c 554 */;
	struct compat_group_filter __user *cocci_id/* net/compat.c 553 */;
	int (*cocci_id/* net/compat.c 551 */)(struct sock *, int, int,
					      char __user *, int __user *);
	struct compat_group_filter cocci_id/* net/compat.c 525 */;
	struct group_filter cocci_id/* net/compat.c 524 */;
	struct group_source_req cocci_id/* net/compat.c 496 */;
	struct group_source_req __user *cocci_id/* net/compat.c 495 */;
	struct compat_group_source_req __user *cocci_id/* net/compat.c 494 */;
	struct group_req cocci_id/* net/compat.c 475 */;
	struct group_req __user *cocci_id/* net/compat.c 474 */;
	struct compat_group_req __user *cocci_id/* net/compat.c 473 */;
	int (*cocci_id/* net/compat.c 464 */)(struct sock *, int, int,
					      char __user *, unsigned int);
	struct __kernel_sockaddr_storage cocci_id/* net/compat.c 459 */;
	struct compat_group_filter {
		__u32 gf_interface;
		struct __kernel_sockaddr_storage gf_group
		__aligned(4);
		__u32 gf_fmode;
		__u32 gf_numsrc;
		struct __kernel_sockaddr_storage gf_slist[1]
		__aligned(4);
	}__packed cocci_id/* net/compat.c 448 */;
	struct compat_group_source_req {
		__u32 gsr_interface;
		struct __kernel_sockaddr_storage gsr_group
		__aligned(4);
		struct __kernel_sockaddr_storage gsr_source
		__aligned(4);
	}__packed cocci_id/* net/compat.c 440 */;
	struct compat_group_req {
		__u32 gr_interface;
		struct __kernel_sockaddr_storage gr_group
		__aligned(4);
	}__packed cocci_id/* net/compat.c 434 */;
	ssize_t cocci_id/* net/compat.c 42 */;
	struct compat_msghdr cocci_id/* net/compat.c 41 */;
	struct socket *cocci_id/* net/compat.c 405 */;
	int __user *cocci_id/* net/compat.c 402 */;
	char __user *cocci_id/* net/compat.c 401 */;
	int cocci_id/* net/compat.c 400 */;
	struct iovec **cocci_id/* net/compat.c 39 */;
	struct sockaddr __user **cocci_id/* net/compat.c 38 */;
	struct sock_fprog cocci_id/* net/compat.c 350 */;
	struct sock_fprog __user *cocci_id/* net/compat.c 343 */;
	struct compat_sock_fprog cocci_id/* net/compat.c 325 */;
	struct compat_sock_fprog __user *cocci_id/* net/compat.c 323 */;
	struct file **cocci_id/* net/compat.c 271 */;
	struct scm_cookie *cocci_id/* net/compat.c 266 */;
	void cocci_id/* net/compat.c 266 */;
	struct __kernel_old_timespec *cocci_id/* net/compat.c 235 */;
	struct __kernel_old_timeval *cocci_id/* net/compat.c 225 */;
	struct old_timespec32 cocci_id/* net/compat.c 215 */[3];
	struct old_timeval32 cocci_id/* net/compat.c 214 */;
	void *cocci_id/* net/compat.c 210 */;
	char *cocci_id/* net/compat.c 174 */;
	struct cmsghdr cocci_id/* net/compat.c 147 */;
	struct compat_cmsghdr cocci_id/* net/compat.c 133 */;
	__kernel_size_t cocci_id/* net/compat.c 130 */;
	struct cmsghdr *cocci_id/* net/compat.c 128 */;
	unsigned char *cocci_id/* net/compat.c 125 */;
	struct sock *cocci_id/* net/compat.c 124 */;
	unsigned long cocci_id/* net/compat.c 114 */;
	struct msghdr *cocci_id/* net/compat.c 110 */;
	struct compat_cmsghdr __user *cocci_id/* net/compat.c 110 */;
}
