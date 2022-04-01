//MingZhao  2022.03.26

void _strwrite(char *string) {
  char *p_strdst = (char *)(0xb8000);  //指向显存开始的地址
  while(*string) {
    *p_strdst = *string++;
    p_strdst += 2;  //每两个字节对应一个字符，其中一个字节是字符的ASCII码，另一个字节为字符的的颜色值
  }
  return;
}

void printf(char *fmt, ...) {
  _strwrite(fmt);
  return;
}
