cocci_test_suite() {
	struct mmap *cocci_id/* tools/perf/util/python.c 995 */;
	struct evlist *cocci_id/* tools/perf/util/python.c 995 */;
	struct type cocci_id/* tools/perf/util/python.c 99 */;
	struct pyrf_event cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_throttle cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_switch cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_read cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_mmap cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_lost cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_fork cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_record_comm cocci_id/* tools/perf/util/python.c 99 */;
	struct perf_event_header cocci_id/* tools/perf/util/python.c 99 */;
	struct pyrf_evlist *cocci_id/* tools/perf/util/python.c 976 */;
	FILE *cocci_id/* tools/perf/util/python.c 949 */;
	PyMODINIT_FUNC cocci_id/* tools/perf/util/python.c 94 */(void);
	struct pyrf_thread_map *cocci_id/* tools/perf/util/python.c 887 */;
	struct perf_thread_map *cocci_id/* tools/perf/util/python.c 882 */;
	struct perf_cpu_map *cocci_id/* tools/perf/util/python.c 881 */;
	struct pyrf_evlist {
	
PyObject_HEAD

		struct evlist evlist;
	} cocci_id/* tools/perf/util/python.c 871 */;
	va_list cocci_id/* tools/perf/util/python.c 74 */;
	u32 cocci_id/* tools/perf/util/python.c 734 */;
	u64 cocci_id/* tools/perf/util/python.c 733 */;
	const char *cocci_id/* tools/perf/util/python.c 72 */;
	int cocci_id/* tools/perf/util/python.c 70 */(int level, int var,
						      const char *fmt,...);
	struct perf_event_attr cocci_id/* tools/perf/util/python.c 696 */;
	struct pyrf_evsel {
	
PyObject_HEAD

		struct evsel evsel;
	} cocci_id/* tools/perf/util/python.c 687 */;
	int cocci_id/* tools/perf/util/python.c 68 */;
	struct pyrf_thread_map {
	
PyObject_HEAD

		struct perf_thread_map *threads;
	} cocci_id/* tools/perf/util/python.c 618 */;
	struct perf_env cocci_id/* tools/perf/util/python.c 61 */;
	PySequenceMethods cocci_id/* tools/perf/util/python.c 594 */;
	void *cocci_id/* tools/perf/util/python.c 586 */;
	Py_ssize_t cocci_id/* tools/perf/util/python.c 584 */;
	struct pyrf_cpu_map *cocci_id/* tools/perf/util/python.c 571 */;
	struct pyrf_cpu_map {
	
PyObject_HEAD

		struct perf_cpu_map *cpus;
	} cocci_id/* tools/perf/util/python.c 549 */;
	PyTypeObject *cocci_id/* tools/perf/util/python.c 534 */;
	union perf_event *cocci_id/* tools/perf/util/python.c 531 */;
	struct callchain_param *cocci_id/* tools/perf/util/python.c 53 */;
	PyTypeObject *cocci_id/* tools/perf/util/python.c 517 */[];
	struct callchain_param cocci_id/* tools/perf/util/python.c 50 */;
	struct tep_event *cocci_id/* tools/perf/util/python.c 403 */;
	struct tep_format_field *cocci_id/* tools/perf/util/python.c 400 */;
	struct evsel *cocci_id/* tools/perf/util/python.c 399 */;
	struct pyrf_event *cocci_id/* tools/perf/util/python.c 396 */;
	PyObject *cocci_id/* tools/perf/util/python.c 395 */;
	long cocci_id/* tools/perf/util/python.c 387 */;
	unsigned int cocci_id/* tools/perf/util/python.c 363 */;
	unsigned long long cocci_id/* tools/perf/util/python.c 362 */;
	struct tep_handle *cocci_id/* tools/perf/util/python.c 359 */;
	bool cocci_id/* tools/perf/util/python.c 351 */;
	struct perf_record_throttle *cocci_id/* tools/perf/util/python.c 246 */;
	PyMemberDef cocci_id/* tools/perf/util/python.c 206 */[];
	char cocci_id/* tools/perf/util/python.c 204 */[];
	unsigned long cocci_id/* tools/perf/util/python.c 1389 */;
	pid_t cocci_id/* tools/perf/util/python.c 1388 */;
	struct perf_event_attr *cocci_id/* tools/perf/util/python.c 1388 */;
	struct PyModuleDef cocci_id/* tools/perf/util/python.c 1296 */;
	PyMODINIT_FUNC cocci_id/* tools/perf/util/python.c 1285 */;
	void cocci_id/* tools/perf/util/python.c 1285 */;
	PyCFunction cocci_id/* tools/perf/util/python.c 1277 */;
	PyMethodDef cocci_id/* tools/perf/util/python.c 1274 */[];
	char *cocci_id/* tools/perf/util/python.c 1260 */;
	char *cocci_id/* tools/perf/util/python.c 1259 */[];
	struct pyrf_evsel *cocci_id/* tools/perf/util/python.c 1255 */;
	struct {
		const char *name;
		int value;
	} cocci_id/* tools/perf/util/python.c 1174 */[];
	struct pyrf_evsel cocci_id/* tools/perf/util/python.c 1144 */;
	struct pyrf_event {
	
PyObject_HEAD

		struct evsel *evsel;
		struct perf_sample sample;
		union perf_event event;
	} cocci_id/* tools/perf/util/python.c 107 */;
	struct perf_sample cocci_id/* tools/perf/util/python.c 104 */;
}
