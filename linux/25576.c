cocci_test_suite() {
	size_t cocci_id/* tools/perf/util/vdso.c 76 */;
	void *cocci_id/* tools/perf/util/vdso.c 75 */;
	char *cocci_id/* tools/perf/util/vdso.c 71 */;
	const struct vdso_info cocci_id/* tools/perf/util/vdso.c 49 */;
	bool cocci_id/* tools/perf/util/vdso.c 356 */;
	struct vdso_file {
		bool found;
		bool error;
		char temp_file_name[sizeof(VDSO__TEMP_FILE_NAME)];
		const char *dso_name;
		const char *read_prog;
	} cocci_id/* tools/perf/util/vdso.c 31 */;
	enum dso_type cocci_id/* tools/perf/util/vdso.c 259 */;
	struct dso **cocci_id/* tools/perf/util/vdso.c 257 */;
	struct vdso_info *cocci_id/* tools/perf/util/vdso.c 256 */;
	struct thread *cocci_id/* tools/perf/util/vdso.c 255 */;
	int cocci_id/* tools/perf/util/vdso.c 254 */;
	struct vdso_file *cocci_id/* tools/perf/util/vdso.c 236 */;
	FILE *cocci_id/* tools/perf/util/vdso.c 181 */;
	ssize_t cocci_id/* tools/perf/util/vdso.c 172 */;
	char cocci_id/* tools/perf/util/vdso.c 163 */[4096];
	struct map *cocci_id/* tools/perf/util/vdso.c 145 */;
	const char *cocci_id/* tools/perf/util/vdso.c 127 */;
	struct machine *cocci_id/* tools/perf/util/vdso.c 127 */;
	struct dso *cocci_id/* tools/perf/util/vdso.c 127 */;
	void cocci_id/* tools/perf/util/vdso.c 108 */;
	struct vdso_info {
		struct vdso_file vdso;
#if BITS_PER_LONG == 64
		struct vdso_file vdso32;
		struct vdso_file vdsox32;
#endif
	} cocci_id/*  1 */;
}
