 SEARCH_DIR(/vex/gnu/decstation-ultrix/lib);
ENTRY(__start)
SECTIONS
{
  .text ALIGN(0x100) : {
     _ftext = . ;
    *(.init)
    *(.text)
     etext  =  .;
     _etext  =  .;
  }
  .data ALIGN(0x100) : {
    *(.rdata)
    *(.data)
    *(.sdata)
    *(.scommon)
  }
  .bss ALIGN(0x100) : {
    *(.bss)
    *(.sbss)
    *(COMMON)
  }
   end = .;
   _end = .;
}
