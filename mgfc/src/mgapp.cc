# 1 "mgapp.cpp"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "mgapp.cpp"

# 1 "../inc/mgapp.h" 1




# 1 "../inc/mgcomm.h" 1





# 1 "/usr/include/stdio.h" 1 3
# 28 "/usr/include/stdio.h" 3
# 1 "/usr/include/features.h" 1 3
# 291 "/usr/include/features.h" 3
# 1 "/usr/include/sys/cdefs.h" 1 3
# 292 "/usr/include/features.h" 2 3
# 314 "/usr/include/features.h" 3
# 1 "/usr/include/gnu/stubs.h" 1 3
# 315 "/usr/include/features.h" 2 3
# 29 "/usr/include/stdio.h" 2 3

extern "C" {



# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 213 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3

# 1 "/usr/include/bits/types.h" 1 3
# 28 "/usr/include/bits/types.h" 3
# 1 "/usr/include/bits/wordsize.h" 1 3
# 29 "/usr/include/bits/types.h" 2 3


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 32 "/usr/include/bits/types.h" 2 3


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;





__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 128 "/usr/include/bits/types.h" 3
# 1 "/usr/include/bits/typesizes.h" 1 3
# 129 "/usr/include/bits/types.h" 2 3


typedef unsigned long long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef int __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long long int __fsfilcnt64_t;




typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3









typedef struct _IO_FILE FILE;





# 62 "/usr/include/stdio.h" 3
typedef struct _IO_FILE __FILE;
# 72 "/usr/include/stdio.h" 3
# 1 "/usr/include/libio.h" 1 3
# 32 "/usr/include/libio.h" 3
# 1 "/usr/include/_G_config.h" 1 3
# 14 "/usr/include/_G_config.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 354 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3
# 24 "/usr/include/_G_config.h" 3
# 1 "/usr/include/wchar.h" 1 3
# 48 "/usr/include/wchar.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 49 "/usr/include/wchar.h" 2 3

# 1 "/usr/include/bits/wchar.h" 1 3
# 51 "/usr/include/wchar.h" 2 3
# 63 "/usr/include/wchar.h" 3








typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3
# 1 "/usr/include/gconv.h" 1 3
# 28 "/usr/include/gconv.h" 3
# 1 "/usr/include/wchar.h" 1 3
# 48 "/usr/include/wchar.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 49 "/usr/include/wchar.h" 2 3
# 63 "/usr/include/wchar.h" 3

# 29 "/usr/include/gconv.h" 2 3


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 32 "/usr/include/gconv.h" 2 3





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
                            __const unsigned char **, __const unsigned char *,
                            unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
                                  struct __gconv_step_data *, void *,
                                  __const unsigned char *,
                                  __const unsigned char **,
                                  __const unsigned char *, unsigned char **,
                                  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
                                          __const unsigned char *,
                                          unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
                                        size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3
# 53 "/usr/include/libio.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stdarg.h" 1 3
# 43 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3
# 162 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 172 "/usr/include/libio.h" 3
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 195 "/usr/include/libio.h" 3
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 263 "/usr/include/libio.h" 3
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 311 "/usr/include/libio.h" 3
  __off64_t _offset;





  void *__pad1;
  void *__pad2;

  int _mode;

  char _unused2[15 * sizeof (int) - 2 * sizeof (void *)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 350 "/usr/include/libio.h" 3
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
                             void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *) throw ();
extern int __uflow (_IO_FILE *) throw ();
extern int __overflow (_IO_FILE *, int) throw ();
extern wint_t __wunderflow (_IO_FILE *) throw ();
extern wint_t __wuflow (_IO_FILE *) throw ();
extern wint_t __woverflow (_IO_FILE *, wint_t) throw ();
# 432 "/usr/include/libio.h" 3
extern int _IO_getc (_IO_FILE *__fp) throw ();
extern int _IO_putc (int __c, _IO_FILE *__fp) throw ();
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp) throw ();





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 462 "/usr/include/libio.h" 3
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                        __gnuc_va_list, int *__restrict) throw ();
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                         __gnuc_va_list) throw ();
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t) throw ();
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t) throw ();

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int) throw ();
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int) throw ();

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 520 "/usr/include/libio.h" 3
}
# 73 "/usr/include/stdio.h" 2 3




typedef __gnuc_va_list va_list;
# 86 "/usr/include/stdio.h" 3


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 138 "/usr/include/stdio.h" 3
# 1 "/usr/include/bits/stdio_lim.h" 1 3
# 139 "/usr/include/stdio.h" 2 3



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();






extern FILE *tmpfile (void) throw ();
# 173 "/usr/include/stdio.h" 3
extern char *tmpnam (char *__s) throw ();



extern FILE *tmpfile64 (void) throw ();





extern char *tmpnam_r (char *__s) throw ();
# 195 "/usr/include/stdio.h" 3
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__));





extern int fclose (FILE *__stream) throw ();

extern int fflush (FILE *__stream) throw ();




extern int fflush_unlocked (FILE *__stream) throw ();




extern int fcloseall (void) throw ();






extern FILE *fopen (__const char *__restrict __filename,
                    __const char *__restrict __modes) throw ();

extern FILE *freopen (__const char *__restrict __filename,
                      __const char *__restrict __modes,
                      FILE *__restrict __stream) throw ();
# 241 "/usr/include/stdio.h" 3


extern FILE *fopen64 (__const char *__restrict __filename,
                      __const char *__restrict __modes) throw ();
extern FILE *freopen64 (__const char *__restrict __filename,
                        __const char *__restrict __modes,
                        FILE *__restrict __stream) throw ();




extern FILE *fdopen (int __fd, __const char *__modes) throw ();





extern FILE *fopencookie (void *__restrict __magic_cookie,
                          __const char *__restrict __modes,
                          _IO_cookie_io_functions_t __io_funcs) throw ();


extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes) throw ();




extern FILE *open_memstream (char **__restrict __bufloc,
                             size_t *__restrict __sizeloc) throw ();






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                    int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
                       size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();





extern int fprintf (FILE *__restrict __stream,
                    __const char *__restrict __format, ...) throw ();

extern int printf (__const char *__restrict __format, ...) throw ();

extern int sprintf (char *__restrict __s,
                    __const char *__restrict __format, ...) throw ();


extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) throw ();

extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg)
     throw ();

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
                     __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
                      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
                      __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern int __asprintf (char **__restrict __ptr,
                       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int asprintf (char **__restrict __ptr,
                     __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));


extern int vdprintf (int __fd, __const char *__restrict __fmt,
                     __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));





extern int fscanf (FILE *__restrict __stream,
                   __const char *__restrict __format, ...) throw ();

extern int scanf (__const char *__restrict __format, ...) throw ();

extern int sscanf (__const char *__restrict __s,
                   __const char *__restrict __format, ...) throw ();





extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
                    __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));


extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 1, 0)));


extern int vsscanf (__const char *__restrict __s,
                    __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));






extern int fgetc (FILE *__stream) throw ();
extern int getc (FILE *__stream) throw ();


extern int getchar (void) throw ();








extern int getc_unlocked (FILE *__stream) throw ();
extern int getchar_unlocked (void) throw ();




extern int fgetc_unlocked (FILE *__stream) throw ();





extern int fputc (int __c, FILE *__stream) throw ();
extern int putc (int __c, FILE *__stream) throw ();


extern int putchar (int __c) throw ();








extern int fputc_unlocked (int __c, FILE *__stream) throw ();




extern int putc_unlocked (int __c, FILE *__stream) throw ();
extern int putchar_unlocked (int __c) throw ();





extern int getw (FILE *__stream) throw ();


extern int putw (int __w, FILE *__stream) throw ();





extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     throw ();



extern char *gets (char *__s) throw ();




extern char *fgets_unlocked (char *__restrict __s, int __n,
                             FILE *__restrict __stream) throw ();
# 463 "/usr/include/stdio.h" 3
extern __ssize_t __getdelim (char **__restrict __lineptr,
                               size_t *__restrict __n, int __delimiter,
                               FILE *__restrict __stream) throw ();
extern __ssize_t getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) throw ();


extern __ssize_t getline (char **__restrict __lineptr,
                            size_t *__restrict __n,
                            FILE *__restrict __stream) throw ();





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream)
     throw ();


extern int puts (__const char *__s) throw ();



extern int ungetc (int __c, FILE *__stream) throw ();



extern size_t fread (void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __stream) throw ();

extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                      size_t __n, FILE *__restrict __s) throw ();




extern int fputs_unlocked (__const char *__restrict __s,
                           FILE *__restrict __stream) throw ();




extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream) throw ();
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                               size_t __n, FILE *__restrict __stream) throw ();





extern int fseek (FILE *__stream, long int __off, int __whence) throw ();

extern long int ftell (FILE *__stream) throw ();

extern void rewind (FILE *__stream) throw ();

# 530 "/usr/include/stdio.h" 3
extern int fseeko (FILE *__stream, __off_t __off, int __whence) throw ();

extern __off_t ftello (FILE *__stream) throw ();
# 546 "/usr/include/stdio.h" 3



extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
     throw ();

extern int fsetpos (FILE *__stream, __const fpos_t *__pos) throw ();
# 565 "/usr/include/stdio.h" 3



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence) throw ();
extern __off64_t ftello64 (FILE *__stream) throw ();
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos)
     throw ();
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos) throw ();




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw ();

extern int ferror (FILE *__stream) throw ();




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw ();
extern int ferror_unlocked (FILE *__stream) throw ();





extern void perror (__const char *__s) throw ();






# 1 "/usr/include/bits/sys_errlist.h" 1 3
# 27 "/usr/include/bits/sys_errlist.h" 3
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 602 "/usr/include/stdio.h" 2 3




extern int fileno (FILE *__stream) throw ();




extern int fileno_unlocked (FILE *__stream) throw ();






extern FILE *popen (__const char *__command, __const char *__modes) throw ();


extern int pclose (FILE *__stream) throw ();





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s) throw ();




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
                           __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
                            __const char *__restrict __format,
                            __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw ();


extern void funlockfile (FILE *__stream) throw ();
# 679 "/usr/include/stdio.h" 3
}
# 7 "../inc/mgcomm.h" 2
# 1 "/usr/include/stdlib.h" 1 3
# 33 "/usr/include/stdlib.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 34 "/usr/include/stdlib.h" 2 3

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3
# 43 "/usr/include/stdlib.h" 2 3
# 1 "/usr/include/bits/waitstatus.h" 1 3
# 63 "/usr/include/bits/waitstatus.h" 3
# 1 "/usr/include/endian.h" 1 3
# 37 "/usr/include/endian.h" 3
# 1 "/usr/include/bits/endian.h" 1 3
# 38 "/usr/include/endian.h" 2 3
# 64 "/usr/include/bits/waitstatus.h" 2 3

union wait
  {
    int w_status;
    struct
      {

        unsigned int __w_termsig:7;
        unsigned int __w_coredump:1;
        unsigned int __w_retcode:8;
        unsigned int:16;







      } __wait_terminated;
    struct
      {

        unsigned int __w_stopval:8;
        unsigned int __w_stopsig:8;
        unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3
# 93 "/usr/include/stdlib.h" 3


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 137 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max (void) throw ();




extern double atof (__const char *__nptr) throw () __attribute__ ((__pure__));

extern int atoi (__const char *__nptr) throw () __attribute__ ((__pure__));

extern long int atol (__const char *__nptr) throw () __attribute__ ((__pure__));





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__));





extern double strtod (__const char *__restrict __nptr,
                      char **__restrict __endptr) throw ();





extern float strtof (__const char *__restrict __nptr,
                     char **__restrict __endptr) throw ();

extern long double strtold (__const char *__restrict __nptr,
                            char **__restrict __endptr) throw ();





extern long int strtol (__const char *__restrict __nptr,
                        char **__restrict __endptr, int __base) throw ();

extern unsigned long int strtoul (__const char *__restrict __nptr,
                                  char **__restrict __endptr, int __base)
     throw ();




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
                             char **__restrict __endptr, int __base) throw ();

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
                                       char **__restrict __endptr, int __base)
     throw ();





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
                              char **__restrict __endptr, int __base) throw ();

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
                                        char **__restrict __endptr, int __base)
     throw ();

# 225 "/usr/include/stdlib.h" 3
# 1 "/usr/include/xlocale.h" 1 3
# 28 "/usr/include/xlocale.h" 3
typedef struct __locale_struct
{

  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;
# 226 "/usr/include/stdlib.h" 2 3



extern long int strtol_l (__const char *__restrict __nptr,
                          char **__restrict __endptr, int __base,
                          __locale_t __loc) throw ();

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
                                    char **__restrict __endptr,
                                    int __base, __locale_t __loc) throw ();

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __base,
                                __locale_t __loc) throw ();

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
                                          char **__restrict __endptr,
                                          int __base, __locale_t __loc)
     throw ();

extern double strtod_l (__const char *__restrict __nptr,
                        char **__restrict __endptr, __locale_t __loc)
     throw ();

extern float strtof_l (__const char *__restrict __nptr,
                       char **__restrict __endptr, __locale_t __loc) throw ();

extern long double strtold_l (__const char *__restrict __nptr,
                              char **__restrict __endptr,
                              __locale_t __loc) throw ();






extern double __strtod_internal (__const char *__restrict __nptr,
                                 char **__restrict __endptr, int __group)
     throw ();
extern float __strtof_internal (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __group)
     throw ();
extern long double __strtold_internal (__const char *__restrict __nptr,
                                       char **__restrict __endptr,
                                       int __group) throw ();

extern long int __strtol_internal (__const char *__restrict __nptr,
                                   char **__restrict __endptr,
                                   int __base, int __group) throw ();



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
                                             char **__restrict __endptr,
                                             int __base, int __group) throw ();




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
                                         char **__restrict __endptr,
                                         int __base, int __group) throw ();



__extension__
extern unsigned long long int __strtoull_internal (__const char *
                                                   __restrict __nptr,
                                                   char **__restrict __endptr,
                                                   int __base, int __group)
     throw ();
# 408 "/usr/include/stdlib.h" 3
extern char *l64a (long int __n) throw ();


extern long int a64l (__const char *__s) throw () __attribute__ ((__pure__));




# 1 "/usr/include/sys/types.h" 1 3
# 29 "/usr/include/sys/types.h" 3
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3
# 1 "/usr/include/time.h" 1 3
# 58 "/usr/include/time.h" 3


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 148 "/usr/include/sys/types.h" 2 3



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 191 "/usr/include/sys/types.h" 3
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 216 "/usr/include/sys/types.h" 3
# 1 "/usr/include/sys/select.h" 1 3
# 31 "/usr/include/sys/select.h" 3
# 1 "/usr/include/bits/select.h" 1 3
# 32 "/usr/include/sys/select.h" 2 3


# 1 "/usr/include/bits/sigset.h" 1 3
# 23 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3
# 118 "/usr/include/time.h" 3
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3

# 1 "/usr/include/bits/time.h" 1 3
# 69 "/usr/include/bits/time.h" 3
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3
# 55 "/usr/include/sys/select.h" 3
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3
extern "C" {






extern int select (int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   struct timeval *__restrict __timeout) throw ();





extern int pselect (int __nfds, fd_set *__restrict __readfds,
                    fd_set *__restrict __writefds,
                    fd_set *__restrict __exceptfds,
                    const struct timespec *__restrict __timeout,
                    const __sigset_t *__restrict __sigmask) throw ();


}
# 217 "/usr/include/sys/types.h" 2 3


# 1 "/usr/include/sys/sysmacros.h" 1 3
# 220 "/usr/include/sys/types.h" 2 3




typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 258 "/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3
# 23 "/usr/include/bits/pthreadtypes.h" 3
# 1 "/usr/include/bits/sched.h" 1 3
# 83 "/usr/include/bits/sched.h" 3
struct __sched_param
  {
    int __sched_priority;
  };
# 24 "/usr/include/bits/pthreadtypes.h" 2 3


struct _pthread_fastlock
{
  long int __status;
  int __spinlock;

};



typedef struct _pthread_descr_struct *_pthread_descr;





typedef struct __pthread_attr_s
{
  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
} pthread_attr_t;





__extension__ typedef long long __pthread_cond_align_t;




typedef struct
{
  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;
  char __padding[48 - sizeof (struct _pthread_fastlock)
                 - sizeof (_pthread_descr) - sizeof (__pthread_cond_align_t)];
  __pthread_cond_align_t __align;
} pthread_cond_t;



typedef struct
{
  int __dummy;
} pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct
{
  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
} pthread_mutex_t;



typedef struct
{
  int __mutexkind;
} pthread_mutexattr_t;



typedef int pthread_once_t;




typedef struct _pthread_rwlock_t
{
  struct _pthread_fastlock __rw_lock;
  int __rw_readers;
  _pthread_descr __rw_writer;
  _pthread_descr __rw_read_waiting;
  _pthread_descr __rw_write_waiting;
  int __rw_kind;
  int __rw_pshared;
} pthread_rwlock_t;



typedef struct
{
  int __lockkind;
  int __pshared;
} pthread_rwlockattr_t;




typedef volatile int pthread_spinlock_t;


typedef struct {
  struct _pthread_fastlock __ba_lock;
  int __ba_required;
  int __ba_present;
  _pthread_descr __ba_waiting;
} pthread_barrier_t;


typedef struct {
  int __pshared;
} pthread_barrierattr_t;





typedef unsigned long int pthread_t;
# 267 "/usr/include/sys/types.h" 2 3


}
# 417 "/usr/include/stdlib.h" 2 3






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
                        size_t __statelen) throw ();



extern char *setstate (char *__statebuf) throw ();







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
                     int32_t *__restrict __result) throw ();

extern int srandom_r (unsigned int __seed, struct random_data *__buf) throw ();

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
                        size_t __statelen,
                        struct random_data *__restrict __buf) throw ();

extern int setstate_r (char *__restrict __statebuf,
                       struct random_data *__restrict __buf) throw ();






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw ();


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3]) throw ();


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3]) throw ();


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3]) throw ();
extern void lcong48 (unsigned short int __param[7]) throw ();





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
                      double *__restrict __result) throw ();
extern int erand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      double *__restrict __result) throw ();


extern int lrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();
extern int nrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();


extern int mrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();
extern int jrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw ();

extern int seed48_r (unsigned short int __seed16v[3],
                     struct drand48_data *__buffer) throw ();

extern int lcong48_r (unsigned short int __param[7],
                      struct drand48_data *__buffer) throw ();









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__));







extern void *realloc (void *__ptr, size_t __size) throw () __attribute__ ((__malloc__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3
# 25 "/usr/include/alloca.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 26 "/usr/include/alloca.h" 2 3

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 579 "/usr/include/stdlib.h" 2 3




extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw ();





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw ();






extern void exit (int __status) throw () __attribute__ ((__noreturn__));






extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw ();




extern char *__secure_getenv (__const char *__name) throw ();





extern int putenv (char *__string) throw ();





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw ();


extern int unsetenv (__const char *__name) throw ();






extern int clearenv (void) throw ();
# 663 "/usr/include/stdlib.h" 3
extern char *mktemp (char *__template) throw ();







extern int mkstemp (char *__template) throw ();
# 680 "/usr/include/stdlib.h" 3
extern int mkstemp64 (char *__template) throw ();
# 690 "/usr/include/stdlib.h" 3
extern char *mkdtemp (char *__template) throw ();





extern int system (__const char *__command) throw ();







extern char *canonicalize_file_name (__const char *__name) throw ();
# 714 "/usr/include/stdlib.h" 3
extern char *realpath (__const char *__restrict __name,
                       char *__restrict __resolved) throw ();






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;






extern void *bsearch (__const void *__key, __const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar);



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar);



extern int abs (int __x) throw () __attribute__ ((__const__));
extern long int labs (long int __x) throw () __attribute__ ((__const__));



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__));







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__));




__extension__ extern lldiv_t lldiv (long long int __numer,
                                    long long int __denom)
     throw () __attribute__ ((__const__));

# 778 "/usr/include/stdlib.h" 3
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) throw ();




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) throw ();




extern char *gcvt (double __value, int __ndigit, char *__buf) throw ();




extern char *qecvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign) throw ();
extern char *qfcvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign) throw ();
extern char *qgcvt (long double __value, int __ndigit, char *__buf) throw ();




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) throw ();
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) throw ();

extern int qecvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len) throw ();
extern int qfcvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len) throw ();







extern int mblen (__const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
                   __const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
                        __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
                        __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw ();
# 860 "/usr/include/stdlib.h" 3
extern int getsubopt (char **__restrict __optionp,
                      char *__const *__restrict __tokens,
                      char **__restrict __valuep) throw ();





extern void setkey (__const char *__key) throw ();







extern int posix_openpt (int __oflag) throw ();







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw ();






extern int ptsname_r (int __fd, char *__buf, size_t __buflen) throw ();


extern int getpt (void) throw ();






extern int getloadavg (double __loadavg[], int __nelem) throw ();





}
# 8 "../inc/mgcomm.h" 2
# 1 "/usr/include/string.h" 1 3
# 28 "/usr/include/string.h" 3
extern "C" {




# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 34 "/usr/include/string.h" 2 3




extern void *memcpy (void *__restrict __dest,
                     __const void *__restrict __src, size_t __n) throw ();


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw ();






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
                      int __c, size_t __n)
     throw ();





extern void *memset (void *__s, int __c, size_t __n) throw ();


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern void *memchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__));





extern void *rawmemchr (__const void *__s, int __c) throw () __attribute__ ((__pure__));


extern void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__));





extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();

extern char *strncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n) throw ();


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw ();

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
                      size_t __n) throw ();


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));

extern size_t strxfrm (char *__restrict __dest,
                       __const char *__restrict __src, size_t __n) throw ();

# 117 "/usr/include/string.h" 3
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
                         __locale_t __l) throw ();




extern char *strdup (__const char *__s) throw () __attribute__ ((__malloc__));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__));
# 160 "/usr/include/string.h" 3


extern char *strchr (__const char *__s, int __c) throw () __attribute__ ((__pure__));

extern char *strrchr (__const char *__s, int __c) throw () __attribute__ ((__pure__));





extern char *strchrnul (__const char *__s, int __c) throw () __attribute__ ((__pure__));





extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__));

extern char *strpbrk (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__));

extern char *strstr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw ();




extern char *__strtok_r (char *__restrict __s,
                         __const char *__restrict __delim,
                         char **__restrict __save_ptr) throw ();

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
                       char **__restrict __save_ptr) throw ();




extern char *strcasestr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__));






extern void *memmem (__const void *__haystack, size_t __haystacklen,
                     __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__));



extern void *__mempcpy (void *__restrict __dest,
                        __const void *__restrict __src, size_t __n) throw ();
extern void *mempcpy (void *__restrict __dest,
                      __const void *__restrict __src, size_t __n) throw ();





extern size_t strlen (__const char *__s) throw () __attribute__ ((__pure__));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__));





extern char *strerror (int __errnum) throw ();




extern char *strerror_r (int __errnum, char *__buf, size_t __buflen) throw ();




extern void __bzero (void *__s, size_t __n) throw ();



extern void bcopy (__const void *__src, void *__dest, size_t __n) throw ();


extern void bzero (void *__s, size_t __n) throw ();


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern char *index (__const char *__s, int __c) throw () __attribute__ ((__pure__));


extern char *rindex (__const char *__s, int __c) throw () __attribute__ ((__pure__));



extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
                         __locale_t __loc) throw () __attribute__ ((__pure__));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
                          size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__));





extern char *strsep (char **__restrict __stringp,
                     __const char *__restrict __delim) throw ();




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));


extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();



extern char *__stpncpy (char *__restrict __dest,
                        __const char *__restrict __src, size_t __n) throw ();
extern char *stpncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n) throw ();


extern char *strfry (char *__string) throw ();


extern void *memfrob (void *__s, size_t __n) throw ();






