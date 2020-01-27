cocci_test_suite() {
	struct cow_header_v3_broken {
		__u32 magic;
		__u32 version;
		__s64 mtime;
		__u64 size;
		__u32 sectorsize;
		__u32 alignment;
		__u32 cow_format;
		char backing_file[PATH_LEN_V3];
	} cocci_id/* arch/um/drivers/cow_user.c 97 */;
	struct cow_header_v3 {
		__u32 magic;
		__u32 version;
		__u32 mtime;
		__u64 size;
		__u32 sectorsize;
		__u32 alignment;
		__u32 cow_format;
		char backing_file[PATH_LEN_V3];
	}__attribute__((packed)) cocci_id/* arch/um/drivers/cow_user.c 85 */;
	struct cow_header_v3 cocci_id/* arch/um/drivers/cow_user.c 415 */;
	struct cow_header_v2 {
		__u32 magic;
		__u32 version;
		char backing_file[PATH_LEN_V2];
		time32_t mtime;
		__u64 size;
		__s32 sectorsize;
	}__attribute__((packed)) cocci_id/* arch/um/drivers/cow_user.c 41 */;
	char cocci_id/* arch/um/drivers/cow_user.c 407 */;
	unsigned long long cocci_id/* arch/um/drivers/cow_user.c 406 */;
	time32_t cocci_id/* arch/um/drivers/cow_user.c 373 */;
	typeof(header->v1) cocci_id/* arch/um/drivers/cow_user.c 295 */;
	unsigned long cocci_id/* arch/um/drivers/cow_user.c 286 */;
	union cow_header *cocci_id/* arch/um/drivers/cow_user.c 283 */;
	time_t *cocci_id/* arch/um/drivers/cow_user.c 279 */;
	unsigned long long *cocci_id/* arch/um/drivers/cow_user.c 279 */;
	__u32 *cocci_id/* arch/um/drivers/cow_user.c 278 */;
	char **cocci_id/* arch/um/drivers/cow_user.c 278 */;
	int (*cocci_id/* arch/um/drivers/cow_user.c 277 */)(__u64, char *,
							    int, void *);
	void *cocci_id/* arch/um/drivers/cow_user.c 268 */;
	struct cow_header_v1 {
		__s32 magic;
		__s32 version;
		char backing_file[PATH_LEN_V1];
		time32_t mtime;
		__u64 size;
		__s32 sectorsize;
	}__attribute__((packed)) cocci_id/* arch/um/drivers/cow_user.c 22 */;
	__u32 cocci_id/* arch/um/drivers/cow_user.c 20 */;
	struct cow_header_v3 *cocci_id/* arch/um/drivers/cow_user.c 199 */;
	char cocci_id/* arch/um/drivers/cow_user.c 147 */[256];
	char *cocci_id/* arch/um/drivers/cow_user.c 145 */;
	int cocci_id/* arch/um/drivers/cow_user.c 145 */;
	int *cocci_id/* arch/um/drivers/cow_user.c 126 */;
	unsigned long *cocci_id/* arch/um/drivers/cow_user.c 125 */;
	__u64 cocci_id/* arch/um/drivers/cow_user.c 124 */;
	void cocci_id/* arch/um/drivers/cow_user.c 124 */;
	union cow_header {
		struct cow_header_v1 v1;
		struct cow_header_v2 v2;
		struct cow_header_v3 v3;
		struct cow_header_v3_broken v3_b;
	} cocci_id/* arch/um/drivers/cow_user.c 111 */;
}
