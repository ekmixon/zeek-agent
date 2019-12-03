/* This is a generated file, see Makefile.am for its inputs. */
static const char err_strings[] = "E2BIG\0EACCES\0EADDRINUSE\0EADDRNOTAVAIL\0EADV\0EAFNOSUPPORT\0EAGAIN\0EALREADY\0EBADE\0EBADF\0"
	"EBADFD\0EBADMSG\0EBADR\0EBADRQC\0EBADSLT\0EBFONT\0EBUSY\0ECANCELED\0ECHILD\0ECHRNG\0"
	"ECOMM\0ECONNABORTED\0ECONNREFUSED\0ECONNRESET\0EDEADLK\0EDEADLOCK\0EDESTADDRREQ\0EDOM\0EDOTDOT\0EDQUOT\0"
	"EEXIST\0EFAULT\0EFBIG\0EHOSTDOWN\0EHOSTUNREACH\0EHWPOISON\0EIDRM\0EILSEQ\0EINPROGRESS\0EINTR\0"
	"EINVAL\0EIO\0EISCONN\0EISDIR\0EISNAM\0EKEYEXPIRED\0EKEYREJECTED\0EKEYREVOKED\0EL2HLT\0EL2NSYNC\0"
	"EL3HLT\0EL3RST\0ELIBACC\0ELIBBAD\0ELIBEXEC\0ELIBMAX\0ELIBSCN\0ELNRNG\0ELOOP\0EMEDIUMTYPE\0"
	"EMFILE\0EMLINK\0EMSGSIZE\0EMULTIHOP\0ENAMETOOLONG\0ENAVAIL\0ENETDOWN\0ENETRESET\0ENETUNREACH\0ENFILE\0"
	"ENOANO\0ENOBUFS\0ENOCSI\0ENODATA\0ENODEV\0ENOENT\0ENOEXEC\0ENOKEY\0ENOLCK\0ENOLINK\0"
	"ENOMEDIUM\0ENOMEM\0ENOMSG\0ENONET\0ENOPKG\0ENOPROTOOPT\0ENOSPC\0ENOSR\0ENOSTR\0ENOSYS\0"
	"ENOTBLK\0ENOTCONN\0ENOTDIR\0ENOTEMPTY\0ENOTNAM\0ENOTRECOVERABLE\0ENOTSOCK\0ENOTTY\0ENOTUNIQ\0ENXIO\0"
	"EOPNOTSUPP\0EOVERFLOW\0EOWNERDEAD\0EPERM\0EPFNOSUPPORT\0EPIPE\0EPROTO\0EPROTONOSUPPORT\0EPROTOTYPE\0ERANGE\0"
	"EREMCHG\0EREMOTE\0EREMOTEIO\0ERESTART\0ERFKILL\0EROFS\0ESHUTDOWN\0ESOCKTNOSUPPORT\0ESPIPE\0ESRCH\0"
	"ESRMNT\0ESTALE\0ESTRPIPE\0ETIME\0ETIMEDOUT\0ETOOMANYREFS\0ETXTBSY\0EUCLEAN\0EUNATCH\0EUSERS\0"
	"EWOULDBLOCK\0EXDEV\0EXFULL";
static const unsigned err_s2i_s[] = {
	0,6,13,24,38,43,56,63,72,78,
	84,91,99,105,113,121,128,134,144,151,
	158,164,177,190,201,209,219,232,237,245,
	252,259,266,272,282,295,305,311,318,330,
	336,343,347,355,362,369,381,394,406,413,
	422,429,436,444,452,461,469,477,484,490,
	502,509,516,525,535,548,556,565,575,587,
	594,601,609,616,624,631,638,646,653,660,
	668,678,685,692,699,706,718,725,731,738,
	745,753,762,770,780,788,804,813,820,829,
	835,846,856,867,873,886,892,899,915,926,
	933,941,949,959,968,976,982,992,1008,1015,
	1021,1028,1035,1044,1050,1060,1073,1081,1089,1097,
	1104,1116,1122,
};
static const int err_s2i_i[] = {
	7,13,98,99,68,97,11,114,52,9,
	77,74,53,56,57,59,16,125,10,44,
	70,103,111,104,35,35,89,33,73,122,
	17,14,27,112,113,133,43,84,115,4,
	22,5,106,21,120,127,129,128,51,45,
	46,47,79,80,83,82,81,48,40,124,
	24,31,90,72,36,119,100,102,101,23,
	55,105,50,61,19,2,8,126,37,67,
	123,12,42,64,65,92,28,63,60,38,
	15,107,20,39,118,131,88,25,76,6,
	95,75,130,1,96,32,71,93,91,34,
	78,66,121,85,132,30,108,94,29,3,
	69,116,86,62,110,109,26,117,49,87,
	11,18,54,
};
static int err_s2i(const char *s, int *value) {
	size_t len, i;
	 if (s == NULL || value == NULL)
		return 0;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISLOWER(c) ? c - 'a' + 'A' : c;
	}
	copy[i] = 0;
	return s2i__(err_strings, err_s2i_s, err_s2i_i, 133, copy, value);
	}
}
static const unsigned err_i2s_direct[] = {
	867,631,1015,330,343,829,0,638,78,144,
	56,678,6,259,745,128,252,1116,624,762,
	355,336,587,502,813,1073,266,718,1008,976,
	509,886,232,926,201,535,653,738,770,484,
	-1u,685,305,151,413,422,429,477,1089,609,
	406,72,99,1122,594,105,113,-1u,121,731,
	616,1044,725,692,699,941,660,38,1021,158,
	892,525,237,91,846,820,84,933,436,444,
	469,461,452,311,959,1035,1097,804,219,516,
	915,706,899,992,835,873,43,13,24,556,
	575,565,164,190,601,347,753,982,1060,1050,
	177,272,282,63,318,1028,1081,780,548,362,
	949,245,668,490,134,646,369,394,381,856,
	788,968,295,
};
static const char *err_i2s(int v) {
	return i2s_direct__(err_strings, err_i2s_direct, 1, 133, v);
}