extern char *basename (__const char *__filename) throw ();
# 379 "/usr/include/string.h" 3
}
# 9 "../inc/mgcomm.h" 2
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stdarg.h" 1 3
# 10 "../inc/mgcomm.h" 2
# 1 "/usr/include/unistd.h" 1 3
# 28 "/usr/include/unistd.h" 3
extern "C" {
# 175 "/usr/include/unistd.h" 3
# 1 "/usr/include/bits/posix_opt.h" 1 3
# 176 "/usr/include/unistd.h" 2 3



# 1 "/usr/include/bits/environments.h" 1 3
# 23 "/usr/include/bits/environments.h" 3
# 1 "/usr/include/bits/wordsize.h" 1 3
# 24 "/usr/include/bits/environments.h" 2 3
# 180 "/usr/include/unistd.h" 2 3
# 199 "/usr/include/unistd.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 200 "/usr/include/unistd.h" 2 3
# 240 "/usr/include/unistd.h" 3
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 260 "/usr/include/unistd.h" 3
extern int access (__const char *__name, int __type) throw ();




extern int euidaccess (__const char *__name, int __type) throw ();
# 290 "/usr/include/unistd.h" 3
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 302 "/usr/include/unistd.h" 3
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence) throw ();



extern int close (int __fd) throw ();



extern ssize_t read (int __fd, void *__buf, size_t __nbytes) throw ();


extern ssize_t write (int __fd, __const void *__buf, size_t __n) throw ();



extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
     throw ();
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
                       __off_t __offset) throw ();
# 340 "/usr/include/unistd.h" 3
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
                        __off64_t __offset) throw ();


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
                         __off64_t __offset) throw ();







extern int pipe (int __pipedes[2]) throw ();
# 362 "/usr/include/unistd.h" 3
extern unsigned int alarm (unsigned int __seconds) throw ();
# 371 "/usr/include/unistd.h" 3
extern unsigned int sleep (unsigned int __seconds) throw ();






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();



extern int usleep (__useconds_t __useconds) throw ();





extern int pause (void) throw ();



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw ();



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw ();




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw ();




extern int chdir (__const char *__path) throw ();



extern int fchdir (int __fd) throw ();
# 423 "/usr/include/unistd.h" 3
extern char *getcwd (char *__buf, size_t __size) throw ();





extern char *get_current_dir_name (void) throw ();






extern char *getwd (char *__buf) throw ();




extern int dup (int __fd) throw ();


extern int dup2 (int __fd, int __fd2) throw ();


extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
                   char *__const __envp[]) throw ();




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw ();




extern int execv (__const char *__path, char *__const __argv[]) throw ();



extern int execle (__const char *__path, __const char *__arg, ...) throw ();



extern int execl (__const char *__path, __const char *__arg, ...) throw ();



extern int execvp (__const char *__file, char *__const __argv[]) throw ();




extern int execlp (__const char *__file, __const char *__arg, ...) throw ();




extern int nice (int __inc) throw ();




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3
# 25 "/usr/include/bits/confname.h" 3
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,


    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS

  };
# 501 "/usr/include/unistd.h" 2 3


extern long int pathconf (__const char *__path, int __name) throw ();


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw () __attribute__ ((__const__));



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 536 "/usr/include/unistd.h" 3
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 562 "/usr/include/unistd.h" 3
extern int setpgrp (void) throw ();
# 580 "/usr/include/unistd.h" 3
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw ();



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__euid, __uid_t *__ruid, __uid_t *__suid);



extern int getresgid (__gid_t *__egid, __gid_t *__rgid, __gid_t *__sgid);



extern int setresuid (__uid_t __euid, __uid_t __ruid, __uid_t __suid);



extern int setresgid (__gid_t __egid, __gid_t __rgid, __gid_t __sgid);






extern __pid_t fork (void) throw ();






extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen) throw ();



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to) throw ();



extern int symlink (__const char *__from, __const char *__to) throw ();




extern int readlink (__const char *__restrict __path, char *__restrict __buf,
                     size_t __len) throw ();



extern int unlink (__const char *__name) throw ();


extern int rmdir (__const char *__path) throw ();



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();



extern char *getlogin (void) throw ();




extern int getlogin_r (char *__name, size_t __name_len) throw ();




extern int setlogin (__const char *__name) throw ();
# 744 "/usr/include/unistd.h" 3
# 1 "/usr/include/getopt.h" 1 3
# 38 "/usr/include/getopt.h" 3
extern "C" {
# 47 "/usr/include/getopt.h" 3
extern char *optarg;
# 61 "/usr/include/getopt.h" 3
extern int optind;




extern int opterr;



extern int optopt;
# 145 "/usr/include/getopt.h" 3
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts);
# 175 "/usr/include/getopt.h" 3
}
# 745 "/usr/include/unistd.h" 2 3







extern int gethostname (char *__name, size_t __len) throw ();






extern int sethostname (__const char *__name, size_t __len) throw ();



extern int sethostid (long int __id) throw ();





extern int getdomainname (char *__name, size_t __len) throw ();
extern int setdomainname (__const char *__name, size_t __len) throw ();





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw ();







extern int profil (unsigned short int *__sample_buffer, size_t __size,
                   size_t __offset, unsigned int __scale) throw ();





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw ();






extern int chroot (__const char *__path) throw ();



extern char *getpass (__const char *__prompt) throw ();





extern int fsync (int __fd) throw ();






extern long int gethostid (void) throw ();


extern void sync (void) throw ();




extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int truncate (__const char *__file, __off_t __length) throw ();
# 854 "/usr/include/unistd.h" 3
extern int truncate64 (__const char *__file, __off64_t __length) throw ();




extern int ftruncate (int __fd, __off_t __length) throw ();
# 869 "/usr/include/unistd.h" 3
extern int ftruncate64 (int __fd, __off64_t __length) throw ();





extern int getdtablesize (void) throw ();
# 884 "/usr/include/unistd.h" 3
extern int brk (void *__addr) throw ();





extern void *sbrk (intptr_t __delta) throw ();
# 905 "/usr/include/unistd.h" 3
extern long int syscall (long int __sysno, ...) throw ();
# 925 "/usr/include/unistd.h" 3
extern int lockf (int __fd, int __cmd, __off_t __len) throw ();
# 935 "/usr/include/unistd.h" 3
extern int lockf64 (int __fd, int __cmd, __off64_t __len) throw ();
# 956 "/usr/include/unistd.h" 3
extern int fdatasync (int __fildes) throw ();







extern char *crypt (__const char *__key, __const char *__salt) throw ();



extern void encrypt (char *__block, int __edflag) throw ();






extern void swab (__const void *__restrict __from, void *__restrict __to,
                  ssize_t __n) throw ();







extern char *ctermid (char *__s) throw ();
# 1001 "/usr/include/unistd.h" 3
extern int pthread_atfork (void (*__prepare) (void),
                           void (*__parent) (void),
                           void (*__child) (void)) throw ();


}
# 11 "../inc/mgcomm.h" 2


# 1 "/usr/local/include/minigui/common.h" 1 3
# 55 "/usr/local/include/minigui/common.h" 3
# 1 "/usr/local/include/minigui/mgconfig.h" 1 3
# 56 "/usr/local/include/minigui/common.h" 2 3
# 101 "/usr/local/include/minigui/common.h" 3
typedef unsigned char Uint8;




typedef signed char Sint8;




typedef unsigned short Uint16;




typedef signed short Sint16;




typedef unsigned int Uint32;




typedef signed int Sint32;
# 150 "/usr/local/include/minigui/common.h" 3
typedef unsigned long long Uint64;






typedef signed long long Sint64;
# 170 "/usr/local/include/minigui/common.h" 3
typedef int MGUI_dummy_uint8[(sizeof(Uint8) == 1) * 2 - 1];
typedef int MGUI_dummy_sint8[(sizeof(Sint8) == 1) * 2 - 1];
typedef int MGUI_dummy_uint16[(sizeof(Uint16) == 2) * 2 - 1];
typedef int MGUI_dummy_sint16[(sizeof(Sint16) == 2) * 2 - 1];
typedef int MGUI_dummy_uint32[(sizeof(Uint32) == 4) * 2 - 1];
typedef int MGUI_dummy_sint32[(sizeof(Sint32) == 4) * 2 - 1];
typedef int MGUI_dummy_uint64[(sizeof(Uint64) == 8) * 2 - 1];
typedef int MGUI_dummy_sint64[(sizeof(Sint64) == 8) * 2 - 1];
# 247 "/usr/local/include/minigui/common.h" 3
typedef int BOOL;
# 302 "/usr/local/include/minigui/common.h" 3
typedef unsigned int GHANDLE;




typedef unsigned int HWND;




typedef unsigned int HDC;




typedef unsigned int HPALETTE;




typedef unsigned int HCURSOR;




typedef unsigned int HICON;




typedef unsigned int HMENU;




typedef unsigned int HACCEL;




typedef unsigned int HDLG;




typedef unsigned int HHOOK;
# 361 "/usr/local/include/minigui/common.h" 3
typedef unsigned char BYTE;





typedef signed char SBYTE;






typedef unsigned short WORD;






typedef signed short SWORD;






typedef unsigned long DWORD;






typedef signed long SDWORD;






typedef unsigned int UINT;







typedef long LONG;






typedef unsigned int WPARAM;





typedef unsigned long LPARAM;
# 526 "/usr/local/include/minigui/common.h" 3
typedef DWORD RGBCOLOR;
# 537 "/usr/local/include/minigui/common.h" 3
typedef struct _RECT
{



    int left;



    int top;



    int right;



    int bottom;
} RECT;






typedef RECT* PRECT;





typedef struct _POINT
{



    int x;



    int y;
} POINT;






typedef POINT* PPOINT;





typedef struct _SIZE
{



    int cx;



    int cy;
} SIZE;






typedef SIZE* PSIZE;





typedef struct _RGB
{



    BYTE r;



    BYTE g;



    BYTE b;



    BYTE a;
} RGB;







typedef RGB* PRGB;
# 654 "/usr/local/include/minigui/common.h" 3
typedef Sint8 gal_sint8;






typedef Uint8 gal_uint8;







typedef Sint16 gal_sint16;






typedef Uint16 gal_uint16;







typedef Sint32 gal_sint32;






typedef Uint32 gal_uint32;





typedef signed int gal_sint;




typedef unsigned int gal_uint;





typedef Uint32 gal_pixel;




typedef Uint32 gal_attr;





typedef long fixed;





typedef struct _GAL_Color
{



    gal_uint8 r;



    gal_uint8 g;



    gal_uint8 b;



    gal_uint8 a;
} GAL_Color;





typedef struct _GAL_Palette
{



    int ncolors;



    GAL_Color* colors;
} GAL_Palette;





typedef struct _GAL_Rect {



    Sint32 x, y;



    Sint32 w, h;
} GAL_Rect;
# 1389 "/usr/local/include/minigui/common.h" 3
# 1 "/usr/include/dirent.h" 1 3
# 28 "/usr/include/dirent.h" 3
extern "C" {
# 62 "/usr/include/dirent.h" 3
# 1 "/usr/include/bits/dirent.h" 1 3
# 23 "/usr/include/bits/dirent.h" 3
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 63 "/usr/include/dirent.h" 2 3
# 98 "/usr/include/dirent.h" 3
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 128 "/usr/include/dirent.h" 3
typedef struct __dirstream DIR;



extern DIR *opendir (__const char *__name) throw ();



extern int closedir (DIR *__dirp) throw ();
# 146 "/usr/include/dirent.h" 3
extern struct dirent *readdir (DIR *__dirp) throw ();
# 156 "/usr/include/dirent.h" 3
extern struct dirent64 *readdir64 (DIR *__dirp) throw ();






extern int readdir_r (DIR *__restrict __dirp,
                      struct dirent *__restrict __entry,
                      struct dirent **__restrict __result) throw ();
# 179 "/usr/include/dirent.h" 3
extern int readdir64_r (DIR *__restrict __dirp,
                        struct dirent64 *__restrict __entry,
                        struct dirent64 **__restrict __result) throw ();




extern void rewinddir (DIR *__dirp) throw ();





extern void seekdir (DIR *__dirp, long int __pos) throw ();


extern long int telldir (DIR *__dirp) throw ();





extern int dirfd (DIR *__dirp) throw ();







# 1 "/usr/include/bits/posix1_lim.h" 1 3
# 126 "/usr/include/bits/posix1_lim.h" 3
# 1 "/usr/include/bits/local_lim.h" 1 3
# 36 "/usr/include/bits/local_lim.h" 3
# 1 "/usr/include/linux/limits.h" 1 3
# 37 "/usr/include/bits/local_lim.h" 2 3
# 127 "/usr/include/bits/posix1_lim.h" 2 3
# 210 "/usr/include/dirent.h" 2 3
# 220 "/usr/include/dirent.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 1 3
# 221 "/usr/include/dirent.h" 2 3






extern int scandir (__const char *__restrict __dir,
                    struct dirent ***__restrict __namelist,
                    int (*__selector) (__const struct dirent *),
                    int (*__cmp) (__const void *, __const void *)) throw ();
# 247 "/usr/include/dirent.h" 3
extern int scandir64 (__const char *__restrict __dir,
                      struct dirent64 ***__restrict __namelist,
                      int (*__selector) (__const struct dirent64 *),
                      int (*__cmp) (__const void *, __const void *)) throw ();




extern int alphasort (__const void *__e1, __const void *__e2)
     throw () __attribute__ ((__pure__));
# 269 "/usr/include/dirent.h" 3
extern int alphasort64 (__const void *__e1, __const void *__e2)
     throw () __attribute__ ((__pure__));





extern int versionsort (__const void *__e1, __const void *__e2)
     throw () __attribute__ ((__pure__));
# 290 "/usr/include/dirent.h" 3
extern int versionsort64 (__const void *__e1, __const void *__e2)
     throw () __attribute__ ((__pure__));
# 300 "/usr/include/dirent.h" 3
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
                                size_t __nbytes,
                                __off_t *__restrict __basep) throw ();
# 316 "/usr/include/dirent.h" 3
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
                                  size_t __nbytes,
                                  __off64_t *__restrict __basep) throw ();




}
# 1390 "/usr/local/include/minigui/common.h" 2 3
# 1423 "/usr/local/include/minigui/common.h" 3
extern "C" {
# 1481 "/usr/local/include/minigui/common.h" 3
};
# 14 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/minigui.h" 1 3
# 37 "/usr/local/include/minigui/minigui.h" 3
extern "C" {
# 54 "/usr/local/include/minigui/minigui.h" 3
extern RECT g_rcScr;
# 84 "/usr/local/include/minigui/minigui.h" 3
extern BOOL mgIsServer;
# 95 "/usr/local/include/minigui/minigui.h" 3
extern void* mgSharedRes;
# 105 "/usr/local/include/minigui/minigui.h" 3
extern size_t mgSizeRes;
# 125 "/usr/local/include/minigui/minigui.h" 3
struct _MG_Layer;


typedef struct _MG_Client
{

    char name [14 + 1];


    pid_t pid;

    uid_t uid;

    int fd;


    BOOL has_dirty;

    DWORD last_live_time;

    DWORD dwAddData;


    struct _MG_Client* next;

    struct _MG_Client* prev;


    struct _MG_Layer* layer;


    struct GlobalRes* global_res;
} MG_Client;


typedef struct _MG_Layer
{

    char name [14 + 1];


    DWORD dwAddData;


    MG_Client* cli_head;

    MG_Client* cli_active;


    struct _MG_Layer* next;

    struct _MG_Layer* prev;


    void* zorder_info;

    int zorder_shmid;
} MG_Layer;







extern int mgClientSize;
# 202 "/usr/local/include/minigui/minigui.h" 3
extern MG_Client* mgClients;







extern MG_Layer* mgTopmostLayer;







extern MG_Layer* mgLayers;
# 234 "/usr/local/include/minigui/minigui.h" 3
 int InitGUI (int, const char **);
# 243 "/usr/local/include/minigui/minigui.h" 3
 void TerminateGUI (int rcByGUI);
# 254 "/usr/local/include/minigui/minigui.h" 3
 void MiniGUIPanic (int exitcode);
# 323 "/usr/local/include/minigui/minigui.h" 3
 BOOL RegisterListenFD (int fd, int type,
                HWND hwnd, void* context);
# 340 "/usr/local/include/minigui/minigui.h" 3
 BOOL UnregisterListenFD (int fd);
# 411 "/usr/local/include/minigui/minigui.h" 3
 GHANDLE JoinLayer (const char* layer_name,
                const char* client_name,
                int max_nr_topmosts, int max_nr_normals);
# 439 "/usr/local/include/minigui/minigui.h" 3
 GHANDLE GetLayerInfo (const char* layer_name,
                int* nr_clients, BOOL* is_topmost, int* cli_active);
# 459 "/usr/local/include/minigui/minigui.h" 3
 BOOL SetTopmostLayer (BOOL handle_name,
                GHANDLE handle, const char* name);
# 479 "/usr/local/include/minigui/minigui.h" 3
 BOOL DeleteLayer (BOOL handle_name,
                        GHANDLE handle, const char* layer_name);
# 516 "/usr/local/include/minigui/minigui.h" 3
typedef void (* ON_NEW_DEL_CLIENT) (int op, int cli);
# 562 "/usr/local/include/minigui/minigui.h" 3
typedef void (* ON_CHANGE_LAYER) (int op, MG_Layer* layer,
                MG_Client* client);
# 588 "/usr/local/include/minigui/minigui.h" 3
extern ON_NEW_DEL_CLIENT OnNewDelClient;
# 619 "/usr/local/include/minigui/minigui.h" 3
extern ON_CHANGE_LAYER OnChangeLayer;
# 647 "/usr/local/include/minigui/minigui.h" 3
 BOOL ServerStartup (int nr_globals,
                int def_nr_topmosts, int def_nr_normals);
# 677 "/usr/local/include/minigui/minigui.h" 3
 MG_Layer* ServerCreateLayer (const char* layer_name,
                int max_nr_topmosts, int max_nr_normals);
# 694 "/usr/local/include/minigui/minigui.h" 3
 BOOL ServerSetTopmostLayer (MG_Layer* layer);
# 710 "/usr/local/include/minigui/minigui.h" 3
 BOOL ServerDeleteLayer (MG_Layer* layer);
# 723 "/usr/local/include/minigui/minigui.h" 3
 int GetClientByPID (int pid);
# 741 "/usr/local/include/minigui/minigui.h" 3
 BOOL SetTopmostClient (int cli);





 void DisableClientsOutput (void);







 void UpdateTopmostLayer (const RECT* dirty_rc);
# 804 "/usr/local/include/minigui/minigui.h" 3
typedef struct _REQUEST {

    int id;

    const void* data;

    size_t len_data;
} REQUEST;

typedef REQUEST* PREQUEST;
# 834 "/usr/local/include/minigui/minigui.h" 3
int ClientRequest (PREQUEST request, void* result, int len_rslt);
# 847 "/usr/local/include/minigui/minigui.h" 3
int GetSockFD2Server (void);
# 866 "/usr/local/include/minigui/minigui.h" 3
int ServerSendReply (int clifd, const void* reply, int len);







typedef int (* REQ_HANDLER) (int cli, int clifd, void* buff, size_t len);
# 894 "/usr/local/include/minigui/minigui.h" 3
BOOL RegisterRequestHandler (int req_id, REQ_HANDLER your_handler);
# 911 "/usr/local/include/minigui/minigui.h" 3
REQ_HANDLER GetRequestHandler (int req_id);
# 947 "/usr/local/include/minigui/minigui.h" 3
int serv_listen (const char* name);
# 970 "/usr/local/include/minigui/minigui.h" 3
int serv_accept (int listenfd, pid_t *pidptr, uid_t *uidptr);
# 992 "/usr/local/include/minigui/minigui.h" 3
int cli_conn (const char* name, char project);
# 1028 "/usr/local/include/minigui/minigui.h" 3
int sock_write_t (int fd, const void* buff,
                int count, unsigned int timeout);
# 1058 "/usr/local/include/minigui/minigui.h" 3
int sock_read_t (int fd, void* buff, int count, unsigned int timeout);
# 1116 "/usr/local/include/minigui/minigui.h" 3
 BOOL ReinitDesktopEx (BOOL init_sys_text);
# 1145 "/usr/local/include/minigui/minigui.h" 3
 void ExitGUISafely (int exitcode);
# 1208 "/usr/local/include/minigui/minigui.h" 3
 typedef void (*CustomizeDesktopMenuFunc) (HMENU hDesktopMenu,
                int iPos);
# 1223 "/usr/local/include/minigui/minigui.h" 3
 typedef int (*CustomDesktopCommandFunc) (int id);






extern CustomizeDesktopMenuFunc CustomizeDesktopMenu;






extern CustomDesktopCommandFunc CustomDesktopCommand;
# 1273 "/usr/local/include/minigui/minigui.h" 3
 BOOL SetMouseCalibrationParameters (const POINT* src_pts,
                const POINT* dst_pts);
# 1306 "/usr/local/include/minigui/minigui.h" 3
 HWND OpenAboutDialog (HWND hHosting);
# 1408 "/usr/local/include/minigui/minigui.h" 3
typedef struct _ETCSECTION
{

    int key_nr_alloc;

    int key_nr;

    char *name;

    char** keys;

    char** values;
} ETCSECTION;

typedef ETCSECTION* PETCSECTION;


typedef struct _ETC_S
{

    int sect_nr_alloc;

    int section_nr;

    PETCSECTION sections;
} ETC_S;
# 1452 "/usr/local/include/minigui/minigui.h" 3
extern char ETCFILEPATH [];
# 1486 "/usr/local/include/minigui/minigui.h" 3
 int GetValueFromEtcFile (const char* pEtcFile,
                const char* pSection, const char* pKey, char* pValue, int iLen);
# 1526 "/usr/local/include/minigui/minigui.h" 3
 int GetIntValueFromEtcFile (const char* pEtcFile,
                const char* pSection, const char* pKey, int* value);
# 1554 "/usr/local/include/minigui/minigui.h" 3
 int SetValueToEtcFile (const char* pEtcFile,
                const char* pSection, const char* pKey, char* pValue);
# 1577 "/usr/local/include/minigui/minigui.h" 3
 int RemoveSectionInEtcFile (const char* pEtcFile,
                const char* pSection);
# 1594 "/usr/local/include/minigui/minigui.h" 3
 GHANDLE LoadEtcFile (const char * pEtcFile);
# 1613 "/usr/local/include/minigui/minigui.h" 3
 int SaveEtcToFile (GHANDLE hEtc, const char* file_name);
# 1628 "/usr/local/include/minigui/minigui.h" 3
 int UnloadEtcFile (GHANDLE hEtc);
# 1658 "/usr/local/include/minigui/minigui.h" 3
 int GetValueFromEtc (GHANDLE hEtc, const char* pSection,
                const char* pKey, char* pValue, int iLen);
# 1668 "/usr/local/include/minigui/minigui.h" 3
 int GetIntValueFromEtc (GHANDLE hEtc, const char* pSection,
                const char* pKey, int* pValue);
# 1701 "/usr/local/include/minigui/minigui.h" 3
 GHANDLE FindSectionInEtc (GHANDLE hEtc,
                const char* pSection, BOOL bCreateNew);
# 1729 "/usr/local/include/minigui/minigui.h" 3
 int GetValueFromEtcSec (GHANDLE hSect,
                const char* pKey, char* pValue, int iLen);
# 1755 "/usr/local/include/minigui/minigui.h" 3
 int GetIntValueFromEtcSec (GHANDLE hSect,
                const char* pKey, int* pValue);
# 1768 "/usr/local/include/minigui/minigui.h" 3
 int SetValueToEtcSec (GHANDLE hSect,
                const char* pKey, char* pValue);
# 1791 "/usr/local/include/minigui/minigui.h" 3
 int RemoveSectionInEtc (GHANDLE hEtc, const char* pSection);


extern GHANDLE hMgEtc;
# 1805 "/usr/local/include/minigui/minigui.h" 3
static inline int GetMgEtcValue(const char* pSection,
                const char *pKey, char *pValue, int iLen)
{

    if (!hMgEtc)
        return GetValueFromEtcFile (ETCFILEPATH, pSection, pKey, pValue, iLen);


    return GetValueFromEtc (hMgEtc, pSection, pKey, pValue, iLen);
}
# 1825 "/usr/local/include/minigui/minigui.h" 3
static inline int GetMgEtcIntValue (const char *pSection,
                const char* pKey, int *value)
{

    if (!hMgEtc)
        return GetIntValueFromEtcFile (ETCFILEPATH, pSection, pKey, value);


    return GetIntValueFromEtc (hMgEtc, pSection, pKey, value);
}
# 1909 "/usr/local/include/minigui/minigui.h" 3
 int CreateClipBoard (const char* cb_name, size_t size);
# 1924 "/usr/local/include/minigui/minigui.h" 3
 int DestroyClipBoard (const char* cb_name);
# 1949 "/usr/local/include/minigui/minigui.h" 3
 int SetClipBoardData (const char* cb_name,
                void* data, size_t n, int cbop);
# 1964 "/usr/local/include/minigui/minigui.h" 3
 size_t GetClipBoardDataLen (const char* cb_name);
# 1981 "/usr/local/include/minigui/minigui.h" 3
 size_t GetClipBoardData (const char* cb_name,
                void* data, size_t n);
# 2001 "/usr/local/include/minigui/minigui.h" 3
 int GetClipBoardByte (const char* cb_name,
                int index, unsigned char* byte);
# 2018 "/usr/local/include/minigui/minigui.h" 3
 void Ping (void);
# 2041 "/usr/local/include/minigui/minigui.h" 3
 void Tone (int frequency_hz, int duration_ms);
# 2050 "/usr/local/include/minigui/minigui.h" 3
 void* GetOriginalTermIO (void);
# 2085 "/usr/local/include/minigui/minigui.h" 3
 char* FixStrAlloc (int len);
# 2104 "/usr/local/include/minigui/minigui.h" 3
 char* FixStrDup (const char* str);
# 2118 "/usr/local/include/minigui/minigui.h" 3
 void FreeFixStr (char* str);
# 2149 "/usr/local/include/minigui/minigui.h" 3
  HCURSOR LoadCursorFromFile (const char* filename);
# 2167 "/usr/local/include/minigui/minigui.h" 3
  HCURSOR LoadCursorFromMem (const void* area);
# 2194 "/usr/local/include/minigui/minigui.h" 3
  HCURSOR CreateCursor (int xhotspot, int yhotspot, int w, int h,
               const BYTE* pANDBits, const BYTE* pXORBits, int colornum);
# 2207 "/usr/local/include/minigui/minigui.h" 3
  BOOL DestroyCursor (HCURSOR hcsr);
# 2267 "/usr/local/include/minigui/minigui.h" 3
 HCURSOR GetSystemCursor (int csrid);
# 2277 "/usr/local/include/minigui/minigui.h" 3
 HCURSOR GetCurrentCursor (void);
# 2347 "/usr/local/include/minigui/minigui.h" 3
 void ClipCursor (const RECT* prc);
# 2359 "/usr/local/include/minigui/minigui.h" 3
 void GetClipCursor (RECT* prc);
# 2373 "/usr/local/include/minigui/minigui.h" 3
 void GetCursorPos (POINT* ppt);
# 2388 "/usr/local/include/minigui/minigui.h" 3
 void SetCursorPos (int x, int y);
# 2409 "/usr/local/include/minigui/minigui.h" 3
 HCURSOR SetCursorEx (HCURSOR hcsr, BOOL set_def);
# 2454 "/usr/local/include/minigui/minigui.h" 3
 HCURSOR GetDefaultCursor (void);
# 2479 "/usr/local/include/minigui/minigui.h" 3
 int ShowCursor (BOOL fShow);
# 2516 "/usr/local/include/minigui/minigui.h" 3
 BOOL GetKeyStatus (UINT uKey);
# 2558 "/usr/local/include/minigui/minigui.h" 3
 DWORD GetShiftKeyStatus (void);
# 2586 "/usr/local/include/minigui/minigui.h" 3
 const char* GetSysText (const char* text);
# 2626 "/usr/local/include/minigui/minigui.h" 3
extern const char* SysText [];
# 2639 "/usr/local/include/minigui/minigui.h" 3
extern const char** local_SysText;
# 2662 "/usr/local/include/minigui/minigui.h" 3
 char* strnchr (const char* s, size_t n, int c);
# 2680 "/usr/local/include/minigui/minigui.h" 3
 int substrlen (const char* text, int len, char delimiter,
                int* nr_delim);
# 2695 "/usr/local/include/minigui/minigui.h" 3
 char * strtrimall (char* src);
# 2704 "/usr/local/include/minigui/minigui.h" 3
}
# 15 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/gdi.h" 1 3
# 36 "/usr/local/include/minigui/gdi.h" 3
extern "C" {
# 90 "/usr/local/include/minigui/gdi.h" 3
extern gal_pixel SysPixelIndex [];







extern const RGB SysPixelColor [];
# 372 "/usr/local/include/minigui/gdi.h" 3
typedef struct _BLOCKHEAP
{






    size_t bd_size;



    size_t heap_size;



    int free;



    void* heap;
} BLOCKHEAP;







typedef BLOCKHEAP* PBLOCKHEAP;
# 425 "/usr/local/include/minigui/gdi.h" 3
 extern void InitBlockDataHeap (PBLOCKHEAP heap,
                size_t bd_size, size_t heap_size);
# 443 "/usr/local/include/minigui/gdi.h" 3
 extern void* BlockDataAlloc (PBLOCKHEAP heap);
# 458 "/usr/local/include/minigui/gdi.h" 3
 extern void BlockDataFree (PBLOCKHEAP heap, void* data);
# 468 "/usr/local/include/minigui/gdi.h" 3
 extern void DestroyBlockDataHeap (PBLOCKHEAP heap);
# 479 "/usr/local/include/minigui/gdi.h" 3
struct _BITMAP;





typedef struct _BITMAP BITMAP;






typedef BITMAP* PBITMAP;

struct _MYBITMAP;





typedef struct _MYBITMAP MYBITMAP;






typedef struct _MYBITMAP* PMYBITMAP;
# 545 "/usr/local/include/minigui/gdi.h" 3
typedef struct _CLIPRECT
{



    RECT rc;



    struct _CLIPRECT* next;





    struct _CLIPRECT* prev;

} CLIPRECT;
typedef CLIPRECT* PCLIPRECT;
# 575 "/usr/local/include/minigui/gdi.h" 3
typedef struct _CLIPRGN
{
# 589 "/usr/local/include/minigui/gdi.h" 3
    BYTE type;





    BYTE reserved[3];




    RECT rcBound;



    PCLIPRECT head;



    PCLIPRECT tail;




    PBLOCKHEAP heap;
} CLIPRGN;







typedef CLIPRGN* PCLIPRGN;
# 699 "/usr/local/include/minigui/gdi.h" 3
 void InitClipRgn (PCLIPRGN pRgn, PBLOCKHEAP pFreeList);
# 711 "/usr/local/include/minigui/gdi.h" 3
 void EmptyClipRgn (PCLIPRGN pRgn);
# 722 "/usr/local/include/minigui/gdi.h" 3
 PCLIPRGN CreateClipRgn (void);
# 734 "/usr/local/include/minigui/gdi.h" 3
 void DestroyClipRgn (PCLIPRGN pRgn);
# 752 "/usr/local/include/minigui/gdi.h" 3
 BOOL ClipRgnCopy (PCLIPRGN pDstRgn, const CLIPRGN* pSrcRgn);
# 774 "/usr/local/include/minigui/gdi.h" 3
 BOOL ClipRgnIntersect (PCLIPRGN pRstRgn,
                       const CLIPRGN* pRgn1, const CLIPRGN* pRgn2);
# 789 "/usr/local/include/minigui/gdi.h" 3
 void GetClipRgnBoundRect (PCLIPRGN pRgn, PRECT pRect);
# 807 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetClipRgn (PCLIPRGN pRgn, const RECT* pRect);
# 822 "/usr/local/include/minigui/gdi.h" 3
 BOOL IsEmptyClipRgn (const CLIPRGN* pRgn);
# 837 "/usr/local/include/minigui/gdi.h" 3
 BOOL AddClipRect (PCLIPRGN pRgn, const RECT* pRect);
# 853 "/usr/local/include/minigui/gdi.h" 3
 BOOL IntersectClipRect (PCLIPRGN pRgn, const RECT* pRect);
# 869 "/usr/local/include/minigui/gdi.h" 3
 BOOL SubtractClipRect (PCLIPRGN pRgn, const RECT* pRect);
# 886 "/usr/local/include/minigui/gdi.h" 3
 BOOL PtInRegion (PCLIPRGN region, int x, int y);
# 902 "/usr/local/include/minigui/gdi.h" 3
 BOOL RectInRegion (PCLIPRGN region, const RECT* rect);
# 915 "/usr/local/include/minigui/gdi.h" 3
 void OffsetRegion (PCLIPRGN region, int x, int y);
# 937 "/usr/local/include/minigui/gdi.h" 3
 BOOL UnionRegion (PCLIPRGN dst,
                const CLIPRGN* src1, const CLIPRGN* src2);
# 957 "/usr/local/include/minigui/gdi.h" 3
 BOOL SubtractRegion (CLIPRGN* rgnD,
                const CLIPRGN* rgnM, const CLIPRGN* rgnS);
# 978 "/usr/local/include/minigui/gdi.h" 3
 BOOL XorRegion (CLIPRGN *dst,
                const CLIPRGN *src1, const CLIPRGN *src2);
# 1017 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitCircleRegion (PCLIPRGN dst, int x, int y, int r);
# 1035 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitEllipseRegion (PCLIPRGN dst,
                int x, int y, int rx, int ry);
