#include <main.h>
int K[] = {0x80,0xf7,0xeb,0xdd,0xbe};
int T[] = {0xfe,0xfe,0x80,0xfe,0xfe};
int U[] = {0xc0,0xbf,0xbf,0xbf,0xc0};

int yazdir(int karakter[5]){
   int sayac,tekrarSayisi,portc[] = {0b00010000, 0b00001000, 0b00000100,0b00000010,0b00000001};
                        // 16           8           4           2         1
  for(tekrarSayisi = 0; tekrarSayisi < 30; tekrarSayisi++){
      for(sayac = 0; sayac <5 ; sayac++ ){
      output_b(karakter[sayac]);
      output_c(portc[sayac]);
      delay_ms(40);
   }
  
  }
 return 1;
}

void main()
{
   set_tris_b(0x00);
   set_tris_c(0x00);
   output_b(0x00);
   output_c(0x00);
   
   while(TRUE)
   {
   //8 ms
   yazdir(K);
   yazdir(T);
   yazdir(U);
   
   }

}
