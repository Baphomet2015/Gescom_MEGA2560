// ----------------------------------------------------------
//
//                       GESCOM 
//                 Gestor de comandos
//            Version para Arduino MEGA2560
// 
// Autor:
// Fichero:        gescom_MEGA2560_Interfaz_V3.ino
// Hardware:       -
// Version:        1.0
//
// Funcionalidad:  Procesador de Comandos
//
// Notas:          
//                 
//                 
//                 
// ----------------------------------------------------------
                  
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <Arduino.h>
#include <Gescom_MEGA2560_V3.h>


  




// ---------------------------------------------------------
//
//
//
//         FUNCIONES DE IMPLEMENTACION DE COMANDOS
//
//
// . Este fichero se debe inlcuir en el proyecto de usuario 
//   que utilice el gestor de comandos.
//
// . En este fichero se deben crear  tantas  funciones  del
//   tipo ,
//
//      char* cmd_Comando_XX( unsigned int tComando,
//                            unsigned int param1  ,
//                            unsigned int param2
//                          )
//    como comandos se hayan definido.
//
//  . En el nombre de las funciones se debe sustituir el "XX"
//    por el numero en hexadecimal del comando que se asocia  
//
// ---------------------------------------------------------





// ---------------------------------------------------------
//
// char* cmd_Comando_XX( unsigned int tComando,
//                       unsigned int param1  ,
//                       unsigned int param2
//                     )
//
// Ejecuta  el  comando  IDE_COMANDO_XX,  si es correcta su
// sintaxis
// Uso:      
// Sintaxis: 
//           comando:    -
//           parametro1: -
//           parametro2: -
//
// Retorna:
// . True  Todo correcto
// . False Error en la ejecucion
// 
// ---------------------------------------------------------

char* cmd_Comando_XX(unsigned int tComando,unsigned int param1,unsigned int param2)
{
  char* resultado;



  resultado = NULL;
  

  
  return( resultado );
}