# 1052 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitPolygonRegion (PCLIPRGN dst,
                const POINT* pts, int vertices);
# 1163 "/usr/local/include/minigui/gdi.h" 3
 unsigned int GetGDCapability (HDC hdc, int iItem);
# 1182 "/usr/local/include/minigui/gdi.h" 3
 HDC GetDC (HWND hwnd);
# 1201 "/usr/local/include/minigui/gdi.h" 3
 HDC GetClientDC (HWND hwnd);
# 1213 "/usr/local/include/minigui/gdi.h" 3
 void ReleaseDC (HDC hdc);
# 1233 "/usr/local/include/minigui/gdi.h" 3
 HDC CreatePrivateDC (HWND hwnd);
# 1254 "/usr/local/include/minigui/gdi.h" 3
 HDC CreatePrivateClientDC (HWND hwnd);
# 1277 "/usr/local/include/minigui/gdi.h" 3
 HDC GetPrivateClientDC (HWND hwnd);
# 1288 "/usr/local/include/minigui/gdi.h" 3
 void DeletePrivateDC (HDC hdc);
# 1320 "/usr/local/include/minigui/gdi.h" 3
 HDC CreateCompatibleDCEx (HDC hdc, int width, int height);
# 1357 "/usr/local/include/minigui/gdi.h" 3
 HDC CreateMemDC (int width, int height, int depth, DWORD flags,
                Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
# 1377 "/usr/local/include/minigui/gdi.h" 3
 HDC CreateMemDCFromBitmap (HDC hdc, BITMAP* bmp);
# 1399 "/usr/local/include/minigui/gdi.h" 3
 HDC CreateMemDCFromMyBitmap (const MYBITMAP* my_bmp, RGB* pal);
# 1426 "/usr/local/include/minigui/gdi.h" 3
 BOOL ConvertMemDC (HDC mem_dc, HDC ref_dc, DWORD flags);
# 1457 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetMemDCAlpha (HDC mem_dc, DWORD flags, Uint8 alpha);
# 1480 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetMemDCColorKey (HDC mem_dc, DWORD flags,
                Uint32 color_key);
# 1497 "/usr/local/include/minigui/gdi.h" 3
 void DeleteMemDC (HDC mem_dc);
# 1572 "/usr/local/include/minigui/gdi.h" 3
 Uint8* LockDC (HDC hdc, const RECT* rw_rc,
                int* width, int* height, int* pitch);
# 1585 "/usr/local/include/minigui/gdi.h" 3
 void UnlockDC (HDC hdc);
# 1610 "/usr/local/include/minigui/gdi.h" 3
typedef struct _GAL_Overlay {

    Uint32 format;

    int w;

    int h;

    int planes;

    Uint16 *pitches;

    Uint8 **pixels;


    struct private_yuvhwfuncs *hwfuncs;

    struct private_yuvhwdata *hwdata;


    Uint32 hw_overlay :1;
    Uint32 UnusedBits :31;
} GAL_Overlay;
# 1669 "/usr/local/include/minigui/gdi.h" 3
 GAL_Overlay* CreateYUVOverlay (int width, int height,
                Uint32 format, HDC hdc);
# 1680 "/usr/local/include/minigui/gdi.h" 3
int GAL_LockYUVOverlay (GAL_Overlay *overlay);
# 1690 "/usr/local/include/minigui/gdi.h" 3
void GAL_UnlockYUVOverlay (GAL_Overlay *overlay);
# 1718 "/usr/local/include/minigui/gdi.h" 3
void GAL_FreeYUVOverlay (GAL_Overlay *overlay);
# 1745 "/usr/local/include/minigui/gdi.h" 3
 void DisplayYUVOverlay (GAL_Overlay* overlay,
                const RECT* dstrect);
# 1773 "/usr/local/include/minigui/gdi.h" 3
int GAL_SetGamma (float red, float green, float blue);
# 1807 "/usr/local/include/minigui/gdi.h" 3
int GAL_SetGammaRamp (Uint16 *red, Uint16 *green, Uint16 *blue);
# 1839 "/usr/local/include/minigui/gdi.h" 3
int GAL_GetGammaRamp (Uint16 *red, Uint16 *green, Uint16 *blue);
# 1936 "/usr/local/include/minigui/gdi.h" 3
 Uint32 GetDCAttr (HDC hdc, int attr);
# 1953 "/usr/local/include/minigui/gdi.h" 3
 Uint32 SetDCAttr (HDC hdc, int attr, Uint32 value);
# 2187 "/usr/local/include/minigui/gdi.h" 3
 int GetRasterOperation (HDC hdc);
# 2214 "/usr/local/include/minigui/gdi.h" 3
 int SetRasterOperation (HDC hdc, int rop);
# 2260 "/usr/local/include/minigui/gdi.h" 3
 BOOL GetPalette (HDC hdc, int start, int len, GAL_Color* cmap);
# 2276 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetPalette (HDC hdc, int start, int len, GAL_Color* cmap);
# 2289 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetColorfulPalette (HDC hdc);
# 2304 "/usr/local/include/minigui/gdi.h" 3
 HPALETTE CreatePalette (GAL_Palette* pal);
# 2314 "/usr/local/include/minigui/gdi.h" 3
 HPALETTE GetDefaultPalette (void);
# 2332 "/usr/local/include/minigui/gdi.h" 3
int GetPaletteEntries (HPALETTE hpal,
                int start, int len, GAL_Color* cmap);
# 2368 "/usr/local/include/minigui/gdi.h" 3
 void SetPixel (HDC hdc, int x, int y, gal_pixel pixel);
# 2388 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel SetPixelRGB (HDC hdc, int x, int y,
                Uint8 r, Uint8 g, Uint8 b);
# 2413 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel SetPixelRGBA (HDC hdc, int x, int y,
                Uint8 r, Uint8 g, Uint8 b, Uint8 a);
# 2431 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel GetPixel (HDC hdc, int x, int y);
# 2454 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel GetPixelRGB (HDC hdc, int x, int y,
                Uint8* r, Uint8* g, Uint8* b);
# 2482 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel GetPixelRGBA (HDC hdc, int x, int y,
                Uint8* r, Uint8* g, Uint8* b, Uint8* a);
# 2503 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel RGBA2Pixel (HDC hdc,
                Uint8 r, Uint8 g, Uint8 b, Uint8 a);
# 2521 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel RGB2Pixel (HDC hdc, Uint8 r, Uint8 g, Uint8 b);
# 2544 "/usr/local/include/minigui/gdi.h" 3
 void Pixel2RGB (HDC hdc, gal_pixel pixel,
                Uint8* r, Uint8* g, Uint8* b);
# 2570 "/usr/local/include/minigui/gdi.h" 3
 void Pixel2RGBA (HDC hdc, gal_pixel pixel,
                Uint8* r, Uint8* g, Uint8* b, Uint8* a);
# 2600 "/usr/local/include/minigui/gdi.h" 3
 void FocusRect (HDC hdc, int x0, int y0, int x1, int y1);
# 2619 "/usr/local/include/minigui/gdi.h" 3
 void DrawHVDotLine (HDC hdc, int x, int y, int w_h, BOOL H_V);
# 2690 "/usr/local/include/minigui/gdi.h" 3
 BOOL LineClipper (const RECT* cliprc,
                int *_x0, int *_y0, int *_x1, int *_y1);





typedef void (* CB_LINE) (void* context, int stepx, int stepy);
# 2723 "/usr/local/include/minigui/gdi.h" 3
 void LineGenerator (void* context,
                int x1, int y1, int x2, int y2, CB_LINE cb);





typedef void (* CB_CIRCLE) (void* context, int x1, int x2, int y);
# 2761 "/usr/local/include/minigui/gdi.h" 3
 void CircleGenerator (void* context,
                int sx, int sy, int r, CB_CIRCLE cb);





typedef void (* CB_ELLIPSE) (void* context, int x1, int x2, int y);
# 2796 "/usr/local/include/minigui/gdi.h" 3
 void EllipseGenerator (void* context,
                int sx, int sy, int rx, int ry, CB_ELLIPSE cb);





typedef void (* CB_ARC) (void* context, int x, int y);
# 2830 "/usr/local/include/minigui/gdi.h" 3
 void CircleArcGenerator (void* context,
                int sx, int sy, int r, int ang1, int ang2, CB_ARC cb);





typedef void (* CB_POLYGON) (void* context, int x1, int x2, int y);
# 2879 "/usr/local/include/minigui/gdi.h" 3
 BOOL MonotoneVerticalPolygonGenerator (void* context,
                const POINT* pts, int vertices, CB_POLYGON cb);
# 2898 "/usr/local/include/minigui/gdi.h" 3
 BOOL PolygonIsMonotoneVertical (const POINT* pts,
                int vertices);
# 2928 "/usr/local/include/minigui/gdi.h" 3
 BOOL PolygonGenerator (void* context,
                const POINT* pts, int vertices, CB_POLYGON cb);





typedef BOOL (* CB_EQUAL_PIXEL) (void* context, int x, int y);





typedef void (* CB_FLOOD_FILL) (void* context, int x1, int x2, int y);
# 2965 "/usr/local/include/minigui/gdi.h" 3
 BOOL FloodFillGenerator (void* context,
                const RECT* src_rc, int x, int y,
                CB_EQUAL_PIXEL cb_equal_pixel, CB_FLOOD_FILL cb_flood_fill);





typedef void* (* CB_GET_LINE_BUFF) (void* context, int y);





typedef void (* CB_LINE_SCALED) (void* context, const void* line, int y);
# 3006 "/usr/local/include/minigui/gdi.h" 3
 BOOL BitmapDDAScaler (void* context,
                const BITMAP* src_bmp, int dst_w, int dst_h,
                CB_GET_LINE_BUFF cb_get_line_buff,
                CB_LINE_SCALED cb_line_scaled);
# 3035 "/usr/local/include/minigui/gdi.h" 3
 BOOL BitmapDDAScaler2 (void* context,
                const BITMAP* src_bmp, int dst_w, int dst_h,
                CB_GET_LINE_BUFF cb_get_line_buff,
                CB_LINE_SCALED cb_line_scaled);
# 3053 "/usr/local/include/minigui/gdi.h" 3
 void MoveTo (HDC hdc, int x, int y);
# 3069 "/usr/local/include/minigui/gdi.h" 3
 void LineTo (HDC hdc, int x, int y);
# 3086 "/usr/local/include/minigui/gdi.h" 3
 void Rectangle (HDC hdc, int x0, int y0, int x1, int y1);
# 3102 "/usr/local/include/minigui/gdi.h" 3
 void PolyLineTo (HDC hdc, const POINT* pts, int vertices);
# 3120 "/usr/local/include/minigui/gdi.h" 3
 void SplineTo (HDC hdc, const POINT* pts);
# 3136 "/usr/local/include/minigui/gdi.h" 3
 void Circle (HDC hdc, int sx, int sy, int r);
# 3156 "/usr/local/include/minigui/gdi.h" 3
 void Ellipse (HDC hdc, int sx, int sy, int rx, int ry);
# 3181 "/usr/local/include/minigui/gdi.h" 3
 void CircleArc (HDC hdc, int sx, int sy, int r,
                int ang1, int ang2);
# 3198 "/usr/local/include/minigui/gdi.h" 3
 void FillBox (HDC hdc, int x, int y, int w, int h);
# 3215 "/usr/local/include/minigui/gdi.h" 3
 void FillCircle (HDC hdc, int sx, int sy, int r);
# 3235 "/usr/local/include/minigui/gdi.h" 3
 void FillEllipse (HDC hdc, int sx, int sy, int rx, int ry);
# 3252 "/usr/local/include/minigui/gdi.h" 3
 BOOL FillPolygon (HDC hdc, const POINT* pts, int vertices);
# 3269 "/usr/local/include/minigui/gdi.h" 3
 BOOL FloodFill (HDC hdc, int x, int y);
# 3281 "/usr/local/include/minigui/gdi.h" 3
typedef enum
{




  PT_SOLID,




  PT_ON_OFF_DASH,






  PT_DOUBLE_DASH,
} PenType;
# 3350 "/usr/local/include/minigui/gdi.h" 3
 void SetPenDashes (HDC hdc, int dash_offset,
                const unsigned char* dash_list, int n);




typedef enum
{




  PT_CAP_BUTT,




  PT_CAP_ROUND,




  PT_CAP_PROJECTING
} PTCapStyle;
# 3407 "/usr/local/include/minigui/gdi.h" 3
typedef enum
{



  PT_JOIN_MITER,



  PT_JOIN_ROUND,




  PT_JOIN_BEVEL
} PTJoinStyle;
# 3488 "/usr/local/include/minigui/gdi.h" 3
typedef enum
{



  BT_SOLID,



  BT_TILED,






  BT_STIPPLED,






  BT_OPAQUE_STIPPLED
} BrushType;
# 3544 "/usr/local/include/minigui/gdi.h" 3
typedef struct _STIPPLE
{

    int width;

    int height;


    int pitch;


    size_t size;


    const unsigned char* bits;
} STIPPLE;
# 3572 "/usr/local/include/minigui/gdi.h" 3
 void SetBrushInfo (HDC hdc,
                const BITMAP* tile, const STIPPLE* stipple);
# 3589 "/usr/local/include/minigui/gdi.h" 3
 void SetBrushOrigin (HDC hdc, int x, int y);
# 3610 "/usr/local/include/minigui/gdi.h" 3
 void LineEx (HDC hdc, int x1, int y1, int x2, int y2);
# 3637 "/usr/local/include/minigui/gdi.h" 3
 void ArcEx (HDC hdc, int x, int y, int width, int height,
                int ang1, int ang2);
# 3663 "/usr/local/include/minigui/gdi.h" 3
 void FillArcEx (HDC hdc, int x, int y, int width, int height,
                int ang1, int ang2);
# 3678 "/usr/local/include/minigui/gdi.h" 3
 void PolyLineEx (HDC hdc, const POINT* pts, int nr_pts);




typedef struct _ARC
{

    int x;

    int y;


    int width;

    int height;





    int angle1;



    int angle2;
} ARC;
# 3718 "/usr/local/include/minigui/gdi.h" 3
 void PolyArcEx (HDC hdc, const ARC* arcs, int nr_arcs);
# 3732 "/usr/local/include/minigui/gdi.h" 3
 void PolyFillArcEx (HDC hdc, const ARC* arcs, int nr_arcs);
# 3752 "/usr/local/include/minigui/gdi.h" 3
 BOOL RoundRect (HDC hdc, int x0, int y0, int x1, int y1, int cw, int ch);
# 3899 "/usr/local/include/minigui/gdi.h" 3
 void GetDCLCS (HDC hdc, int which, POINT* pt);
# 3927 "/usr/local/include/minigui/gdi.h" 3
 void SetDCLCS (HDC hdc, int which, const POINT* pt);
# 4118 "/usr/local/include/minigui/gdi.h" 3
 void DPtoLP (HDC hdc, POINT* pPt);
# 4138 "/usr/local/include/minigui/gdi.h" 3
 void LPtoDP (HDC hdc, POINT* pPt);
# 4160 "/usr/local/include/minigui/gdi.h" 3
 void ExcludeClipRect (HDC hdc, const RECT* prc);
# 4175 "/usr/local/include/minigui/gdi.h" 3
 void IncludeClipRect (HDC hdc, const RECT* prc);
# 4192 "/usr/local/include/minigui/gdi.h" 3
 BOOL PtVisible (HDC hdc, int x, int y);
# 4206 "/usr/local/include/minigui/gdi.h" 3
 void ClipRectIntersect (HDC hdc, const RECT* prc);
# 4220 "/usr/local/include/minigui/gdi.h" 3
 void SelectClipRect (HDC hdc, const RECT* prc);
# 4234 "/usr/local/include/minigui/gdi.h" 3
 void SelectClipRegion (HDC hdc, const CLIPRGN* pRgn);
# 4248 "/usr/local/include/minigui/gdi.h" 3
 void GetBoundsRect (HDC hdc, RECT* pRect);
# 4267 "/usr/local/include/minigui/gdi.h" 3
 BOOL RectVisible (HDC hdc, const RECT* pRect);
# 4309 "/usr/local/include/minigui/gdi.h" 3
 BOOL GetBitmapFromDC (HDC hdc,
                int x, int y, int w, int h, BITMAP* bmp);
# 4361 "/usr/local/include/minigui/gdi.h" 3
 BOOL FillBoxWithBitmap (HDC hdc, int x, int y, int w, int h,
                const BITMAP *bmp);
# 4411 "/usr/local/include/minigui/gdi.h" 3
 BOOL FillBoxWithBitmapPart (HDC hdc,
                int x, int y, int w, int h,
                int bw, int bh, const BITMAP* bmp, int xo, int yo);
# 4449 "/usr/local/include/minigui/gdi.h" 3
 void BitBlt (HDC hsdc, int sx, int sy, int sw, int sh,
                HDC hddc, int dx, int dy, DWORD dwRop);
# 4488 "/usr/local/include/minigui/gdi.h" 3
 void StretchBlt (HDC hsdc, int sx, int sy, int sw, int sh,
                HDC hddc, int dx, int dy, int dw, int dh, DWORD dwRop);
# 4508 "/usr/local/include/minigui/gdi.h" 3
 BOOL ScaleBitmap (BITMAP* dst, const BITMAP* src);
# 4529 "/usr/local/include/minigui/gdi.h" 3
 gal_pixel GetPixelInBitmap (const BITMAP* bmp, int x, int y);
# 4553 "/usr/local/include/minigui/gdi.h" 3
 BOOL SetPixelInBitmap (const BITMAP* bmp,
                int x, int y, gal_pixel pixel);
# 4576 "/usr/local/include/minigui/gdi.h" 3
 BOOL SaveScreenRectContent (const RECT* rcWin,
                const char* filename);
# 4596 "/usr/local/include/minigui/gdi.h" 3
 BOOL SaveMainWindowContent (HWND hWnd, const char* filename);
# 4623 "/usr/local/include/minigui/gdi.h" 3
 HICON LoadIconFromFile (HDC hdc, const char* filename,
                int which);
# 4644 "/usr/local/include/minigui/gdi.h" 3
 HICON LoadIconFromMem (HDC hdc, const void* area, int which);
# 4670 "/usr/local/include/minigui/gdi.h" 3
 HICON CreateIconEx (HDC hdc, int w, int h,
                const BYTE* AndBits, const BYTE* XorBits, int colornum,
                const RGB* pal);
# 4692 "/usr/local/include/minigui/gdi.h" 3
 BOOL DestroyIcon (HICON hicon);
# 4707 "/usr/local/include/minigui/gdi.h" 3
 BOOL GetIconSize (HICON hicon, int* w, int* h);
# 4726 "/usr/local/include/minigui/gdi.h" 3
 void DrawIcon (HDC hdc,
                int x, int y, int w, int h, HICON hicon);
# 4754 "/usr/local/include/minigui/gdi.h" 3
static inline void SetRect (RECT* prc, int left, int top, int right, int bottom)
{
    (prc)->left = left; (prc)->top = top;
    (prc)->right = right; (prc)->bottom = bottom;
}
# 4775 "/usr/local/include/minigui/gdi.h" 3
static inline void SetRectEmpty (RECT* prc)
{
    (prc)->left = (prc)->top = (prc)->right = (prc)->bottom = 0;
}
# 4794 "/usr/local/include/minigui/gdi.h" 3
static inline void CopyRect (RECT* pdrc, const RECT* psrc)
{
    (pdrc)->left = (psrc)->left; (pdrc)->top = (psrc)->top;
    (pdrc)->right = (psrc)->right; (pdrc)->bottom = (psrc)->bottom;
}
# 4817 "/usr/local/include/minigui/gdi.h" 3
static inline void OffsetRect (RECT* prc, int x, int y)
{
    (prc)->left += x; (prc)->top += y; (prc)->right += x; (prc)->bottom += y;
}
# 4840 "/usr/local/include/minigui/gdi.h" 3
static inline void InflateRect (RECT* prc, int cx, int cy)
{
    (prc)->left -= cx; (prc)->top -= cy;
    (prc)->right += cx; (prc)->bottom += cy;
}
# 4861 "/usr/local/include/minigui/gdi.h" 3
static inline void InflateRectToPt (RECT* prc, int x, int y)
{
    if ((x) < (prc)->left) (prc)->left = (x);
    if ((y) < (prc)->top) (prc)->top = (y);
    if ((x) > (prc)->right) (prc)->right = (x);
    if ((y) > (prc)->bottom) (prc)->bottom = (y);
}
# 4886 "/usr/local/include/minigui/gdi.h" 3
static inline BOOL PtInRect(const RECT* prc, int x, int y)
{
    if (x >= prc->left && x < prc->right && y >= prc->top && y < prc->bottom)
        return 1;
    return 0;
}
# 4918 "/usr/local/include/minigui/gdi.h" 3
 BOOL IsRectEmpty (const RECT* prc);
# 4932 "/usr/local/include/minigui/gdi.h" 3
 BOOL EqualRect (const RECT* prc1, const RECT* prc2);
# 4943 "/usr/local/include/minigui/gdi.h" 3
 void NormalizeRect (RECT* pRect);
# 4965 "/usr/local/include/minigui/gdi.h" 3
 BOOL IntersectRect (RECT* pdrc,
                const RECT* psrc1, const RECT* psrc2);
# 4983 "/usr/local/include/minigui/gdi.h" 3
 BOOL IsCovered (const RECT* prc1, const RECT* prc2);
# 4998 "/usr/local/include/minigui/gdi.h" 3
 BOOL DoesIntersect (const RECT* psrc1, const RECT* psrc2);
# 5017 "/usr/local/include/minigui/gdi.h" 3
 BOOL UnionRect (RECT* pdrc,
                const RECT* psrc1, const RECT* psrc2);
# 5035 "/usr/local/include/minigui/gdi.h" 3
 void GetBoundRect (PRECT pdrc,
                const RECT* psrc1, const RECT* psrc2);
# 5054 "/usr/local/include/minigui/gdi.h" 3
 int SubtractRect (RECT* rc, const RECT* psrc1, const RECT* psrc2);
# 5311 "/usr/local/include/minigui/gdi.h" 3
struct _DEVFONT;
typedef struct _DEVFONT DEVFONT;


typedef struct _LOGFONT {

    char type [15 + 1];

    char family [15 + 1];

    char charset [15 + 1];

    DWORD style;

    int size;

    int rotation;

    unsigned short sbc_scale;

    unsigned short mbc_scale;

    DEVFONT* sbc_devfont;

    DEVFONT* mbc_devfont;
} LOGFONT;




typedef LOGFONT* PLOGFONT;

struct _WORDINFO;




typedef struct _WORDINFO WORDINFO;



typedef struct _CHARSETOPS
{
    int nr_chars;
    int bytes_per_char;
    int bytes_maxlen_char;
    const char* name;
    char def_char [4];

    int (*len_first_char) (const unsigned char* mstr, int mstrlen);
    unsigned int (*char_offset) (const unsigned char* mchar);

    int (*nr_chars_in_str) (const unsigned char* mstr, int mstrlen);

    int (*is_this_charset) (const unsigned char* charset);

    int (*len_first_substr) (const unsigned char* mstr, int mstrlen);
    const unsigned char* (*get_next_word) (const unsigned char* mstr,
                int strlen, WORDINFO* word_info);

    int (*pos_first_char) (const unsigned char* mstr, int mstrlen);


    unsigned short (*conv_to_uc16) (const unsigned char* mchar, int len);
    int (*conv_from_uc16) (unsigned short wc, unsigned char* mchar);

} CHARSETOPS;

typedef struct _FONTOPS
{
    int (*get_char_width) (LOGFONT* logfont, DEVFONT* devfont,
            const unsigned char* mchar, int len);
    int (*get_ave_width) (LOGFONT* logfont, DEVFONT* devfont);
    int (*get_max_width) (LOGFONT* logfont, DEVFONT* devfont);
    int (*get_font_height) (LOGFONT* logfont, DEVFONT* devfont);
    int (*get_font_size) (LOGFONT* logfont, DEVFONT* devfont, int expect);
    int (*get_font_ascent) (LOGFONT* logfont, DEVFONT* devfont);
    int (*get_font_descent) (LOGFONT* logfont, DEVFONT* devfont);

    const void* (*get_char_bitmap) (LOGFONT* logfont, DEVFONT* devfont,
            const unsigned char* mchar, int len, unsigned short* scale);

    const void* (*get_char_pixmap) (LOGFONT* logfont, DEVFONT* devfont,
            const unsigned char* mchar, int len,
            int* pitch, unsigned short* scale);


    void (*start_str_output) (LOGFONT* logfont, DEVFONT* devfont);

    int (*get_char_bbox) (LOGFONT* logfont, DEVFONT* devfont,
            const unsigned char* mchar, int len,
            int* px, int* py, int* pwidth, int* pheight);

    void (*get_char_advance) (LOGFONT* logfont, DEVFONT* devfont,
            const unsigned char* mchar, int len, int* px, int* py);


    DEVFONT* (*new_instance) (LOGFONT* logfont, DEVFONT* devfont,
            BOOL need_sbc_font);

    void (*delete_instance) (DEVFONT* devfont);

} FONTOPS;

struct _DEVFONT
{
    char name [127 + 1];
    DWORD style;
    FONTOPS* font_ops;
    CHARSETOPS* charset_ops;
    struct _DEVFONT* sbc_next;
    struct _DEVFONT* mbc_next;
    void* data;
};
# 5439 "/usr/local/include/minigui/gdi.h" 3
typedef struct _FONTMETRICS
{

    int font_height;

    int ascent;

    int descent;


    int max_width;

    int ave_width;
} FONTMETRICS;
# 5468 "/usr/local/include/minigui/gdi.h" 3
 void GetFontMetrics (LOGFONT* log_font,
                FONTMETRICS* font_metrics);


typedef struct _GLYPHBITMAP
{

    int bbox_x, bbox_y, bbox_w, bbox_h;

    int advance_x, advance_y;


    size_t bmp_size;

    int bmp_pitch;

    const unsigned char* bits;
} GLYPHBITMAP;
# 5513 "/usr/local/include/minigui/gdi.h" 3
 void GetGlyphBitmap (LOGFONT* log_font,
                const unsigned char* mchar, int mchar_len,
                GLYPHBITMAP* glyph_bitmap);
# 5537 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitVectorialFonts (void);
# 5551 "/usr/local/include/minigui/gdi.h" 3
 void TermVectorialFonts (void);
# 5649 "/usr/local/include/minigui/gdi.h" 3
 PLOGFONT CreateLogFont (const char* type, const char* family,
        const char* charset, char weight, char slant, char flip,
        char other, char underline, char struckout,
        int size, int rotation);
# 5667 "/usr/local/include/minigui/gdi.h" 3
 PLOGFONT CreateLogFontByName (const char* font_name);
# 5680 "/usr/local/include/minigui/gdi.h" 3
 PLOGFONT CreateLogFontIndirect (LOGFONT* logfont);
# 5692 "/usr/local/include/minigui/gdi.h" 3
 void DestroyLogFont (PLOGFONT log_font);
# 5707 "/usr/local/include/minigui/gdi.h" 3
 void GetLogFontInfo (HDC hdc, LOGFONT* log_font);
# 5721 "/usr/local/include/minigui/gdi.h" 3
 PLOGFONT GetCurFont (HDC hdc);
# 5741 "/usr/local/include/minigui/gdi.h" 3
 PLOGFONT SelectFont (HDC hdc, PLOGFONT log_font);
# 5753 "/usr/local/include/minigui/gdi.h" 3
 const DEVFONT* GetNextDevFont (const DEVFONT* dev_font);
# 5808 "/usr/local/include/minigui/gdi.h" 3
extern PLOGFONT g_SysLogFont [];
# 5833 "/usr/local/include/minigui/gdi.h" 3
static inline PLOGFONT GetSystemFont (int font_id)
{
    if (font_id >= 0 && font_id < 6)
        return g_SysLogFont [font_id];
    else
        return (PLOGFONT)__null;
}
# 5855 "/usr/local/include/minigui/gdi.h" 3
 int GetSysFontMaxWidth (int font_id);
# 5871 "/usr/local/include/minigui/gdi.h" 3
 int GetSysFontAveWidth (int font_id);
# 5886 "/usr/local/include/minigui/gdi.h" 3
 int GetSysFontHeight (int font_id);
# 5902 "/usr/local/include/minigui/gdi.h" 3
 const char* GetSysCharset (BOOL wchar);
# 5918 "/usr/local/include/minigui/gdi.h" 3
 int GetSysCharHeight (void);
# 5933 "/usr/local/include/minigui/gdi.h" 3
 int GetSysCharWidth (void);
# 5946 "/usr/local/include/minigui/gdi.h" 3
 int GetSysCCharWidth (void);
# 5961 "/usr/local/include/minigui/gdi.h" 3
struct _WORDINFO
{

    int len;

    unsigned char delimiter;

    int nr_delimiters;
};
# 5990 "/usr/local/include/minigui/gdi.h" 3
 int GetTextMCharInfo (PLOGFONT log_font,
                const char* mstr, int len, int* pos_chars);
# 6016 "/usr/local/include/minigui/gdi.h" 3
 int GetTextWordInfo (PLOGFONT log_font, const char* mstr,
                int len, int* pos_words, WORDINFO* info_words);
# 6034 "/usr/local/include/minigui/gdi.h" 3
 int GetFirstMCharLen (PLOGFONT log_font,
                const char* mstr, int len);
# 6057 "/usr/local/include/minigui/gdi.h" 3
 int GetFirstWord (PLOGFONT log_font,
                const char* mstr, int len, WORDINFO* word_info);
# 6082 "/usr/local/include/minigui/gdi.h" 3
 int MB2WC (PLOGFONT log_font,
                wchar_t* dest, const unsigned char* mstr, int n);
# 6102 "/usr/local/include/minigui/gdi.h" 3
 int WC2MB (PLOGFONT log_font, unsigned char *s, wchar_t wc);
# 6130 "/usr/local/include/minigui/gdi.h" 3
 int MBS2WCS (PLOGFONT log_font, wchar_t* dest,
                const unsigned char* mstr, int mstr_len, int n);
# 6158 "/usr/local/include/minigui/gdi.h" 3
 int WCS2MBS (PLOGFONT log_font, unsigned char* dest,
                const wchar_t *wcs, int wcs_len, int n);
# 6194 "/usr/local/include/minigui/gdi.h" 3
 int GetTextExtentPoint (HDC hdc, const char* text, int len,
                int max_extent, int* fit_chars, int* pos_chars,
                int* dx_chars, SIZE* size);


 int TextOutOmitted (HDC hdc, int x, int y,
                const char *mtext, int len, int max_extent);
# 6210 "/usr/local/include/minigui/gdi.h" 3
 int GetTabbedTextExtentPoint (HDC hdc,
                const char* text, int len, int max_extent,
                int* fit_chars, int* pos_chars, int* dx_chars, SIZE* size);
# 6233 "/usr/local/include/minigui/gdi.h" 3
 int GetFontHeight (HDC hdc);
# 6248 "/usr/local/include/minigui/gdi.h" 3
 int GetMaxFontWidth (HDC hdc);
# 6266 "/usr/local/include/minigui/gdi.h" 3
 void GetTextExtent (HDC hdc,
                const char* spText, int len, SIZE* pSize);
# 6287 "/usr/local/include/minigui/gdi.h" 3
 void GetTabbedTextExtent (HDC hdc,
                const char* spText, int len, SIZE* pSize);
# 6397 "/usr/local/include/minigui/gdi.h" 3
 int TextOutLen (HDC hdc, int x, int y,
                const char* spText, int len);
# 6420 "/usr/local/include/minigui/gdi.h" 3
 int TabbedTextOutLen (HDC hdc, int x, int y,
                const char* spText, int len);
# 6448 "/usr/local/include/minigui/gdi.h" 3
 int TabbedTextOutEx (HDC hdc, int x, int y,
                const char* spText, int nCount,
                int nTabPositions, int *pTabPositions, int nTabOrigin);
# 6461 "/usr/local/include/minigui/gdi.h" 3
 void GetLastTextOutPos (HDC hdc, POINT* pt);
# 6503 "/usr/local/include/minigui/gdi.h" 3
typedef struct _DTFIRSTLINE
{

    int nr_chars;

    int startx;

    int starty;

    int width;

    int height;
} DTFIRSTLINE;
# 6592 "/usr/local/include/minigui/gdi.h" 3
 int DrawTextEx2 (HDC hdc, const char* pText, int nCount,
                RECT* pRect, int nIndent, UINT nFormat, DTFIRSTLINE *firstline);
# 6675 "/usr/local/include/minigui/gdi.h" 3
struct _MYBITMAP
{
# 6706 "/usr/local/include/minigui/gdi.h" 3
    DWORD flags;

    int frames;

    Uint8 depth;

    Uint8 alpha;
    Uint8 reserved [2];

    Uint32 transparent;


    Uint32 w;

    Uint32 h;

    Uint32 pitch;

    Uint32 size;


    BYTE* bits;
};
# 6744 "/usr/local/include/minigui/gdi.h" 3
struct _BITMAP
{
# 6775 "/usr/local/include/minigui/gdi.h" 3
    Uint8 bmType;

    Uint8 bmBitsPerPixel;

    Uint8 bmBytesPerPixel;

    Uint8 bmAlpha;

    Uint32 bmColorKey;





    Uint32 bmWidth;

    Uint32 bmHeight;

    Uint32 bmPitch;

    Uint8* bmBits;


    void* bmAlphaPixelFormat;
};
# 6838 "/usr/local/include/minigui/gdi.h" 3
# 1 "/usr/local/include/minigui/endianrw.h" 1 3
# 41 "/usr/local/include/minigui/endianrw.h" 3
extern "C" {
# 73 "/usr/local/include/minigui/endianrw.h" 3
typedef struct _MG_RWops {





    int (*seek)(struct _MG_RWops *context, int offset, int whence);






    int (*read)(struct _MG_RWops *context, void *ptr, int objsize, int num);






    int (*write)(struct _MG_RWops *context, const void *ptr, int objsize,
                    int num);
# 104 "/usr/local/include/minigui/endianrw.h" 3
    int (*close)(struct _MG_RWops *context);




    int (*eof)(struct _MG_RWops *context);
# 121 "/usr/local/include/minigui/endianrw.h" 3
    Uint32 type;

    union {
        struct {
            int autoclose;
            FILE *fp;
        } stdio;
        struct {
            Uint8 *base;
            Uint8 *here;
            Uint8 *stop;
        } mem;
        struct {
            void *data1;
        } unknown;
    } hidden;
} MG_RWops;
# 153 "/usr/local/include/minigui/endianrw.h" 3
 MG_RWops* MGUI_RWFromFile(const char *file, const char *mode);
# 169 "/usr/local/include/minigui/endianrw.h" 3
 MG_RWops* MGUI_RWFromFP(FILE *fp, int autoclose);
# 185 "/usr/local/include/minigui/endianrw.h" 3
 MG_RWops* MGUI_RWFromMem(void *mem, int size);
# 202 "/usr/local/include/minigui/endianrw.h" 3
 void MGUI_InitMemRW (MG_RWops* area, void *mem, int size);
# 215 "/usr/local/include/minigui/endianrw.h" 3
 MG_RWops* MGUI_AllocRW(void);
# 227 "/usr/local/include/minigui/endianrw.h" 3
 void MGUI_FreeRW(MG_RWops *area);
# 345 "/usr/local/include/minigui/endianrw.h" 3
 int MGUI_RWgetc (MG_RWops* area);
# 391 "/usr/local/include/minigui/endianrw.h" 3
static inline Uint16 ArchSwap16(Uint16 D) {
        return((D<<8)|(D>>8));
}


static inline Uint32 ArchSwap32(Uint32 D) {
        return((D<<24)|((D<<8)&0x00FF0000)|((D>>8)&0x0000FF00)|(D>>24));
}



static inline Uint64 ArchSwap64(Uint64 val) {
        Uint32 hi, lo;


        lo = (Uint32)(val&0xFFFFFFFF);
        val >>= 32;
        hi = (Uint32)(val&0xFFFFFFFF);
        val = ArchSwap32(lo);
        val <<= 32;
        val |= ArchSwap32(hi);
        return(val);
}
# 460 "/usr/local/include/minigui/endianrw.h" 3
extern Uint16 MGUI_ReadLE16(MG_RWops *src);
# 474 "/usr/local/include/minigui/endianrw.h" 3
extern Uint16 MGUI_ReadBE16(MG_RWops *src);
# 488 "/usr/local/include/minigui/endianrw.h" 3
extern Uint32 MGUI_ReadLE32(MG_RWops *src);
# 502 "/usr/local/include/minigui/endianrw.h" 3
extern Uint32 MGUI_ReadBE32(MG_RWops *src);
# 516 "/usr/local/include/minigui/endianrw.h" 3
extern Uint64 MGUI_ReadLE64(MG_RWops *src);
# 530 "/usr/local/include/minigui/endianrw.h" 3
extern Uint64 MGUI_ReadBE64(MG_RWops *src);
# 546 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteLE16(MG_RWops *dst, Uint16 value);
# 562 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteBE16(MG_RWops *dst, Uint16 value);
# 578 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteLE32(MG_RWops *dst, Uint32 value);
# 594 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteBE32(MG_RWops *dst, Uint32 value);
# 610 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteLE64(MG_RWops *dst, Uint64 value);
# 626 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteBE64(MG_RWops *dst, Uint64 value);
# 640 "/usr/local/include/minigui/endianrw.h" 3
extern Uint16 MGUI_ReadLE16FP(FILE *src);
# 654 "/usr/local/include/minigui/endianrw.h" 3
extern Uint32 MGUI_ReadLE32FP(FILE *src);
# 670 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteLE16FP(FILE *dst, Uint16 value);
# 686 "/usr/local/include/minigui/endianrw.h" 3
extern int MGUI_WriteLE32FP(FILE *dst, Uint32 value);

static inline Uint16 MGUI_ReadLE16Mem (const Uint8** data)
{

    Uint16 h1, h2;

    h1 = *(*data); (*data)++;
    h2 = *(*data); (*data)++;
    return ((h2<<8)|h1);







}

static inline Uint32 MGUI_ReadLE32Mem (const Uint8** data)
{

    Uint32 q1, q2, q3, q4;

    q1 = *(*data); (*data)++;
    q2 = *(*data); (*data)++;
    q3 = *(*data); (*data)++;
    q4 = *(*data); (*data)++;
    return ((q4<<24)|(q3<<16)|(q2<<8)|(q1));







}

static inline Uint16 MGUI_ReadBE16Mem (const Uint8** data)
{

    Uint16 h1, h2;

    h1 = *(*data); (*data)++;
    h2 = *(*data); (*data)++;
    return ((h1<<8)|h2);







}

static inline Uint32 MGUI_ReadBE32Mem (const Uint8** data)
{

    Uint32 q1, q2, q3, q4;

    q1 = *(*data); (*data)++;
    q2 = *(*data); (*data)++;
    q3 = *(*data); (*data)++;
    q4 = *(*data); (*data)++;
    return ((q1<<24)|(q2<<16)|(q3<<8)|(q4));







}
# 768 "/usr/local/include/minigui/endianrw.h" 3
}
# 6839 "/usr/local/include/minigui/gdi.h" 2 3





typedef void (* CB_ONE_SCANLINE) (void* context, MYBITMAP* my_bmp, int y);
# 6880 "/usr/local/include/minigui/gdi.h" 3
 BOOL RegisterBitmapFileType (const char *ext,
            void* (*init) (MG_RWops* fp, MYBITMAP *my_bmp, RGB *pal),
            int (*load) (MG_RWops* fp, void* init_info, MYBITMAP *my_bmp,
                    CB_ONE_SCANLINE cb, void* context),
            void (*cleanup) (void* init_info),
            int (*save) (MG_RWops* fp, MYBITMAP *my_bmp, RGB *pal),
            BOOL (*check) (MG_RWops* fp));
# 6902 "/usr/local/include/minigui/gdi.h" 3
 const char* CheckBitmapType (MG_RWops* fp);
# 6943 "/usr/local/include/minigui/gdi.h" 3
 int LoadBitmapEx (HDC hdc, PBITMAP pBitmap,
                MG_RWops* area, const char* ext);
# 6953 "/usr/local/include/minigui/gdi.h" 3
 int LoadBitmapFromFile (HDC hdc, PBITMAP pBitmap,
                const char* spFileName);
# 6971 "/usr/local/include/minigui/gdi.h" 3
 int LoadBitmapFromMem (HDC hdc, PBITMAP pBitmap,
                const void* mem, int size, const char* ext);
# 6985 "/usr/local/include/minigui/gdi.h" 3
 void UnloadBitmap (PBITMAP pBitmap);
# 7001 "/usr/local/include/minigui/gdi.h" 3
 void ReplaceBitmapColor (HDC hdc, PBITMAP pBitmap,
                gal_pixel iOColor, gal_pixel iNColor);


void HFlipBitmap (BITMAP* bmp, unsigned char* inter_buff);
void VFlipBitmap (BITMAP* bmp, unsigned char* inter_buff);
# 7026 "/usr/local/include/minigui/gdi.h" 3
 void* InitMyBitmapSL (MG_RWops* area,
                const char* ext, MYBITMAP* my_bmp, RGB* pal);
# 7047 "/usr/local/include/minigui/gdi.h" 3
 int LoadMyBitmapSL (MG_RWops* area, void* load_info,
                MYBITMAP* my_bmp, CB_ONE_SCANLINE cb, void* context);
# 7064 "/usr/local/include/minigui/gdi.h" 3
 int CleanupMyBitmapSL (MYBITMAP* my_bmp, void* load_info);
# 7081 "/usr/local/include/minigui/gdi.h" 3
 int LoadMyBitmapEx (PMYBITMAP my_bmp, RGB* pal,
                MG_RWops* area, const char* ext);
# 7091 "/usr/local/include/minigui/gdi.h" 3
 int LoadMyBitmapFromFile (PMYBITMAP my_bmp, RGB* pal,
                const char* file_name);
# 7117 "/usr/local/include/minigui/gdi.h" 3
 int LoadMyBitmapFromMem (PMYBITMAP my_bmp, RGB* pal,
                const void* mem, int size, const char* ext);
# 7131 "/usr/local/include/minigui/gdi.h" 3
 void UnloadMyBitmap (PMYBITMAP my_bmp);
# 7151 "/usr/local/include/minigui/gdi.h" 3
 int SaveMyBitmapToFile (PMYBITMAP my_bmp, RGB* pal,
                const char* spFileName);
# 7169 "/usr/local/include/minigui/gdi.h" 3
 int SaveBitmapToFile (HDC hdc, PBITMAP pBitmap,
                const char* spFileName);
# 7195 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitBitmap (HDC hdc, Uint32 w, Uint32 h, Uint32 pitch,
                BYTE* bits, PBITMAP bmp);
# 7209 "/usr/local/include/minigui/gdi.h" 3
 HDC InitSlaveScreen (const char* name, const char* mode);
# 7218 "/usr/local/include/minigui/gdi.h" 3
 void TerminateSlaveScreen (HDC hdc);
# 7234 "/usr/local/include/minigui/gdi.h" 3
 BOOL InitBitmapPixelFormat (HDC hdc, PBITMAP bmp);
# 7245 "/usr/local/include/minigui/gdi.h" 3
 void DeleteBitmapAlphaPixel (PBITMAP bmp);
# 7262 "/usr/local/include/minigui/gdi.h" 3
 int ExpandMyBitmap (HDC hdc, PBITMAP bmp,
                const MYBITMAP* my_bmp, const RGB* pal, int frame);

void ExpandMonoBitmap (HDC hdc, BYTE* bits, Uint32 pitch,
                const BYTE* my_bits, Uint32 my_pitch,
                Uint32 w, Uint32 h, DWORD flags, Uint32 bg, Uint32 fg);
void Expand16CBitmap (HDC hdc, BYTE* bits, Uint32 pitch,
                const BYTE* my_bits, Uint32 my_pitch,
                Uint32 w, Uint32 h, DWORD flags, const RGB* pal);
void Expand256CBitmap (HDC hdc, BYTE* bits, Uint32 pitch,
                const BYTE* my_bits, Uint32 my_pitch,
                Uint32 w, Uint32 h, DWORD flags, const RGB* pal);
void CompileRGBABitmap (HDC hdc, BYTE* bits, Uint32 pitch,
                const BYTE* my_bits, Uint32 my_pitch,
                Uint32 w, Uint32 h, DWORD flags, void* pixel_format);
# 7308 "/usr/local/include/minigui/gdi.h" 3
 int PaintImageEx (HDC hdc, int x, int y,
                MG_RWops* area, const char* ext);
# 7325 "/usr/local/include/minigui/gdi.h" 3
 int PaintImageFromFile (HDC hdc, int x, int y,
                const char* spFileName);
# 7344 "/usr/local/include/minigui/gdi.h" 3
 int PaintImageFromMem (HDC hdc, int x, int y,
                const void* mem, int size, const char* ext);
# 7378 "/usr/local/include/minigui/gdi.h" 3
 int StretchPaintImageEx (HDC hdc, int x, int y, int w, int h,
                MG_RWops* area, const char* ext);
# 7397 "/usr/local/include/minigui/gdi.h" 3
 int StretchPaintImageFromFile (HDC hdc, int x, int y,
                int w, int h, const char* spFileName);
# 7418 "/usr/local/include/minigui/gdi.h" 3
 int StretchPaintImageFromMem (HDC hdc, int x, int y,
                int w, int h, const void* mem, int size, const char* ext);
# 7438 "/usr/local/include/minigui/gdi.h" 3
 void RotateBitmap (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle);
# 7451 "/usr/local/include/minigui/gdi.h" 3
 void RotateBitmapVFlip (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle);
# 7462 "/usr/local/include/minigui/gdi.h" 3
 void RotateBitmapHFlip (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle);
# 7473 "/usr/local/include/minigui/gdi.h" 3
 void RotateScaledBitmap (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle, int w, int h);
# 7487 "/usr/local/include/minigui/gdi.h" 3
 void RotateScaledBitmapVFlip (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle, int w, int h);
# 7501 "/usr/local/include/minigui/gdi.h" 3
 void RotateScaledBitmapHFlip (HDC hdc, const BITMAP *bmp,
                int lx, int ty, int angle, int w, int h);
# 7515 "/usr/local/include/minigui/gdi.h" 3
 void PivotBitmap(HDC hdc, const BITMAP *bmp,
                int lx, int ty, int cx, int cy, int angle);
# 7544 "/usr/local/include/minigui/gdi.h" 3
 void PivotScaledBitmapFlip (HDC hdc, const BITMAP *bmp,
                fixed x, fixed y, fixed cx, fixed cy, int angle, fixed scale_x,
                fixed scale_y, BOOL h_flip, BOOL v_flip);
# 7576 "/usr/local/include/minigui/gdi.h" 3
}
# 16 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/window.h" 1 3
# 35 "/usr/local/include/minigui/window.h" 3
extern "C" {
# 562 "/usr/local/include/minigui/window.h" 3
extern unsigned int __mg_key_longpress_time;
extern unsigned int __mg_key_alwayspress_time;
extern unsigned int __mg_interval_time;
# 1257 "/usr/local/include/minigui/window.h" 3
typedef struct _DRAGINFO {
    int location;
    int init_x, init_y;
} DRAGINFO;
# 1827 "/usr/local/include/minigui/window.h" 3
typedef struct _MSG
{

    HWND hwnd;

    int message;

    WPARAM wParam;

    LPARAM lParam;

    unsigned int time;




} MSG;
typedef MSG* PMSG;
# 1877 "/usr/local/include/minigui/window.h" 3
 int GetMessage (PMSG pMsg, HWND hMainWnd);
# 1895 "/usr/local/include/minigui/window.h" 3
 BOOL WaitMessage (PMSG pMsg, HWND hMainWnd);
# 1911 "/usr/local/include/minigui/window.h" 3
 BOOL HavePendingMessage (HWND hMainWnd);
# 1960 "/usr/local/include/minigui/window.h" 3
 BOOL PeekMessage (PMSG pMsg, HWND hWnd,
                int iMsgFilterMin, int iMsgFilterMax, UINT uRemoveMsg);
# 1990 "/usr/local/include/minigui/window.h" 3
 BOOL PeekMessageEx (PMSG pMsg, HWND hWnd,
                int iMsgFilterMin, int iMsgFilterMax,
                BOOL bWait, UINT uRemoveMsg);
# 2020 "/usr/local/include/minigui/window.h" 3
 BOOL PeekPostMessage (PMSG pMsg, HWND hWnd, int iMsgFilterMin,
                int iMsgFilterMax, UINT uRemoveMsg);
# 2044 "/usr/local/include/minigui/window.h" 3
 int PostMessage (HWND hWnd, int iMsg,
                WPARAM wParam, LPARAM lParam);
# 2062 "/usr/local/include/minigui/window.h" 3
 int SendMessage (HWND hWnd, int iMsg,
                WPARAM wParam, LPARAM lParam);
# 2080 "/usr/local/include/minigui/window.h" 3
 void SetAutoRepeatMessage (HWND hwnd, int msg,
                WPARAM wParam, LPARAM lParam);
# 2130 "/usr/local/include/minigui/window.h" 3
int Send2Client (MSG* msg, int cli);
# 2151 "/usr/local/include/minigui/window.h" 3
BOOL Send2TopMostClients (int iMsg, WPARAM wParam, LPARAM lParam);
# 2173 "/usr/local/include/minigui/window.h" 3
BOOL Send2ActiveWindow (const MG_Layer* layer,
                 int iMsg, WPARAM wParam, LPARAM lParam);
# 2243 "/usr/local/include/minigui/window.h" 3
 int SendNotifyMessage (HWND hWnd, int iMsg, WPARAM wParam, LPARAM lParam);
# 2259 "/usr/local/include/minigui/window.h" 3
 int BroadcastMessage (int iMsg, WPARAM wParam, LPARAM lParam);
# 2273 "/usr/local/include/minigui/window.h" 3
 int PostQuitMessage (HWND hWnd);
# 2317 "/usr/local/include/minigui/window.h" 3
 BOOL SetKeyboardLayout (const char* kbd_layout);
# 2339 "/usr/local/include/minigui/window.h" 3
 BOOL TranslateMessage (PMSG pMsg);
# 2363 "/usr/local/include/minigui/window.h" 3
 BOOL TranslateKeyMsgToChar (int message,
                WPARAM wParam, LPARAM lParam, WORD *ch);
# 2382 "/usr/local/include/minigui/window.h" 3
 int DispatchMessage (PMSG pMsg);
# 2396 "/usr/local/include/minigui/window.h" 3
 int ThrowAwayMessages (HWND pMainWnd);
# 2414 "/usr/local/include/minigui/window.h" 3
 BOOL EmptyMessageQueue (HWND hWnd);
# 2551 "/usr/local/include/minigui/window.h" 3
typedef int (* SRVEVTHOOK) (PMSG pMsg);
# 2566 "/usr/local/include/minigui/window.h" 3
 SRVEVTHOOK SetServerEventHook (SRVEVTHOOK SrvEvtHook);
# 2591 "/usr/local/include/minigui/window.h" 3
 HWND RegisterKeyHookWindow (HWND hwnd, DWORD flag);
# 2614 "/usr/local/include/minigui/window.h" 3
 HWND RegisterMouseHookWindow (HWND hwnd, DWORD flag);
# 2844 "/usr/local/include/minigui/window.h" 3
typedef int (* WNDPROC)(HWND, int, WPARAM, LPARAM);

extern HWND __mg_hwnd_desktop;
# 2873 "/usr/local/include/minigui/window.h" 3
typedef struct _MAINWINCREATE
{

    DWORD dwStyle;


    DWORD dwExStyle;


    const char* spCaption;


    HMENU hMenu;


    HCURSOR hCursor;


    HICON hIcon;


    HWND hHosting;


    int (*MainWindowProc)(HWND, int, WPARAM, LPARAM);


    int lx, ty, rx, by;


    int iBkColor;


    DWORD dwAddData;


    DWORD dwReserved;
}MAINWINCREATE;
typedef MAINWINCREATE* PMAINWINCREATE;
# 2965 "/usr/local/include/minigui/window.h" 3
 void MainWindowThreadCleanup(HWND hMainWnd);
# 2992 "/usr/local/include/minigui/window.h" 3
 HWND CreateMainWindow (PMAINWINCREATE pCreateStruct);
# 3012 "/usr/local/include/minigui/window.h" 3
 BOOL DestroyMainWindow (HWND hWnd);

int PreDefMainWinProc (HWND hWnd, int message,
                WPARAM wParam, LPARAM lParam);

int PreDefDialogProc (HWND hWnd,
                int message, WPARAM wParam, LPARAM lParam);

int PreDefControlProc (HWND hWnd, int message,
                WPARAM wParam, LPARAM lParam);
# 3040 "/usr/local/include/minigui/window.h" 3
 int DefaultWindowProc (HWND hWnd, int message,
                WPARAM wParam, LPARAM lParam);






extern WNDPROC __mg_def_proc[3];
# 3127 "/usr/local/include/minigui/window.h" 3
 void UpdateWindow (HWND hWnd, BOOL bErase);
# 3147 "/usr/local/include/minigui/window.h" 3
 BOOL ShowWindow (HWND hWnd, int iCmdShow);
# 3165 "/usr/local/include/minigui/window.h" 3
 BOOL EnableWindow (HWND hWnd, BOOL fEnable);
# 3181 "/usr/local/include/minigui/window.h" 3
 BOOL IsWindowEnabled (HWND hWnd);
# 3203 "/usr/local/include/minigui/window.h" 3
 BOOL GetClientRect(HWND hWnd, PRECT prc);
# 3218 "/usr/local/include/minigui/window.h" 3
 int GetWindowBkColor (HWND hWnd);
# 3235 "/usr/local/include/minigui/window.h" 3
 int SetWindowBkColor (HWND hWnd, int new_bkcolor);
# 3249 "/usr/local/include/minigui/window.h" 3
 PLOGFONT GetWindowFont (HWND hWnd);
# 3270 "/usr/local/include/minigui/window.h" 3
 PLOGFONT SetWindowFont (HWND hWnd, PLOGFONT pLogFont);
# 3284 "/usr/local/include/minigui/window.h" 3
 HCURSOR GetWindowCursor (HWND hWnd);
# 3299 "/usr/local/include/minigui/window.h" 3
 HCURSOR SetWindowCursor (HWND hWnd, HCURSOR hNewCursor);
# 3312 "/usr/local/include/minigui/window.h" 3
 DWORD GetWindowStyle (HWND hWnd);
# 3325 "/usr/local/include/minigui/window.h" 3
 DWORD GetWindowExStyle (HWND hWnd);
# 3340 "/usr/local/include/minigui/window.h" 3
 BOOL ExcludeWindowStyle (HWND hWnd, DWORD dwStyle);
# 3355 "/usr/local/include/minigui/window.h" 3
 BOOL IncludeWindowStyle (HWND hWnd, DWORD dwStyle);
# 3370 "/usr/local/include/minigui/window.h" 3
 BOOL ExcludeWindowExStyle (HWND hWnd, DWORD dwStyle);
# 3385 "/usr/local/include/minigui/window.h" 3
 BOOL IncludeWindowExStyle (HWND hWnd, DWORD dwStyle);
# 3399 "/usr/local/include/minigui/window.h" 3
 WNDPROC GetWindowCallbackProc (HWND hWnd);
# 3418 "/usr/local/include/minigui/window.h" 3
 WNDPROC SetWindowCallbackProc (HWND hWnd, WNDPROC newProc);
# 3432 "/usr/local/include/minigui/window.h" 3
 DWORD GetWindowAdditionalData (HWND hWnd);
# 3452 "/usr/local/include/minigui/window.h" 3
 DWORD SetWindowAdditionalData (HWND hWnd, DWORD newData);
# 3466 "/usr/local/include/minigui/window.h" 3
 DWORD GetWindowAdditionalData2 (HWND hWnd);
# 3485 "/usr/local/include/minigui/window.h" 3
 DWORD SetWindowAdditionalData2 (HWND hWnd, DWORD newData);
# 3503 "/usr/local/include/minigui/window.h" 3
 DWORD GetWindowClassAdditionalData (HWND hWnd);
# 3520 "/usr/local/include/minigui/window.h" 3
 DWORD SetWindowClassAdditionalData (HWND hWnd, DWORD newData);
# 3534 "/usr/local/include/minigui/window.h" 3
 const char* GetWindowCaption (HWND hWnd);
# 3549 "/usr/local/include/minigui/window.h" 3
 BOOL SetWindowCaption (HWND hWnd, const char* spCaption);
# 3569 "/usr/local/include/minigui/window.h" 3
 BOOL InvalidateRect(HWND hWnd,
                const RECT* prc, BOOL bEraseBkgnd);
# 3587 "/usr/local/include/minigui/window.h" 3
 HDC BeginPaint(HWND hWnd);
# 3602 "/usr/local/include/minigui/window.h" 3
 void EndPaint(HWND hWnd, HDC hdc);
# 3619 "/usr/local/include/minigui/window.h" 3
 BOOL GetUpdateRect (HWND hWnd, RECT* update_rect);
# 3635 "/usr/local/include/minigui/window.h" 3
 int ClientWidthToWindowWidth (DWORD dwStyle, int cw);
# 3652 "/usr/local/include/minigui/window.h" 3
 int ClientHeightToWindowHeight (DWORD dwStyle,
                int ch, BOOL hasMenu);
# 3668 "/usr/local/include/minigui/window.h" 3
 void ClientToScreen (HWND hWnd, int* x, int* y);
# 3683 "/usr/local/include/minigui/window.h" 3
 void ScreenToClient (HWND hWnd, int* x, int* y);
# 3698 "/usr/local/include/minigui/window.h" 3
 void WindowToScreen (HWND hWnd, int* x, int* y);
# 3713 "/usr/local/include/minigui/window.h" 3
 void ScreenToWindow (HWND hWnd, int* x, int* y);
# 3728 "/usr/local/include/minigui/window.h" 3
 BOOL IsMainWindow (HWND hWnd);
# 3742 "/usr/local/include/minigui/window.h" 3
 BOOL IsControl (HWND hWnd);
# 3757 "/usr/local/include/minigui/window.h" 3
 BOOL IsWindow (HWND hWnd);
# 3772 "/usr/local/include/minigui/window.h" 3
 BOOL IsDialog (HWND hWnd);
# 3791 "/usr/local/include/minigui/window.h" 3
 HWND GetParent (HWND hWnd);
# 3808 "/usr/local/include/minigui/window.h" 3
 HWND GetMainWindowHandle (HWND hWnd);
# 3821 "/usr/local/include/minigui/window.h" 3
 BOOL IsWindowVisible (HWND hWnd);
# 3840 "/usr/local/include/minigui/window.h" 3
 BOOL GetWindowRect (HWND hWnd, PRECT prc);
# 3866 "/usr/local/include/minigui/window.h" 3
 HWND GetNextChild (HWND hWnd, HWND hChild);
# 3885 "/usr/local/include/minigui/window.h" 3
 HWND GetNextMainWindow (HWND hMainWnd);
# 3906 "/usr/local/include/minigui/window.h" 3
 HWND GetHosting (HWND hMainWnd);
# 3927 "/usr/local/include/minigui/window.h" 3
 HWND GetFirstHosted (HWND hHosting);
# 3953 "/usr/local/include/minigui/window.h" 3
 HWND GetNextHosted (HWND hHosting, HWND hHosted);
# 3969 "/usr/local/include/minigui/window.h" 3
 int GetWindowTextLength (HWND hWnd);
# 3987 "/usr/local/include/minigui/window.h" 3
 int GetWindowText (HWND hWnd, char* spString, int nMaxLen);
# 4004 "/usr/local/include/minigui/window.h" 3
 BOOL SetWindowText (HWND hWnd, const char* spString);
# 4020 "/usr/local/include/minigui/window.h" 3
 HWND GetFocusChild (HWND hParent);
# 4035 "/usr/local/include/minigui/window.h" 3
 HWND SetNullFocus (HWND hParent);
# 4050 "/usr/local/include/minigui/window.h" 3
 HWND SetFocusChild (HWND hWnd);
# 4075 "/usr/local/include/minigui/window.h" 3
 HWND GetActiveWindow (void);
# 4090 "/usr/local/include/minigui/window.h" 3
 HWND SetActiveWindow (HWND hMainWnd);
# 4118 "/usr/local/include/minigui/window.h" 3
 HWND GetCapture(void);
# 4135 "/usr/local/include/minigui/window.h" 3
 HWND SetCapture(HWND hWnd);
# 4148 "/usr/local/include/minigui/window.h" 3
 void ReleaseCapture(void);
# 4162 "/usr/local/include/minigui/window.h" 3
 HWND GetWindowUnderCursor(void);
# 4185 "/usr/local/include/minigui/window.h" 3
 BOOL MoveWindow (HWND hWnd, int x, int y, int w, int h,
                BOOL fPaint);
# 4208 "/usr/local/include/minigui/window.h" 3
 void ScrollWindow (HWND hWnd, int iOffx, int iOffy,
                const RECT* rc1, const RECT* rc2);
# 4245 "/usr/local/include/minigui/window.h" 3
extern int WinMainMetrics [];
# 4331 "/usr/local/include/minigui/window.h" 3
 int GetWindowElementMetricsEx (HWND hwnd, Uint16 item);
# 4350 "/usr/local/include/minigui/window.h" 3
 int SetWindowElementMetricsEx (HWND hwnd, Uint16 item,
                int new_value);
# 4426 "/usr/local/include/minigui/window.h" 3
extern gal_pixel WinElementColors[];
# 4508 "/usr/local/include/minigui/window.h" 3
 gal_pixel GetWindowElementColorEx (HWND hwnd, Uint16 item);
# 4528 "/usr/local/include/minigui/window.h" 3
 gal_pixel SetWindowElementColorEx (HWND hwnd, Uint16 item,
                gal_pixel new_value);
# 4576 "/usr/local/include/minigui/window.h" 3
 PBITMAP GetSystemBitmap (int id);
# 4615 "/usr/local/include/minigui/window.h" 3
 HICON GetLargeSystemIcon (int id);
# 4638 "/usr/local/include/minigui/window.h" 3
 HICON GetSmallSystemIcon (int id);
# 4688 "/usr/local/include/minigui/window.h" 3
 const BITMAP* GetStockBitmap (const char* name,
                int ckey_x, int ckey_y);
# 4711 "/usr/local/include/minigui/window.h" 3
 BOOL LoadSystemBitmapEx (PBITMAP pBitmap,
                const char* szItemName, int ckey_x, int ckey_y);
# 4744 "/usr/local/include/minigui/window.h" 3
 HICON LoadSystemIcon (const char* szItemName, int which);
# 4774 "/usr/local/include/minigui/window.h" 3
 BOOL EnableScrollBar (HWND hWnd, int iSBar, BOOL bEnable);
# 4797 "/usr/local/include/minigui/window.h" 3
 BOOL GetScrollPos (HWND hWnd, int iSBar, int* pPos);
# 4823 "/usr/local/include/minigui/window.h" 3
 BOOL GetScrollRange (HWND hWnd, int iSBar,
                int* pMinPos, int* pMaxPos);
# 4848 "/usr/local/include/minigui/window.h" 3
 BOOL SetScrollPos (HWND hWnd, int iSBar, int iNewPos);
# 4874 "/usr/local/include/minigui/window.h" 3
 BOOL SetScrollRange (HWND hWnd, int iSBar,
                int iMinPos, int iMaxPos);
# 4896 "/usr/local/include/minigui/window.h" 3
 BOOL ShowScrollBar (HWND hWnd, int iSBar, BOOL bShow);
# 4908 "/usr/local/include/minigui/window.h" 3
typedef struct _SCROLLINFO
{

    UINT cbSize;
# 4924 "/usr/local/include/minigui/window.h" 3
    UINT fMask;

    int nMin;

    int nMax;

    UINT nPage;

    int nPos;



} SCROLLINFO, *PSCROLLINFO;
# 4961 "/usr/local/include/minigui/window.h" 3
 BOOL SetScrollInfo (HWND hWnd, int iSBar,
                const SCROLLINFO* lpsi, BOOL fRedraw);
# 4986 "/usr/local/include/minigui/window.h" 3
 BOOL GetScrollInfo (HWND hWnd, int iSBar, PSCROLLINFO lpsi);
# 5023 "/usr/local/include/minigui/window.h" 3
typedef struct _WNDCLASS
{

    char* spClassName;


    DWORD opMask;


    DWORD dwStyle;


    DWORD dwExStyle;


    HCURSOR hCursor;


    int iBkColor;


    int (*WinProc) (HWND, int, WPARAM, LPARAM);


    DWORD dwAddData;
} WNDCLASS;
typedef WNDCLASS* PWNDCLASS;
# 5072 "/usr/local/include/minigui/window.h" 3
 BOOL RegisterWindowClass (PWNDCLASS pWndClass);
# 5087 "/usr/local/include/minigui/window.h" 3
 BOOL UnregisterWindowClass (const char* szClassName);
# 5102 "/usr/local/include/minigui/window.h" 3
 const char* GetClassName (HWND hWnd);
# 5119 "/usr/local/include/minigui/window.h" 3
 BOOL GetWindowClassInfo (PWNDCLASS pWndClass);
# 5135 "/usr/local/include/minigui/window.h" 3
 BOOL SetWindowClassInfo (const WNDCLASS* pWndClass);
# 5180 "/usr/local/include/minigui/window.h" 3
 HWND CreateWindowEx (const char* spClassName,
                const char* spCaption, DWORD dwStyle, DWORD dwExStyle,
                int id, int x, int y, int w, int h, HWND hParentWnd,
                DWORD dwAddData);
# 5197 "/usr/local/include/minigui/window.h" 3
 BOOL DestroyWindow (HWND hWnd);
# 5210 "/usr/local/include/minigui/window.h" 3
typedef void (* NOTIFPROC) (HWND hwnd, int id, int nc, DWORD add_data);
# 5238 "/usr/local/include/minigui/window.h" 3
 NOTIFPROC SetNotificationCallback (HWND hwnd,
                NOTIFPROC notif_proc);
# 5254 "/usr/local/include/minigui/window.h" 3
 NOTIFPROC GetNotificationCallback (HWND hwnd);
# 5305 "/usr/local/include/minigui/window.h" 3
 BOOL SetTimer (HWND hWnd, int id, unsigned int speed);
# 5319 "/usr/local/include/minigui/window.h" 3
 BOOL KillTimer (HWND hWnd, int id);
# 5334 "/usr/local/include/minigui/window.h" 3
 BOOL ResetTimer (HWND hWnd, int id, unsigned int speed);
# 5346 "/usr/local/include/minigui/window.h" 3
 unsigned int GetTickCount (void);
# 5362 "/usr/local/include/minigui/window.h" 3
 BOOL IsTimerInstalled (HWND hWnd, int id);
# 5375 "/usr/local/include/minigui/window.h" 3
 BOOL HaveFreeTimer (void);
# 5402 "/usr/local/include/minigui/window.h" 3
int GBIMEWinProc (HWND hWnd, int message, WPARAM wParam, LPARAM lParam);
# 5430 "/usr/local/include/minigui/window.h" 3
 HWND GBIMEWindowEx (HWND hosting, int lx, int ty, int rx, int by,
                BOOL two_lines);
# 5478 "/usr/local/include/minigui/window.h" 3
 int RegisterIMEWindow (HWND hWnd);
# 5494 "/usr/local/include/minigui/window.h" 3
 int UnregisterIMEWindow (HWND hWnd);
# 5518 "/usr/local/include/minigui/window.h" 3
 int GetIMEStatus (int StatusCode);
# 5543 "/usr/local/include/minigui/window.h" 3
 int SetIMEStatus (int StatusCode, int Value);
# 5563 "/usr/local/include/minigui/window.h" 3
 HACCEL CopyAcceleratorTable (HACCEL hacc);
# 5578 "/usr/local/include/minigui/window.h" 3
 int DeleteAccelerators (HACCEL hacc, int key, DWORD keymask);
# 5612 "/usr/local/include/minigui/window.h" 3
 int AddAccelerators (HACCEL hacc, int key,
                DWORD keymask, WPARAM wParam, LPARAM lParam);
# 5629 "/usr/local/include/minigui/window.h" 3
 int DestroyAcceleratorTable (HACCEL hacc);
# 5642 "/usr/local/include/minigui/window.h" 3
 HACCEL CreateAcceleratorTable (HWND hWnd);
# 5655 "/usr/local/include/minigui/window.h" 3
 int TranslateAccelerator (HACCEL hAccel, PMSG pMsg);
# 5682 "/usr/local/include/minigui/window.h" 3
 BOOL CreateCaret (HWND hWnd, PBITMAP pBitmap,
                int nWidth, int nHeight);
# 5700 "/usr/local/include/minigui/window.h" 3
 BOOL ChangeCaretSize (HWND hWnd, int newWidth, int newHeight);
# 5714 "/usr/local/include/minigui/window.h" 3
 BOOL ActiveCaret (HWND hWnd);
# 5731 "/usr/local/include/minigui/window.h" 3
 UINT GetCaretBlinkTime (HWND hWnd);
# 5749 "/usr/local/include/minigui/window.h" 3
 BOOL SetCaretBlinkTime (HWND hWnd, UINT uTime);
# 5763 "/usr/local/include/minigui/window.h" 3
 BOOL DestroyCaret (HWND hWnd);
# 5779 "/usr/local/include/minigui/window.h" 3
 BOOL HideCaret (HWND hWnd);
# 5795 "/usr/local/include/minigui/window.h" 3
 BOOL ShowCaret (HWND hWnd);
# 5813 "/usr/local/include/minigui/window.h" 3
 BOOL SetCaretPos (HWND hWnd, int x, int y);
# 5829 "/usr/local/include/minigui/window.h" 3
 BOOL GetCaretPos (HWND hWnd, PPOINT pPt);
# 5960 "/usr/local/include/minigui/window.h" 3
typedef struct _MENUITEMINFO {
# 5978 "/usr/local/include/minigui/window.h" 3
    UINT mask;
# 6003 "/usr/local/include/minigui/window.h" 3
    UINT type;
# 6018 "/usr/local/include/minigui/window.h" 3
    UINT state;


    int id;


    HMENU hsubmenu;


    PBITMAP uncheckedbmp;


    PBITMAP checkedbmp;


    DWORD itemdata;


    DWORD typedata;





    UINT cch;
} MENUITEMINFO;
typedef MENUITEMINFO* PMENUITEMINFO;
# 6057 "/usr/local/include/minigui/window.h" 3
 HMENU CreateMenu (void);
# 6073 "/usr/local/include/minigui/window.h" 3
 HMENU CreatePopupMenu ( PMENUITEMINFO pmii);
# 6089 "/usr/local/include/minigui/window.h" 3
 HMENU CreateSystemMenu (HWND hwnd, DWORD dwStyle);
# 6117 "/usr/local/include/minigui/window.h" 3
 int InsertMenuItem (HMENU hmnu, int item,
                            BOOL flag, PMENUITEMINFO pmii);
# 6144 "/usr/local/include/minigui/window.h" 3
 int RemoveMenu (HMENU hmnu, int item, UINT flag);
# 6169 "/usr/local/include/minigui/window.h" 3
 int DeleteMenu (HMENU hmnu, int item, UINT flag);
# 6187 "/usr/local/include/minigui/window.h" 3
 int DestroyMenu (HMENU hmnu);
# 6203 "/usr/local/include/minigui/window.h" 3
 int IsMenu (HMENU hmnu);
# 6219 "/usr/local/include/minigui/window.h" 3
 HMENU SetMenu (HWND hwnd, HMENU hmnu);
# 6233 "/usr/local/include/minigui/window.h" 3
 HMENU GetMenu (HWND hwnd);
# 6247 "/usr/local/include/minigui/window.h" 3
 void DrawMenuBar (HWND hwnd);
# 6263 "/usr/local/include/minigui/window.h" 3
 int TrackMenuBar (HWND hwnd, int pos);
# 6302 "/usr/local/include/minigui/window.h" 3
 int TrackPopupMenu (HMENU hmnu, UINT uFlags,
                int x, int y, HWND hwnd);
# 6322 "/usr/local/include/minigui/window.h" 3
 HMENU GetMenuBarItemRect (HWND hwnd, int pos, RECT* prc);
# 6349 "/usr/local/include/minigui/window.h" 3
 BOOL HiliteMenuBarItem (HWND hwnd, int pos, UINT flag);
# 6363 "/usr/local/include/minigui/window.h" 3
 int GetMenuItemCount (HMENU hmnu);
# 6381 "/usr/local/include/minigui/window.h" 3
 int GetMenuItemID (HMENU hmnu, int pos);
# 6404 "/usr/local/include/minigui/window.h" 3
 int GetMenuItemInfo (HMENU hmnu, int item,
                            BOOL flag, PMENUITEMINFO pmii);


int GetMenuItemRect (HWND hwnd, HMENU hmnu,
                int item, PRECT prc);
# 6423 "/usr/local/include/minigui/window.h" 3
 HMENU GetPopupSubMenu (HMENU hpppmnu);
# 6437 "/usr/local/include/minigui/window.h" 3
 HMENU StripPopupHead (HMENU hpppmnu);
# 6456 "/usr/local/include/minigui/window.h" 3
 HMENU GetSubMenu (HMENU hmnu, int pos);
# 6475 "/usr/local/include/minigui/window.h" 3
 HMENU GetSystemMenu (HWND hwnd, BOOL flag);
# 6495 "/usr/local/include/minigui/window.h" 3
 UINT EnableMenuItem (HMENU hmnu, int item, UINT flag);
# 6520 "/usr/local/include/minigui/window.h" 3
 int CheckMenuRadioItem (HMENU hmnu, int first, int last,
                            int checkitem, UINT flag);
# 6546 "/usr/local/include/minigui/window.h" 3
 int SetMenuItemBitmaps (HMENU hmnu, int item, UINT flag,
                            PBITMAP hBmpUnchecked, PBITMAP hBmpChecked);
# 6569 "/usr/local/include/minigui/window.h" 3
 int SetMenuItemInfo (HMENU hmnu, int item,
                            BOOL flag, PMENUITEMINFO pmii);
# 6646 "/usr/local/include/minigui/window.h" 3
typedef struct _CTRLDATA
{

    const char* class_name;

    DWORD dwStyle;

    int x, y, w, h;

    int id;

    const char* caption;

    DWORD dwAddData;

    DWORD dwExStyle;
} CTRLDATA;
typedef CTRLDATA* PCTRLDATA;
# 6672 "/usr/local/include/minigui/window.h" 3
typedef struct _DLGTEMPLATE
{

    DWORD dwStyle;

    DWORD dwExStyle;

    int x, y, w, h;

    const char* caption;

    HICON hIcon;

    HMENU hMenu;

    int controlnr;

    PCTRLDATA controls;

    DWORD dwAddData;
} DLGTEMPLATE;
typedef DLGTEMPLATE* PDLGTEMPLATE;
# 6715 "/usr/local/include/minigui/window.h" 3
 HWND CreateMainWindowIndirectParam (PDLGTEMPLATE pDlgTemplate,
                HWND hOwner, WNDPROC WndProc, LPARAM lParam);
# 6738 "/usr/local/include/minigui/window.h" 3
 BOOL DestroyMainWindowIndirect (HWND hMainWin);
# 6765 "/usr/local/include/minigui/window.h" 3
 int DialogBoxIndirectParam (PDLGTEMPLATE pDlgTemplate,
                    HWND hOwner, WNDPROC DlgProc, LPARAM lParam);
# 6785 "/usr/local/include/minigui/window.h" 3
 BOOL EndDialog (HWND hDlg, int endCode);
# 6797 "/usr/local/include/minigui/window.h" 3
 void DestroyAllControls (HWND hWnd);
# 6810 "/usr/local/include/minigui/window.h" 3
 HWND GetDlgDefPushButton (HWND hWnd);
# 6824 "/usr/local/include/minigui/window.h" 3
 int GetDlgCtrlID (HWND hwndCtl);
# 6838 "/usr/local/include/minigui/window.h" 3
 HWND GetDlgItem (HWND hDlg, int nIDDlgItem);
# 6870 "/usr/local/include/minigui/window.h" 3
 UINT GetDlgItemInt (HWND hDlg, int nIDDlgItem,
                BOOL *lpTranslated, BOOL bSigned);
# 6893 "/usr/local/include/minigui/window.h" 3
 int GetDlgItemText (HWND hDlg, int nIDDlgItem,
                char* lpString, int nMaxCount);
# 6914 "/usr/local/include/minigui/window.h" 3
 char* GetDlgItemText2 (HWND hDlg, int id, int* lenPtr);
# 6935 "/usr/local/include/minigui/window.h" 3
 HWND GetNextDlgGroupItem (HWND hDlg,
                HWND hCtl, BOOL bPrevious);
# 6956 "/usr/local/include/minigui/window.h" 3
 HWND GetNextDlgTabItem (HWND hDlg, HWND hCtl, BOOL bPrevious);
# 6977 "/usr/local/include/minigui/window.h" 3
 int SendDlgItemMessage ( HWND hDlg, int nIDDlgItem,
                int message, WPARAM wParam, LPARAM lParam);
# 7000 "/usr/local/include/minigui/window.h" 3
 BOOL SetDlgItemInt (HWND hDlg, int nIDDlgItem,
                UINT uValue, BOOL bSigned);
# 7020 "/usr/local/include/minigui/window.h" 3
 BOOL SetDlgItemText (HWND hDlg, int nIDDlgItem,
                const char* lpString);
# 7047 "/usr/local/include/minigui/window.h" 3
 void CheckDlgButton (HWND hDlg, int nIDDlgItem, int nCheck);
# 7067 "/usr/local/include/minigui/window.h" 3
 void CheckRadioButton (HWND hDlg,
                int idFirstButton, int idLastButton, int idCheckButton);
# 7095 "/usr/local/include/minigui/window.h" 3
 int IsDlgButtonChecked (HWND hDlg, int idButton);
# 7246 "/usr/local/include/minigui/window.h" 3
 int MessageBox (HWND hParentWnd, const char* pszText,
                      const char* pszCaption, DWORD dwStyle);
# 7261 "/usr/local/include/minigui/window.h" 3
 void MessageBeep (DWORD dwBeep);
# 7270 "/usr/local/include/minigui/window.h" 3
}
# 17 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/mywindows.h" 1 3
# 36 "/usr/local/include/minigui/mywindows.h" 3
extern "C" {
# 77 "/usr/local/include/minigui/mywindows.h" 3
 int myMessageBox (HWND hwnd, DWORD dwStyle, char* title,
                char* text, ...);
# 101 "/usr/local/include/minigui/mywindows.h" 3
 int myWinMessage (HWND hwnd, char* title, char* button1,
                char* text, ...);
# 128 "/usr/local/include/minigui/mywindows.h" 3
 int myWinChoice (HWND hwnd, char* title,
                char* button1, char* button2, char* text, ...);
# 156 "/usr/local/include/minigui/mywindows.h" 3
 int myWinTernary (HWND hwnd, char* title,
                char* button1, char* button2, char* button3, char* text, ...);
# 173 "/usr/local/include/minigui/mywindows.h" 3
 void errorWindow (HWND hwnd, char * str, char* title);
# 194 "/usr/local/include/minigui/mywindows.h" 3
 HWND createStatusWin (HWND hParentWnd, int width, int height,
                char * title, char * text, ...);
# 208 "/usr/local/include/minigui/mywindows.h" 3
 void destroyStatusWin (HWND hwnd);
# 233 "/usr/local/include/minigui/mywindows.h" 3
 HWND createToolTipWin (HWND hParentWnd, int x, int y,
                int timeout_ms, const char * text, ...);
# 254 "/usr/local/include/minigui/mywindows.h" 3
 void resetToolTipWin (HWND hwnd, int x, int y,
                const char* text, ...);
# 268 "/usr/local/include/minigui/mywindows.h" 3
 void destroyToolTipWin (HWND hwnd);
# 293 "/usr/local/include/minigui/mywindows.h" 3
 HWND createProgressWin (HWND hParentWnd, char * title,
                char * label, int id, int range);
# 307 "/usr/local/include/minigui/mywindows.h" 3
 void destroyProgressWin (HWND hwnd);







typedef struct _myWinButton
{

    char* text;

    int id;

    DWORD flags;
} myWINBUTTON;


typedef struct _myWinMenuItems
{

    char** items;

    int listboxid;

    int* selected;

    int minbuttonid;

    int maxbuttonid;
} myWINMENUITEMS;
# 368 "/usr/local/include/minigui/mywindows.h" 3
 int myWinMenu (HWND hParentWnd, const char* title,
                const char* label, int width, int listboxheight,
                char ** items, int * listItem, myWINBUTTON* buttons);





typedef struct _myWinEntry
{

    char* text;

    char** value;

    int maxlen;

    DWORD flags;
} myWINENTRY;


typedef struct _myWinEntryItems
{
    myWINENTRY* entries;
    int entrycount;
    int firstentryid;
    int minbuttonid;
    int maxbuttonid;
} myWINENTRYITEMS;
# 425 "/usr/local/include/minigui/mywindows.h" 3
 int myWinEntries (HWND hParentWnd, const char* title,
                const char* label, int width, int editboxwidth,
                BOOL fIME, myWINENTRY* items, myWINBUTTON* buttons);
# 446 "/usr/local/include/minigui/mywindows.h" 3
 int myWinHelpMessage (HWND hwnd, int width, int height,
                const char* help_title, const char* help_msg);
# 456 "/usr/local/include/minigui/mywindows.h" 3
}
# 18 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/control.h" 1 3
# 35 "/usr/local/include/minigui/control.h" 3
extern "C" {


# 1 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
extern "C" {
# 55 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
typedef enum
{



  SB_POLICY_ALWAYS,



  SB_POLICY_AUTOMATIC,


  SB_POLICY_NEVER
} SBPolicyType;


int EditOnEraseBackground (HWND hWnd, HDC hdc, const RECT* pClipRect);
# 83 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void DrawBoxFromBitmap (HDC hdc, const RECT* box, const BITMAP* bmp, BOOL h_v, BOOL do_clip);
# 110 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void Draw3DControlFrameEx (HDC hdc, HWND hwnd, int x0, int y0, int x1, int y1,
            DWORD flags, gal_pixel fillc);
# 142 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void DrawFlatControlFrameEx (HDC hdc, HWND hwnd, int x0, int y0, int x1, int y1,
            int corner, DWORD flags, gal_pixel fillc);
# 175 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void Draw3DThickFrameEx (HDC hdc, HWND hwnd,
                int l, int t, int r, int b, DWORD flags, gal_pixel fillc);
# 228 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void Draw3DThinFrameEx (HDC hdc, HWND hwnd,
                int l, int t, int r, int b, DWORD flags, gal_pixel fillc);
# 261 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void Draw3DBorderEx (HDC hdc, HWND hwnd, int l, int t, int r, int b);
# 285 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void DisabledTextOutEx (HDC hdc, HWND hwnd, int x, int y, const char* szText);
# 310 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
 void NotifyParentEx (HWND hwnd, int id, int code, DWORD add_data);
# 339 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
typedef int (*STRCMP) (const char* s1, const char* s2, size_t n);

 int DefaultPageProc (HWND hWnd, int message, WPARAM wParam, LPARAM lParam);
# 350 "/usr/local/include/minigui/ctrl/ctrlhelper.h" 3
}
# 39 "/usr/local/include/minigui/control.h" 2 3
# 52 "/usr/local/include/minigui/control.h" 3
# 1 "/usr/local/include/minigui/ctrl/static.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/static.h" 3
extern "C" {
# 278 "/usr/local/include/minigui/ctrl/static.h" 3
}
# 53 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/button.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/button.h" 3
extern "C" {
# 588 "/usr/local/include/minigui/ctrl/button.h" 3
}
# 57 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/edit.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/edit.h" 3
extern "C" {
# 618 "/usr/local/include/minigui/ctrl/edit.h" 3
typedef int (*ED_DRAWSEL_FUNC) (HWND, HDC, int, int, const char*, int, int);
# 983 "/usr/local/include/minigui/ctrl/edit.h" 3
}
# 61 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/progressbar.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/progressbar.h" 3
extern "C" {
# 212 "/usr/local/include/minigui/ctrl/progressbar.h" 3
}
# 65 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/listbox.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/listbox.h" 3
extern "C" {
# 73 "/usr/local/include/minigui/ctrl/listbox.h" 3
typedef struct _LISTBOXITEMINFO
{

    char* string;
# 90 "/usr/local/include/minigui/ctrl/listbox.h" 3
    DWORD cmFlag;


    HICON hIcon;
} LISTBOXITEMINFO;





typedef LISTBOXITEMINFO* PLISTBOXITEMINFO;
# 1021 "/usr/local/include/minigui/ctrl/listbox.h" 3
}
# 69 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/propsheet.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/propsheet.h" 3
extern "C" {
# 375 "/usr/local/include/minigui/ctrl/propsheet.h" 3
}
# 73 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/combobox.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/combobox.h" 3
extern "C" {
# 973 "/usr/local/include/minigui/ctrl/combobox.h" 3
}
# 77 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/toolbar.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/toolbar.h" 3
extern "C" {
# 68 "/usr/local/include/minigui/ctrl/toolbar.h" 3
typedef struct _TOOLBARITEMINFO
{

    int insPos;






    int id;


    char NBmpPath[4096 +10];

    char HBmpPath[4096 +10];

    char DBmpPath[4096 +10];


    DWORD dwAddData;
} TOOLBARITEMINFO;




typedef TOOLBARITEMINFO* PTOOLBARITEMINFO;
# 127 "/usr/local/include/minigui/ctrl/toolbar.h" 3
}
# 81 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/newtoolbar.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
extern "C" {
# 65 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
typedef struct _NTBINFO
{

    PBITMAP image;


    int nr_cells;
# 85 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
    int nr_cols;





    int w_cell;





    int h_cell;

} NTBINFO;
# 111 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
typedef void (* HOTSPOTPROC)(HWND hwnd, int id, const RECT* cell, int x, int y);
# 145 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
typedef struct _NTBITEMINFO
{
# 159 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
    DWORD which;
# 171 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
    DWORD flags;






    int id;





    char* text;


    char* tip;


    int bmp_cell;


    HOTSPOTPROC hotspot_proc;


    RECT rc_hotspot;


    DWORD add_data;
} NTBITEMINFO;





typedef NTBITEMINFO* PNTBITEMINFO;
# 381 "/usr/local/include/minigui/ctrl/newtoolbar.h" 3
}
# 85 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/menubutton.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/menubutton.h" 3
extern "C" {
# 75 "/usr/local/include/minigui/ctrl/menubutton.h" 3
typedef struct _MENUBUTTONITEM
{
# 85 "/usr/local/include/minigui/ctrl/menubutton.h" 3
    DWORD which;

    const char* text;

    PBITMAP bmp;

    DWORD data;
} MENUBUTTONITEM;





typedef MENUBUTTONITEM* PMENUBUTTONITEM;
# 378 "/usr/local/include/minigui/ctrl/menubutton.h" 3
}
# 89 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/trackbar.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/trackbar.h" 3
extern "C" {
# 433 "/usr/local/include/minigui/ctrl/trackbar.h" 3
}
# 93 "/usr/local/include/minigui/control.h" 2 3



# 1 "/usr/local/include/minigui/ctrl/scrollview.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/scrollview.h" 3
extern "C" {
# 72 "/usr/local/include/minigui/ctrl/scrollview.h" 3
 int DefaultContainerProc (HWND hWnd, int message, WPARAM wParam, LPARAM lParam);


typedef GHANDLE HSVITEM;




typedef struct _CONTAINERINFO
{






    WNDPROC user_proc;

    int controlnr;

    PCTRLDATA controls;

    DWORD dwAddData;
} CONTAINERINFO;

typedef CONTAINERINFO* PCONTAINERINFO;






 DWORD mglist_get_item_adddata (GHANDLE hi);





 DWORD scrollview_get_item_adddata (HSVITEM hsvi);





 int scrollview_get_item_index (HWND hWnd, HSVITEM hsvi);





 BOOL scrollview_is_item_hilight (HWND hWnd, HSVITEM hsvi);





 BOOL scrollview_is_item_selected (HSVITEM hsvi);





 int scrollview_set_item_height (HWND hWnd, HSVITEM hsvi, int height);
# 145 "/usr/local/include/minigui/ctrl/scrollview.h" 3
typedef int (*SVITEM_INITFUNC) (HWND hWnd, HSVITEM hsvi);
# 154 "/usr/local/include/minigui/ctrl/scrollview.h" 3
typedef void (*SVITEM_DESTROYFUNC) (HWND hWnd, HSVITEM hsvi);
# 165 "/usr/local/include/minigui/ctrl/scrollview.h" 3
typedef void (*SVITEM_DRAWFUNC) (HWND hWnd, HSVITEM hsvi, HDC hdc, RECT *rcDraw);





typedef int (*SVITEM_CMP) (HSVITEM hsvi1, HSVITEM hsvi2);


typedef struct _svitem_operations
{

    SVITEM_INITFUNC initItem;

    SVITEM_DESTROYFUNC destroyItem;

    SVITEM_DRAWFUNC drawItem;
} SVITEMOPS;

typedef SVITEMOPS* PSVITEMOPS;


typedef struct _SCROLLVIEWITEMINFO
{

    int nItem;

    int nItemHeight;

    DWORD addData;
} SVITEMINFO;

typedef SVITEMINFO* PSVITEMINFO;
# 1088 "/usr/local/include/minigui/ctrl/scrollview.h" 3
}
# 97 "/usr/local/include/minigui/control.h" 2 3







# 1 "/usr/local/include/minigui/ctrl/textedit.h" 1 3
# 33 "/usr/local/include/minigui/ctrl/textedit.h" 3
extern "C" {
# 57 "/usr/local/include/minigui/ctrl/textedit.h" 3
typedef GHANDLE HTEXTDOC;
# 96 "/usr/local/include/minigui/ctrl/textedit.h" 3
}
# 105 "/usr/local/include/minigui/control.h" 2 3



}
# 19 "../inc/mgcomm.h" 2
# 1 "/usr/local/include/minigui/mgext.h" 1 3
# 35 "/usr/local/include/minigui/mgext.h" 3
extern "C" {
# 55 "/usr/local/include/minigui/mgext.h" 3
 BOOL InitMiniGUIExt (void);
# 66 "/usr/local/include/minigui/mgext.h" 3
 void MiniGUIExtCleanUp (void);
# 78 "/usr/local/include/minigui/mgext.h" 3
# 1 "/usr/local/include/minigui/ext/spinbox.h" 1 3
# 35 "/usr/local/include/minigui/ext/spinbox.h" 3
extern "C" {
# 60 "/usr/local/include/minigui/ext/spinbox.h" 3
typedef struct _SPININFO
{

    int max;

    int min;

    int cur;
} SPININFO;




typedef SPININFO *PSPININFO;
# 86 "/usr/local/include/minigui/ext/spinbox.h" 3
void GetSpinBoxSize (DWORD dwStyle, int* w, int* h);
# 341 "/usr/local/include/minigui/ext/spinbox.h" 3
}
# 79 "/usr/local/include/minigui/mgext.h" 2 3



# 1 "/usr/local/include/minigui/ext/monthcal.h" 1 3
# 35 "/usr/local/include/minigui/ext/monthcal.h" 3
extern "C" {
# 60 "/usr/local/include/minigui/ext/monthcal.h" 3
typedef struct _SYSTEMTIME
{

    int year;

    int month;

    int day;

    int weekday;
} SYSTEMTIME;




typedef SYSTEMTIME *PSYSTEMTIME;


typedef struct _MCCOLORINFO
{

    int clr_titlebk;

    int clr_titletext;

    int clr_arrow;

    int clr_arrowHibk;


    int clr_weekcaptbk;

    int clr_weekcapttext;


    int clr_daybk;

    int clr_dayHibk;

    int clr_daytext;

    int clr_trailingtext;

    int clr_dayHitext;
} MCCOLORINFO;





typedef MCCOLORINFO *PMCCOLORINFO;
# 475 "/usr/local/include/minigui/ext/monthcal.h" 3
}
# 83 "/usr/local/include/minigui/mgext.h" 2 3



# 1 "/usr/local/include/minigui/ext/coolbar.h" 1 3
# 35 "/usr/local/include/minigui/ext/coolbar.h" 3
extern "C" {
# 64 "/usr/local/include/minigui/ext/coolbar.h" 3
typedef struct _COOLBARITEMINFO
{

    int insPos;






    int id;
# 85 "/usr/local/include/minigui/ext/coolbar.h" 3
    int ItemType;




    PBITMAP Bmp;




    const char *ItemHint;




    const char *Caption;


    DWORD dwAddData;
} COOLBARITEMINFO;





typedef COOLBARITEMINFO *PCOOLBARITEMINFO;
# 216 "/usr/local/include/minigui/ext/coolbar.h" 3
}
# 87 "/usr/local/include/minigui/mgext.h" 2 3



# 1 "/usr/local/include/minigui/ext/listview.h" 1 3
# 35 "/usr/local/include/minigui/ext/listview.h" 3
extern "C" {
# 70 "/usr/local/include/minigui/ext/listview.h" 3
typedef GHANDLE HLVITEM;
# 79 "/usr/local/include/minigui/ext/listview.h" 3
typedef struct _LVITEM
{



    int nItem;

    int nItemHeight;

    DWORD itemData;
# 99 "/usr/local/include/minigui/ext/listview.h" 3
    DWORD dwFlags;

} LVITEM;


typedef LVITEM *PLVITEM;
# 115 "/usr/local/include/minigui/ext/listview.h" 3
typedef struct _LVSUBITEM
{







    DWORD flags;

    int nItem;

    int subItem;

    char *pszText;

    int nTextMax;

    int nTextColor;

    DWORD image;
} LVSUBITEM;

typedef LVSUBITEM *PLVSUBITEM;


typedef struct _LVSORTDATA
{

    int ncol;

    int losorted;

    HWND hLV;
} LVSORTDATA;

typedef LVSORTDATA *PLVSORTDATA;


typedef int (*PFNLVCOMPARE) (HLVITEM nItem1, HLVITEM nItem2, PLVSORTDATA sortData);

typedef GHANDLE HLVHDR;
typedef GHANDLE HLVHDRITEM;



typedef void (*PFN_LVHDR_BKDRAWFUNC) (HWND hWnd, HLVHDR hlvhdr, HDC hdc, RECT *rcDraw);

typedef void (*PFN_LVHDR_ITEMDRAWFUNC) (HWND hWnd, int idx, HDC hdc, RECT *rcDraw);



typedef struct _LVCUSTOMDRAWFUNCS
{

    PFN_LVHDR_BKDRAWFUNC pfnDrawHdrBk;

    PFN_LVHDR_ITEMDRAWFUNC pfnDrawHdrItem;
} LVCUSTOMDRAWFUNCS;
# 199 "/usr/local/include/minigui/ext/listview.h" 3
typedef struct _LVCOLUMN
{

    int nCols;

    int width;

    char *pszHeadText;

    int nTextMax;

    DWORD image;

    PFNLVCOMPARE pfnCompare;

    DWORD colFlags;
} LVCOLUMN;

typedef LVCOLUMN *PLVCOLUMN;
# 226 "/usr/local/include/minigui/ext/listview.h" 3
typedef struct _LVFINDINFO
{
# 236 "/usr/local/include/minigui/ext/listview.h" 3
    DWORD flags;

    int iStart;

    int nCols;

    char **pszInfo;

    DWORD addData;


    int nItem;

    int nSubitem;

} LVFINDINFO;

typedef LVFINDINFO *PLVFINDINFO;


typedef struct _LVNM_NORMAL
{

    WPARAM wParam;

    LPARAM lParam;
} LVNM_NORMAL;

typedef LVNM_NORMAL *PLVNM_NORMAL;


typedef LVNM_NORMAL LVNM_KEYDOWN;

typedef LVNM_KEYDOWN *PLVNM_KEYDOWN;


typedef LVNM_NORMAL LVNM_HEADRDOWN;

typedef LVNM_HEADRDOWN *PLVNM_HEADRDOWN;


typedef LVNM_NORMAL LVNM_HEADRUP;

typedef LVNM_HEADRUP *PLVNM_HEADUP;


typedef LVNM_NORMAL LVNM_ITEMRDOWN;

typedef LVNM_ITEMRDOWN *PLVNM_ITEMRDOWN;


typedef LVNM_NORMAL LVNM_ITEMRUP;

typedef LVNM_ITEMRUP *PLVNM_ITEMRUP;
# 1252 "/usr/local/include/minigui/ext/listview.h" 3
}
# 91 "/usr/local/include/minigui/mgext.h" 2 3



# 1 "/usr/local/include/minigui/ext/treeview.h" 1 3
# 35 "/usr/local/include/minigui/ext/treeview.h" 3
extern "C" {
# 75 "/usr/local/include/minigui/ext/treeview.h" 3
typedef struct _TVITEMINFO
{

    char *text;
# 92 "/usr/local/include/minigui/ext/treeview.h" 3
    DWORD dwFlags;


    HICON hIconFold;

    HICON hIconUnfold;


    DWORD dwAddData;
} TVITEMINFO;





typedef TVITEMINFO *PTVITEMINFO;
# 538 "/usr/local/include/minigui/ext/treeview.h" 3
}
# 95 "/usr/local/include/minigui/mgext.h" 2 3







# 1 "/usr/local/include/minigui/ext/iconview.h" 1 3
# 35 "/usr/local/include/minigui/ext/iconview.h" 3
extern "C" {
# 69 "/usr/local/include/minigui/ext/iconview.h" 3
typedef GHANDLE HIVITEM;





typedef struct _IVITEMINFO
{



    int nItem;




    PBITMAP bmp;




    const char *label;


    DWORD addData;




    DWORD dwFlags;

} IVITEMINFO;
typedef IVITEMINFO* PIVITEMINFO;
# 113 "/usr/local/include/minigui/ext/iconview.h" 3
 int iconview_is_item_hilight (HWND hWnd, GHANDLE hivi);





 PBITMAP iconview_get_item_bitmap (GHANDLE hivi);





 const char* iconview_get_item_label (GHANDLE hivi);





 DWORD iconview_get_item_adddata (GHANDLE hivi);
# 446 "/usr/local/include/minigui/ext/iconview.h" 3
}
# 103 "/usr/local/include/minigui/mgext.h" 2 3



# 1 "/usr/local/include/minigui/ext/animation.h" 1 3
# 35 "/usr/local/include/minigui/ext/animation.h" 3
extern "C" {
# 54 "/usr/local/include/minigui/ext/animation.h" 3
typedef struct _ANIMATIONFRAME
{
# 65 "/usr/local/include/minigui/ext/animation.h" 3
    int disposal;

    int off_x;

    int off_y;

    unsigned int width;

    unsigned int height;


    unsigned int delay_time;


    HDC mem_dc;

    Uint8* bits;






    struct _ANIMATIONFRAME* next;

    struct _ANIMATIONFRAME* prev;
} ANIMATIONFRAME;


typedef struct _ANIMATION
{

    unsigned int width;

    unsigned int height;


    RGB bk;


    int nr_frames;




    int time_unit;

    ANIMATIONFRAME* frames;
} ANIMATION;
# 129 "/usr/local/include/minigui/ext/animation.h" 3
ANIMATION* CreateAnimationFromGIF89a (HDC hdc, MG_RWops* area);
# 145 "/usr/local/include/minigui/ext/animation.h" 3
 ANIMATION* CreateAnimationFromGIF89aFile (HDC hdc, const char* file);
# 162 "/usr/local/include/minigui/ext/animation.h" 3
 ANIMATION* CreateAnimationFromGIF89aMem (HDC hdc, const void* mem, int size);
# 176 "/usr/local/include/minigui/ext/animation.h" 3
 void DestroyAnimation (ANIMATION* anim, BOOL free_it);
# 359 "/usr/local/include/minigui/ext/animation.h" 3
}
# 107 "/usr/local/include/minigui/mgext.h" 2 3



}
# 20 "../inc/mgcomm.h" 2
# 35 "../inc/mgcomm.h"
inline int TextOut(HDC hdc,int x,int y,const char* strText) { return TextOutLen(hdc,x,y,strText,-1); }




inline int TabbedTextOut(HDC hdc, int x, int y, const char* spText){
        return TabbedTextOutLen(hdc,x,y,spText,-1);
}




inline int DrawText(HDC hdc, const char* pText, int nCount,RECT* pRect, UINT nFormat){
        return DrawTextEx2(hdc,pText,nCount,pRect,0,nFormat,__null);
}





inline unsigned int SetPenWidth(HDC hdc,DWORD width){
        return (unsigned int) SetDCAttr (hdc, 13, (DWORD) width);
}
# 6 "../inc/mgapp.h" 2
# 1 "../inc/mgwnd.h" 1





int MGLoadControls(HWND hWnd,PCTRLDATA pCtrlData,int controls);

class MGWnd
{
public:
        MGWnd()
        {
                m_hWnd = 0xFFFFFFFF;
        }
        MGWnd(HWND hWnd)
        {
                m_hWnd = 0xFFFFFFFF;
                Attach(hWnd);
        }
        virtual ~MGWnd(){}


        inline int SendMessage(int iMsg, WPARAM wParam=0, LPARAM lParam=0)
        {
                return ::SendMessage(m_hWnd,iMsg,wParam,lParam);
        }
        inline int PostMessage(int iMsg, WPARAM wParam=0, LPARAM lParam=0)
        {
                return ::PostMessage(m_hWnd,iMsg,wParam,lParam);
        }

        inline operator HWND ()
        {
                return m_hWnd;
        }

        inline HWND GetHandle(){ return m_hWnd; }

        inline HWND Attach(HWND hWndNew)
        {
                HWND hWnd = m_hWnd;
                if(IsWindow())
                {
                        SetWindowAdditionalData(hWnd,0);
                }

                m_hWnd = hWndNew;

                if(IsWindow())
                {
                        SetWindowAdditionalData(m_hWnd,(DWORD)this);
                }
                return hWnd;
        }


        static MGWnd *WndFromHandle(HWND hWnd);

        inline BOOL IsWindow()
        {
                return ::IsWindow(m_hWnd);
        }

        inline BOOL IsMainWindow()
        {
                return ::IsMainWindow(m_hWnd);
        }

        inline HWND Detach()
        {
                HWND hWnd = m_hWnd;
                if(IsWindow())
                {
                        SetWindowAdditionalData(m_hWnd,0);
                }
                m_hWnd = 0xFFFFFFFF;
                return hWnd;
        }

        inline int GetWindowText(char* txtBuf,int nMaxLen)
        {
                return SendMessage(0x0133, (WPARAM)nMaxLen, (LPARAM)txtBuf);
        }
        inline int GetWindowTextLength()
        {
                return SendMessage(0x0132);
        }
        inline char* GetWindowText(int *ptxtlen=__null)
        {
                int txtLength;
                char *txt;

                txtLength = GetWindowTextLength();
                if(ptxtlen) *ptxtlen = txtLength;
                if(txtLength>0)
                {
                        txt = new char[txtLength+1];
                        if(!txt)
                                return __null;
                        GetWindowText(txt,txtLength);
                        return txt;
                }
                return __null;
        }

        inline BOOL SetWindowText(const char* txt)
        {
                return (SendMessage(0x0134, 0 ,(LPARAM)txt) == 0);
        }
        inline BOOL MoveWindow(int x,int y,int w,int h,BOOL fPaint=1)
        {
                return ::MoveWindow(m_hWnd,x,y,w,h,fPaint);
        }
        inline BOOL MoveWindow(const RECT *prt,BOOL fPaint=1)
        {
                if(!prt) return 0;
                return ::MoveWindow(m_hWnd,prt->left,prt->top,prt->right-prt->left,prt->bottom-prt->right,fPaint);
        }
        inline const char* GetCaption()
        {
                return GetWindowCaption(m_hWnd);
        }
        inline BOOL SetCaption(const char* spCaption)
        {
                return SetWindowCaption(m_hWnd,spCaption);
        }

        inline int GetID(){return GetDlgCtrlID(m_hWnd);}

        inline int LoadControls(PCTRLDATA pctrlData,int controls){ return ::MGLoadControls(m_hWnd,pctrlData,controls); }

        inline HWND GetChild(int nItemID){ return GetDlgItem(m_hWnd,nItemID);}

        inline int GetChildInt(int nItemID) { return (int)GetDlgItemInt(m_hWnd,nItemID,__null,1); }
        inline UINT GetChildUINT(int nItemID) { return (UINT)GetDlgItemInt(m_hWnd,nItemID,__null,0); }
        inline BOOL SetChildInt(int nItemID,int iValue) { return SetDlgItemInt(m_hWnd,nItemID,(UINT)iValue,1);}
        inline BOOL SetChildInt(int nItemID,UINT uValue) { return SetDlgItemInt(m_hWnd,nItemID,uValue,0); }

        inline int GetChildText(int nItemID,char *txtBuf,int txtMax) { return GetDlgItemText(m_hWnd,nItemID,txtBuf,txtMax); }
        inline char* GetChildText(int nItemID,int *plen) { return GetDlgItemText2(m_hWnd,nItemID,plen); }
        inline BOOL SetChildText(int nItemID,const char* txt) { return SetDlgItemText(m_hWnd,nItemID,txt); }

        inline BOOL IsChildEnable(int nItemID) { return ::IsWindowEnabled(GetChild(nItemID)); }
        inline BOOL EnableChild(int nItemID,BOOL fEnable=1){ return ::EnableWindow(GetChild(nItemID),fEnable); }

        inline BOOL IsChildVisible(int nItemID){ return ::IsWindowVisible(GetChild(nItemID)); }
        inline BOOL VisibleChild(int nItemID,BOOL fVisible=1)
        {
                return ::ShowWindow(GetChild(nItemID),fVisible?0x0100:0x0000);
        }

        inline HWND GetParent(){ return ::GetParent(m_hWnd);}

        inline HWND GetNextTabItem(HWND hWndCtrl,BOOL bPrevious=0){ return GetNextDlgTabItem(m_hWnd,hWndCtrl,bPrevious); }

        inline BOOL ShowWindow(int iCmdShow=0x0100)
        {
                return ::ShowWindow(m_hWnd,iCmdShow);
        }

        inline void Destroy()
        {
                if(IsWindow())
                {
                        DestroyWindow(m_hWnd);
                        m_hWnd = 0xFFFFFFFF;
                }
        }

        inline HWND Focus(){ return SetFocusChild(m_hWnd);}

        inline void UpdateWindow(BOOL bErase=1){ return ::UpdateWindow(m_hWnd,bErase); }

        inline BOOL EnableWindow(BOOL fEnable=1){ return ::EnableWindow(m_hWnd,fEnable); }

        inline BOOL IsWindowEnabled(){ return ::IsWindowEnabled(m_hWnd); }

        inline BOOL GetWindowRect(PRECT prcWnd){ return ::GetWindowRect(m_hWnd,prcWnd); }

        inline int GetWindowBkColor(){ return ::GetWindowBkColor(m_hWnd); }

        inline int SetWindowBkColor(int new_bkcolor){ return ::SetWindowBkColor(m_hWnd,new_bkcolor); }

        inline PLOGFONT GetWindowFont(){ return ::GetWindowFont(m_hWnd); }

        inline PLOGFONT SetWindowFont(PLOGFONT new_font){ return ::SetWindowFont(m_hWnd,new_font); }

        inline HCURSOR GetWindowCursor(){ return ::GetWindowCursor(m_hWnd); }

        inline HCURSOR SetWindowCursor(HCURSOR hNewCursor){ return ::SetWindowCursor(m_hWnd,hNewCursor); }

        inline DWORD GetWindowStyle(){ return ::GetWindowStyle(m_hWnd); }

        inline DWORD GetWindowExStyle(){ return ::GetWindowExStyle(m_hWnd); }

        inline BOOL InvalidateRect(PRECT pclip=__null,BOOL bEraseBkgnd=1) {
                return ::InvalidateRect(m_hWnd,pclip,bEraseBkgnd); }

        inline BOOL GetUpdateRect(PRECT prc){ return ::GetUpdateRect(m_hWnd,prc); }

        inline void ClientToScreen(int *x,int *y){ return ::ClientToScreen(m_hWnd,x,y); }

        inline void ClientToScreen(PPOINT ppoint){ return ::ClientToScreen(m_hWnd,&ppoint->x,&ppoint->y); }

        inline void ScreenToClient(int *x,int *y){ return ::ScreenToClient(m_hWnd,x,y); }

        inline void ScreenToClient(PPOINT ppoint){ return ::ScreenToClient(m_hWnd,&ppoint->x,&ppoint->y); }

        inline void ScrollWindow(int xoffset,int yoffset,const PRECT prc1=__null,const PRECT prc2=__null) {
                ::ScrollWindow(m_hWnd,xoffset,yoffset,prc1,prc2);
        }

        inline BOOL GetClientRect(PRECT prc){ return ::GetClientRect(m_hWnd,prc); }


        inline HDC BeginPaint(){ return ::BeginPaint(m_hWnd); }
        inline void EndPaint(HDC hdc){ return ::EndPaint(m_hWnd,hdc); }

        inline HDC GetClientDC(){ return ::GetClientDC(m_hWnd); }
        inline HDC GetWindowDC(){ return ::GetDC(m_hWnd); }


        inline BOOL CreateCaret(PBITMAP pBitmap,int width,int height){ return ::CreateCaret(m_hWnd,pBitmap,width,height); }
        inline BOOL DestroyCaret(){ ::DestroyCaret(m_hWnd); }
        inline BOOL ShowCaret(){ return ::ShowCaret(m_hWnd); }
        inline BOOL HideCaret(){ return ::HideCaret(m_hWnd); }

        inline HWND GetParentAlways(){
                if(IsWindow())
                {
                        HWND hWnd;
                        hWnd = GetParent();
                        if(hWnd==0xFFFFFFFF || hWnd==(HWND)__null)
                        {
                                hWnd = ::GetHosting(m_hWnd);
                                if(hWnd==0xFFFFFFFF)
                                        return __mg_hwnd_desktop;
                        }
                        return hWnd;
                }
                return __mg_hwnd_desktop;
        }

        inline void CenterWindow(BOOL fPaint=0)
        {
                HWND hParent = GetParentAlways();
                RECT rcParent,rcSelf;
                int x,y;
                ::GetWindowRect(hParent, &rcParent);
                GetWindowRect(&rcSelf);
                x = (rcParent.right + rcParent.left - rcSelf.right + rcSelf.left)/2;
                y = (rcParent.bottom + rcParent.top - rcSelf.bottom + rcSelf.top)/2;
                if(x<0) x = 0;
                if(y<0) y = 0;
                MoveWindow(x,y,rcSelf.right-rcSelf.left,rcSelf.bottom-rcSelf.top,fPaint);
        }

        inline BOOL SetCaretPos(int x,int y){ return ::SetCaretPos(m_hWnd,x,y); }
        inline BOOL SetCaretPos(POINT pt){ return ::SetCaretPos(m_hWnd,pt.x,pt.y); }
        inline BOOL GetCaretPos(int *px,int *py)
        {
                POINT pt;
                BOOL b = ::GetCaretPos(m_hWnd,&pt);
                if(b)
                {
                        if(px) *px = pt.x;
                        if(py) *py = pt.y;
                }
                return b;
        }
        inline BOOL GetCaretPos(PPOINT ppt){ return ::GetCaretPos(m_hWnd,ppt); }
        inline UINT GetCaretBlinkTime(){ return ::GetCaretBlinkTime(m_hWnd); }
        inline BOOL SetCaretBlinkTime(UINT uTime){ return ::SetCaretBlinkTime(m_hWnd,uTime); }

        inline void CheckRadioButton(int idFirstButton, int idLastButton, int idCheckButton)
        {
                ::CheckRadioButton(m_hWnd,idFirstButton,idLastButton,idCheckButton);
        }

        inline int IsDlgButtonChecked(int idButton)
        {
                return ::IsDlgButtonChecked(m_hWnd,idButton);
        }

        inline void CheckDlgButton(int nItemID,int nCheck){ return ::CheckDlgButton(m_hWnd,nItemID,nCheck); }


        inline void MyCheckRadioButton(int idFirstButton, int idLastButton, int idCheckButton)
        {
                for(int i=idFirstButton;i<=idLastButton;i++)
                {
                        if(i==idCheckButton)
                                CheckDlgButton(i,0x0001);
                        else
                                CheckDlgButton(i,0x0000);
                }
        }

        inline void SetChildFocus(int nItemID){ SetFocusChild(GetChild(nItemID)); }

        inline int MessageBox(const char* pszCaption=__null,const char* pszText=__null,DWORD dwStyle = 0x00000000|0x00000040)
        {
                return ::MessageBox(m_hWnd,pszText,pszCaption,dwStyle);
        }

        inline int MessageBox(const char* pszCaption,DWORD dwStyle,const char* format,...)
        {
                va_list varg;
                char szText[1024];
                __builtin_stdarg_start((varg),format);
                vsprintf(szText,format,varg);
                return MessageBox(pszCaption,szText,dwStyle);
        }

        inline int InfoBox(const char* pszCaption,const char* format,...)
        {
                va_list varg;
                char szText[1024];
                __builtin_stdarg_start((varg),format);
                vsprintf(szText,format,varg);

                return MessageBox(pszCaption,szText,0x00000000|0x00000040);
        }

        inline int YesNoBox(const char* pszCaption,const char* format,...)
        {
                va_list varg;
                char szText[1024];
                __builtin_stdarg_start((varg),format);
                vsprintf(szText,format,varg);
                return MessageBox(pszCaption,szText,0x00000002|0x00000020|0x00000000);
        }

        inline int YesNoCancelBox(const char* pszCaption,const char* format,...)
        {
                va_list varg;
                char szText[1024];
                __builtin_stdarg_start((varg),format);
                vsprintf(szText,format,varg);
                return MessageBox(pszCaption,szText,0x00000005|0x00000020|0x00000000);
        }
        inline int OKCancelBox(const char* pszCaption,const char* format,...)
        {
                va_list varg;
                char szText[1024];
                __builtin_stdarg_start((varg),format);
                vsprintf(szText,format,varg);
                return MessageBox(pszCaption,szText,0x00000001|0x00000040|0x00000000);
        }


        inline BOOL SetTimer(int id,unsigned int speed){ return ::SetTimer(m_hWnd,id,speed); }
        inline void KillTimer(int id){ ::KillTimer(m_hWnd,id); }


        inline BOOL EnableScrollBar(int iSBar=1,BOOL bEnable=1)
        {
                return ::EnableScrollBar(m_hWnd,iSBar,bEnable);
        }
        inline BOOL SetScrollInfo(int iSBar,const SCROLLINFO * lpsi, BOOL fRedraw=1)
        {
                return ::SetScrollInfo(m_hWnd,iSBar,lpsi,fRedraw);
        }
        inline BOOL GetScrollInfo(int iSBar, PSCROLLINFO lpsi)
        {
                return ::GetScrollInfo(m_hWnd,iSBar,lpsi);
        }
        inline BOOL GetScrollPos(int iSBar,int *pPos)
        {
                return ::GetScrollPos(m_hWnd,iSBar,pPos);
        }
        inline int GetScrollPos(int iSBar)
        {
                int pos=0;
                return GetScrollPos(iSBar,&pos)?pos:0;
        }
        inline BOOL ShowScrollBar(int iSBar=1, BOOL bShow=1)
        {
                return ::ShowScrollBar(m_hWnd,iSBar,bShow);
        }
        inline BOOL SetScrollRange(int iSBar, int iMinPos, int iMaxPos)
        {
                return ::SetScrollRange(m_hWnd,iSBar,iMinPos,iMaxPos);
        }
        inline BOOL SetScrollPos(int iSBar, int iNewPos)
        {
                return ::SetScrollPos(m_hWnd,iSBar,iNewPos);
        }
        inline void ScrollWindow(int iOffx, int iOffy,const RECT* rc1=__null, const RECT* rc2=__null)
        {
                ::ScrollWindow(m_hWnd,iOffx,iOffy,rc1,rc2);
        }

        inline void SetCapure()
        {
                ::SetCapture(m_hWnd);
        }


protected:
        HWND m_hWnd;
};

class MGMainWnd:public MGWnd
{
public:
        MGMainWnd();
        ~MGMainWnd();
        BOOL Create(DWORD dwStyle,
                                        const char* spCaption,
                                        int x,int y,int rx,int by,
                                        HWND host=__mg_hwnd_desktop,
                                        HCURSOR hCursor=(HCURSOR)0,
                                        HMENU hMenu=(HMENU)0,
                                        HICON hIcon=(HICON)0,
                                        int iBackColor=SysPixelIndex[15],
                                        DWORD dwStyleEx=0x00000000L);

        BOOL Create(HWND hWndParent,PDLGTEMPLATE pDlgTemplate);

        inline HWND GetHosting(){return ::GetHosting(m_hWnd);}

        DWORD DoMode();

        BOOL EndDialog(DWORD dwEndRet){ return ::EndDialog(m_hWnd,dwEndRet); }

        void Destroy();

        inline HMENU GetSystemMenu(){ return ::GetSystemMenu(m_hWnd,1); }

        inline HMENU GetMenu(){ return ::GetMenu(m_hWnd); }

        inline HMENU SetMenu(HMENU hMenu){ return ::SetMenu(m_hWnd,hMenu); }

        inline int PostQuitMessage(){ return ::PostQuitMessage(m_hWnd); }

protected:

        virtual BOOL WndProc(int iMsg,WPARAM wParam,LPARAM lParam,int *pret)=0;

private:
        static int _mainWndProc(HWND hWnd,int iMsg,WPARAM wParam,LPARAM lParam);
};
# 811 "../inc/mgwnd.h"
typedef struct _pop_menu_template POPMENUTEMPLATE;
typedef POPMENUTEMPLATE * PPOPMENUTEMPLATE;
typedef struct _menu_item_template{
        int Id;
        UINT initState;
        const char* strCaption;
        PPOPMENUTEMPLATE subMenu;
}MENUITEMTEMPLATE,*PMUENUITEMTEMPLATE;

struct _pop_menu_template{
        const char* strCaption;
        int menuItemCnt;
        PMUENUITEMTEMPLATE pMenuItems;
};

typedef struct _menu_bar_template{
        int MenuItemCnt;
        PMUENUITEMTEMPLATE pMenuItems;
}MENUBARTEMPLATE,*PMENUBARTEMPLATE;


class MGMenu
{
public:
        MGMenu(){m_hMenu=(HMENU)__null;}
        MGMenu(HMENU hMenu):m_hMenu(hMenu){}
        ~MGMenu(){}

        inline HMENU Attatch(HMENU hMenu){
                HMENU hOldMenu=m_hMenu;
                m_hMenu = hMenu;
                return hOldMenu;
        }

        inline HMENU Detach(){ return Attatch((HMENU)__null);}

        inline operator HMENU(){ return m_hMenu; }

        inline BOOL CreateMenu(){m_hMenu=::CreateMenu(); return m_hMenu!=(HMENU)__null;}
        inline BOOL CreatePopupMenu(const char* strCaption,BOOL fStripPopup=0){
                MENUITEMINFO mii;
                memset(&mii,0,sizeof(mii));
                mii.type = 0x00000000L;
                mii.typedata = (DWORD)strCaption;
                m_hMenu = ::CreatePopupMenu(&mii);
                if(fStripPopup && m_hMenu!=(HMENU)__null)
                        m_hMenu = ::StripPopupHead(m_hMenu);
                return m_hMenu!=(HMENU)__null;
        }

        BOOL LoadMenuBar(PMENUBARTEMPLATE pMenuBarTemplate);
        BOOL LoadPopuoMenu(PPOPMENUTEMPLATE pPopMenuTemplate);

        inline BOOL InsertMenuItem(int item,BOOL flag,PMENUITEMINFO pmii){ return ::InsertMenuItem(m_hMenu,item,flag,pmii)==0; }

        inline BOOL InsertMenuItem(int item,int id,const char* strCaption,UINT state=0x00000000L,HMENU hSubmenu=(HMENU)__null)
        {
                MENUITEMINFO mii;
                mii.id = id;
                mii.typedata = (DWORD)strCaption;

                mii.cch = 0;
                mii.type = 0x00000000L;
                mii.state = state;
                mii.itemdata = 0;
                mii.checkedbmp = (PBITMAP)__null;
                mii.uncheckedbmp = (PBITMAP)__null;
                mii.hsubmenu = (HMENU)hSubmenu;
                mii.mask = 0x00000010|0x00000001;
                if(id>0)
                        mii.mask |= 0x00000002;
                if(strCaption)
                        mii.mask |= 0x00000040;
                if(hSubmenu)
                        mii.mask |= 0x00000004;
                return InsertMenuItem(item,0x00000400L,&mii);
        }

        inline BOOL InsertSeparator(int item)
        {
                MENUITEMINFO mii;
                mii.type = 0x00000800L;
                mii.mask = 0x00000010;
                return InsertMenuItem(item,0x00000400L,&mii);
        }

        inline int TrackPopupMenu(int x=0,int y=0,HWND hWnd=(HWND)__null,UINT flag=0x0000L)
        {
                return ::TrackPopupMenu(m_hMenu,flag,x,y,hWnd);
        }

        inline void StripPopupHead(){ m_hMenu = ::StripPopupHead(m_hMenu); }

        inline int GetMenuItemCount(){ return ::GetMenuItemCount(m_hMenu); }

        inline int GetMenuItemID(int iPos){ return ::GetMenuItemID(m_hMenu,iPos); }

        inline HMENU GetPopupSubMenu(){ return ::GetPopupSubMenu(m_hMenu); }

        inline HMENU GetSubMenu(int iPos){ return ::GetSubMenu(m_hMenu,iPos); }

        inline void EnableMenuItem(int item,BOOL fEnable=1)
        {
                ::EnableMenuItem(m_hMenu,item,0x00000400L|((fEnable)?0x00000000L:0x00000003L));
        }

        inline int GetMenuItemInfo(int item,PMENUITEMINFO pmii,BOOL flag=0x00000000L)
        {
                return ::GetMenuItemInfo(m_hMenu,item,flag,pmii);
        }

        inline int DestroyMenu(){ return ::DestroyMenu(m_hMenu); }

        inline int IsMenu(){ return ::IsMenu(m_hMenu); }

        inline int DeleteMenu(int item,BOOL flag=0x00000000L){ return ::DeleteMenu(m_hMenu,item,flag); }

        inline int RemoveMenu(int item,BOOL flag=0x00000000L){ return ::RemoveMenu(m_hMenu,item,flag); }

        inline int CheckMenuRadioItem(int first,int last,int checkItem,UINT flag=0x00000000L)
        {
                return ::CheckMenuRadioItem(m_hMenu,first,last,checkItem,flag);
        }

        inline int SetMenuItemBitmaps(int item,UINT flag=0x00000000L,PBITMAP hBmpUnchecked=__null,PBITMAP hBmpChecked=__null)
        {
                return ::SetMenuItemBitmaps(m_hMenu,item,flag,hBmpUnchecked,hBmpChecked);
        }

        inline int SetMenuItemInfo(int item,PMENUITEMINFO pmii,UINT flag=0x00000000L)
        {
                return ::SetMenuItemInfo(m_hMenu,item,flag,pmii);
        }

protected:
        HMENU m_hMenu;
};

BOOL LoadMenuItem(HMENU hMenu,int iPos,PMUENUITEMTEMPLATE pMenuItemTempl,BOOL fStripPopMenu=0);

HMENU LoadPopMenuItem(PPOPMENUTEMPLATE pPopMenuTemplate,BOOL fStripPopMenu=0);


int KMPMatch_Forward(const char *t,int n,const char* p,int m);

int KMPMatch_Backward(const char* t,int n,const char* p,int m);

int KMPMatch_Forward_NoCaps(const char *t,int n,const char* p,int m);

int KMPMatch_Backward_NoCaps(const char* t,int n,const char* p,int m);





template<class TMGWnd>
class TMGScrollWnd
{
public:


        int DoScroll(int iSBar,int nc,int pos,int line,BOOL bReDraw=1)
        {
                SCROLLINFO si;
                int nPos;
                si.cbSize = sizeof(si);
                si.fMask = (0x0001 | 0x0002 | 0x0004 | 0x0010);
                if(!((static_cast<TMGWnd*>(this))->GetScrollInfo(iSBar,&si)))
                        return -1;
                nPos = si.nPos;

                switch(nc)
                {
                case 0x01:
                case 0x03:
                        nPos -= line;
                        break;
                case 0x02:
                case 0x04:
                        nPos += line;
                        break;
                case 0x05:
                case 0x07:
                        nPos -= si.nPage;
                        break;
                case 0x06:
                case 0x08:
                        nPos += si.nPage;
                        break;
                case 0x09:
                        nPos = pos;
                        break;
                case 0x0A:
                        nPos = pos;
                        break;
                case 0x0B:
                        return -1;
                default:
                        return -1;
                }
                if(nPos<si.nMin)
                        nPos = si.nMin;
                else if(nPos>=si.nMax)
                        nPos = si.nMax-1;

                si.nPos = nPos;
                (static_cast<TMGWnd*>(this))->SetScrollInfo(iSBar,&si,bReDraw);

                return nPos;
        }

        BOOL UpdateScroll(int iSBar,int view_size,int client_size=-1,BOOL bRedraw=0)
        {
                SCROLLINFO si;
                if(client_size<=0)
                {
                        RECT rt;
                        (static_cast<TMGWnd*>(this))->GetClientRect(&rt);
                        if(iSBar==1)
                                client_size = rt.right - rt.left;
                        else
                                client_size = rt.bottom - rt.top;
                }

                if(view_size<=client_size)
                {
                        si.nPos = 0;
                        (static_cast<TMGWnd*>(this))->SetScrollInfo(iSBar,&si);
                        (static_cast<TMGWnd*>(this))->ShowScrollBar(iSBar,0);
                        return 0;
                }

                memset(&si,0,sizeof(si));
                si.cbSize = sizeof(si);
                si.fMask = (0x0001 | 0x0002 | 0x0004 | 0x0010);
                (static_cast<TMGWnd*>(this))->ShowScrollBar(iSBar,1);
                (static_cast<TMGWnd*>(this))->GetScrollInfo(iSBar,&si);
                (static_cast<TMGWnd*>(this))->EnableScrollBar(iSBar,bRedraw);
                si.nMax = view_size;
                si.nMin = 0;
                (static_cast<TMGWnd*>(this))->SetScrollRange(iSBar,si.nMin,si.nMax);
                si.nPage = client_size;
                if(si.nPos<0)
                        si.nPos = 0;
                else if(si.nPos>=si.nMax)
                        si.nPos = si.nMax;

                (static_cast<TMGWnd*>(this))->SetScrollInfo(iSBar,&si,bRedraw);

                return 1;
        }

        void OnScroll(int iSBar,int nc,int pos,int line=1)
        {
                int newpos = DoScroll(iSBar,nc,pos,line,1);
                if(newpos<0)
                        return;
                if(iSBar==1)
                        (static_cast<TMGWnd*>(this))->UpdateScrollWnd(newpos,0,0x01);
                else
                        (static_cast<TMGWnd*>(this))->UpdateScrollWnd(0,newpos,0x02);
        }
};
# 7 "../inc/mgapp.h" 2
# 22 "../inc/mgapp.h"
class MGApp
{
public:
        MGApp();
        virtual ~MGApp();

        virtual BOOL OnInitInstance();

        int argc;
        char **argv;
        int DoMessageLoop();
protected:
        MGMainWnd * m_pMainWnd;
        HACCEL m_hAccel;
};







class MGClient:public MG_Client
{
public:
        MGClient();
        ~MGClient();
};

class MGLayer:public MG_Layer
{
public:
        MGLayer();
        ~MGLayer();
};

class MGServerApp:public MGApp
{
public:
        MGServerApp();
        virtual ~MGServerApp();

        virtual BOOL OnInitInstance();

        virtual BOOL InitServer(int nr_globals=0,int def_nr_topmosts=0,int def_nr_normals=0);

protected:

        int m_clientCount;
        virtual BOOL OnNewClient(MGClient* pClient);
        virtual BOOL OnDeleteClient(MGClient* pClient);

        int m_layerCount;
        virtual BOOL OnNewLayer(MGLayer *pLayer,MGClient *pClient);
        virtual BOOL OnDeleteLayer(MGLayer *pLayer,MGClient *pClient);
        virtual BOOL OnJoinClient(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnRemoveClient(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnTopMostChanged(MGLayer* pLayer,MGClient *pClient);
        virtual BOOL OnActiveChanged(MGLayer* pLayer,MGClient *pClient);

private:
        static void _on_new_del_client (int op, int cli);
        static void _on_change_layer (int op, MG_Layer* layer, MG_Client* client);
};
# 3 "mgapp.cpp" 2


extern MGApp *__mgCurApp__;
int MiniGUIAppMain (int args, const char* argv[]); int main (int args, const char* argv[]) { int iRet = 0; if (InitGUI (args, argv) != 0) { return 1; } iRet = MiniGUIAppMain (args, argv); TerminateGUI (iRet); return iRet; } int MiniGUIAppMain(int argc,char* argv[])
{
        if(__mgCurApp__)
        {
                fprintf(stderr,"MGFC Have No CurApp. \nPlease deleare a MGFC Application extend from MGApp,\n");
                fprintf(stderr,"and user macor DECLEAR_MAIN set CurApp\n");
                return -2;
        }
        __mgCurApp__->argc = argc;
        __mgCurApp__->argv = argv;
        if(__mgCurApp__->OnInitInstance())
        {
                printf("Init Instance Failed\n");
                return -3;
        }
        return __mgCurApp__->DoMessageLoop();
}



MGApp::MGApp()
{
        argc = 0;
        argv = __null;
        m_pMainWnd = __null;
        m_hAccel = 0;
}

MGApp::~MGApp()
{
        if(m_hAccel)
        {
                DestroyAcceleratorTable(m_hAccel);
        }
        MiniGUIExtCleanUp();
}

BOOL MGApp::OnInitInstance()
{

    int i;
    const char* layer = __null;

    for (i = 1; i < argc; i++) {
        if (strcmp (argv[i], "-layer") == 0) {
            layer = argv[i + 1];
            break;
        }
    }

    GetLayerInfo (layer, __null, __null, __null);

    if (JoinLayer (layer, argv[0], 0, 0) == 0) {
        fprintf (stderr,"JoinLayer: invalid layer handle.\n");
        return 1;
    }


        return 1;
# 74 "mgapp.cpp"
}

int MGApp::DoMessageLoop()
{
        MSG msg;
        HWND hMainWnd;

        if(m_pMainWnd==__null || !m_pMainWnd->IsMainWindow())
        {
                fprintf(stderr,"No Main Wnd,please Set the Main Wnd in your MGApp class\n");
                return -3;
        }

        hMainWnd = m_pMainWnd->GetHandle();

        while(GetMessage(&msg,hMainWnd)){
                if(!m_hAccel || (m_hAccel && TranslateAccelerator(m_hAccel, &msg)))
                {
                        TranslateMessage(&msg);
                        DispatchMessage(&msg);
                }
        }

        m_pMainWnd->Detach();
        MainWindowThreadCleanup(hMainWnd);

        return 0;
}





MGServerApp::MGServerApp()
{
        OnNewDelClient = MGServerApp::_on_new_del_client;
        OnChangeLayer = MGServerApp::_on_change_layer;
        m_clientCount = 0;
        m_layerCount = 0;
}

MGServerApp::~MGServerApp()
{
}

BOOL MGServerApp::InitServer(int nr_globals ,int def_nr_topmosts ,int def_nr_normals )
{
        return ServerStartup(nr_globals,def_nr_topmosts,def_nr_normals);
}

BOOL MGServerApp::OnInitInstance()
{
        if(!InitServer())
        {
                fprintf(stderr,"Can not start the server of MiniGUI-Processes\n");
                return 0;
        }

        return 1;
# 142 "mgapp.cpp"
}


void MGServerApp::_on_new_del_client (int op, int cli)
{
        if(__mgCurApp__)
        {
                MGServerApp *pServ = (MGServerApp*) __mgCurApp__;
                MG_Client * client = mgClients + cli;

                if(op==1)
                {
                        pServ->m_clientCount ++;
                        pServ->OnNewClient(static_cast<MGClient*>(client));
                }
                else if(op==2)
                {
                        pServ->m_clientCount --;
                        if(pServ->m_clientCount<=0)
                        {
                                fprintf(stderr,"there is none of clients in MGFC Server\n");
                        }
                        else
                        {
                                pServ->OnDeleteClient(static_cast<MGClient*>(client));
                        }
                }
                else
                {
                        fprintf(stderr,"unknown operation(%d) in MGFC Server\n",op);
                }
        }
}

void MGServerApp::_on_change_layer (int op, MG_Layer* layer, MG_Client* client)
{
        if(__mgCurApp__)
        {
                MGServerApp *pServ = (MGServerApp*) __mgCurApp__;
                switch(op)
                {
                case 1:
                        pServ->m_layerCount ++;
                        pServ->OnNewLayer(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                case 2:
                        pServ->m_layerCount --;
                        pServ->OnDeleteLayer(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                case 3:
                        pServ->OnJoinClient(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                case 4:
                        pServ->OnRemoveClient(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                case 5:
                        pServ->OnTopMostChanged(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                case 6:
                        pServ->OnActiveChanged(static_cast<MGLayer*>(layer),static_cast<MGClient*>(client));
                        break;
                default:
                        fprintf(stderr,"unknown operation(%d) of layer in MGFC Server\n",op);
                        break;
                }
        }
}

BOOL MGServerApp::OnNewClient(MGClient* pClient)
{
        return 1;
}

BOOL MGServerApp::OnDeleteClient(MGClient* pClient)
{
        return 1;
}

BOOL MGServerApp::OnNewLayer(MGLayer *pLayer,MGClient *pClient)
{

        return 1;
}

BOOL MGServerApp::OnDeleteLayer(MGLayer *pLayer,MGClient *pClient)
{
        return 1;
}

BOOL MGServerApp::OnJoinClient(MGLayer* pLayer,MGClient *pClient)
{
        return 1;
}

BOOL MGServerApp::OnRemoveClient(MGLayer* pLayer,MGClient *pClient)
{
        return 1;
}

BOOL MGServerApp::OnTopMostChanged(MGLayer* pLayer,MGClient *pClient)
{

        return 1;
}

BOOL MGServerApp::OnActiveChanged(MGLayer* pLayer,MGClient *pClient)
{
        return 1;
}
